//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//


@interface _TtC5Vimeo19LogInViewController : UIViewController
{
    // Error parsing type: , name: emailTextField
    // Error parsing type: , name: passwordTextField
    // Error parsing type: , name: forgotPasswordButton
}

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)resetPasswordWithEmail:(id)arg1;
- (void)didTapForgotPasswordButton:(id)arg1;
- (void)didTapLoginButton:(id)arg1;
- (void)setup;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setInputEnabled:(_Bool)arg1;
- (void)configureForPasswordResetActivityWithActivity:(_Bool)arg1;

@end
