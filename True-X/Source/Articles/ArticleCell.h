//
//  ArticleCell.h
//  True-X
//
//  Created by Dao Nguyen on 5/11/13.
//  Copyright (c) 2013 Dao Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ArticleCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *thumbnailImageView;
@property (weak, nonatomic) IBOutlet UITextView *titleTextView;

@end
