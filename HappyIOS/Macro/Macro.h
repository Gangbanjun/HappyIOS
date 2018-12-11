//
//  Macro.h
//  HappyIOS
//
//  Created by Air on 2018/12/12.
//  Copyright © 2018年 YC. All rights reserved.
//
/*********1*******打印日志****************/
#ifdef DEBUG
#define EZLog(...) NSLog(__VA_ARGS__)
#else
#define EZLog(...)
#endif
/***************************************/

/*********2*******iOS版本****************/
#define IOS7 [[[UIDevice currentDevice]systemVersion] floatValue] >= 7.0
#define IOS8 [[[UIDevice currentDevice]systemVersion] floatValue] >= 8.0
#define IOS9 [[[UIDevice currentDevice]systemVersion] floatValue] >= 9.0
#define IOS9_3 [[[UIDevice currentDevice]systemVersion] floatValue] >= 9.3
/***************************************/

/*********3*******对象判空****************/
#define IsNilOrNull(_ref) (((_ref) == nil)||([(_ref) isEqual:[NSNull null]]))

#define IsEmptyStr(_ref) (((_ref) == nil)||([(_ref) isEqual:[NSNull null]])||(![(_ref) isKindOfClass:[NSString class]])||[NSString stringWithFormat:@"%@",_ref].length == 0)

#define IsEmptyList(_ref) (((_ref) == nil)||([(_ref) isEqual:[NSNull null]])||(![(_ref) isKindOfClass:[NSArray class]])||((_ref).count==0))
/***************************************/

/*********4*******屏幕适配size****************/
#define YCScreenH  [[UIScreen mainScreen] bounds].size.height
#define YCScreenW  [[UIScreen mainScreen] bounds].size.width
#define Screen_Base_Width 375.0///iPhone6
#define Scale_Ratio YCScreenW / Screen_Base_Width
#define SIZE(_ref) _ref*Scale_Ratio
#define FontSize8  8.f  * Scale_Ratio
#define FontSize9  9.f  * Scale_Ratio
#define FontSize10 10.f  * Scale_Ratio
#define FontSize11 11.f * Scale_Ratio
#define FontSize12 12.f * Scale_Ratio
/***************************************/

/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
/*********1*******界****************/

/***************************************/
