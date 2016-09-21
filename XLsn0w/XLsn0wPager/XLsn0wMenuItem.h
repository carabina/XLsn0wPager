/*********************************************************************************************
 *   __      __   _         _________     _ _     _    _________   __         _         __   *
 *	 \ \    / /  | |        | _______|   | | \   | |  |  ______ |  \ \       / \       / /   *
 *	  \ \  / /   | |        | |          | |\ \  | |  | |     | |   \ \     / \ \     / /    *
 *     \ \/ /    | |        | |______    | | \ \ | |  | |     | |    \ \   / / \ \   / /     *
 *     /\/\/\    | |        |_______ |   | |  \ \| |  | |     | |     \ \ / /   \ \ / /      *
 *    / /  \ \   | |______   ______| |   | |   \ \ |  | |_____| |      \ \ /     \ \ /       *
 *   /_/    \_\  |________| |________|   |_|    \__|  |_________|       \_/       \_/        *
 *                                                                                           *
 *********************************************************************************************/

#import <UIKit/UIKit.h>

@class XLsn0wMenuItem;

typedef NS_ENUM(NSUInteger, WMMenuItemState) {
    WMMenuItemStateSelected,
    WMMenuItemStateNormal,
};

@protocol WMMenuItemDelegate <NSObject>
@optional
- (void)didPressedMenuItem:(XLsn0wMenuItem *)menuItem;
@end

@interface XLsn0wMenuItem : UILabel
/** 设置rate,并刷新标题状态 */
@property (nonatomic, assign) CGFloat rate;

/** normal状态的字体大小，默认大小为15 */
@property (nonatomic, assign) CGFloat normalSize;

/** selected状态的字体大小，默认大小为18 */
@property (nonatomic, assign) CGFloat selectedSize;

/** normal状态的字体颜色，默认为黑色 (可动画) */
@property (nonatomic, strong) UIColor *normalColor;

/** selected状态的字体颜色，默认为红色 (可动画) */
@property (nonatomic, strong) UIColor *selectedColor;

@property (nonatomic, assign, getter=isSelected) BOOL selected;
@property (nonatomic, weak) id<WMMenuItemDelegate> delegate;
/** 进度条的速度因数，默认为 15，越小越快， 大于 0 */
@property (nonatomic, assign) CGFloat speedFactor;

- (void)selectedItemWithoutAnimation;
- (void)deselectedItemWithoutAnimation;

@end
