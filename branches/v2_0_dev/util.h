// Copyright (c) 2009 Imageshack Corp.
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 

#ifndef _UTIL_H__
#define _UTIL_H__

#define max(a, b)   ((a) > (b) ? (a) : (b))
//#define DEBUG 1

void LogStringArray(NSArray* ar, NSString* descriptionString);//descriptionString may be NULL
void LogStringSet(NSSet* set, NSString* descriptionString);//descriptionString may be NULL
void LogDictionaryStringKeys(NSDictionary* dict, NSString* descriptionString);//descriptionString may be NULL

UIActionSheet * ShowActionSheet(NSString* title, id <UIActionSheetDelegate> delegate, 
									NSString *cancelButtonTitle, UIView* forView);
	
// may cause a crash in non main thead
UIImage* imageScaledToSize(UIImage* image, int maxDimension);
int isImageNeedToConvert(UIImage* testImage, BOOL *needToResize, BOOL *needToRotate);

NSArray* linksFromText(NSString *text);
NSString* yFrogLinkFromText(NSString *text);
NSString* ValidateYFrogLink(NSString *url);
BOOL isVideoLink(NSString *yfrogUrl);
NSString* getLinkWithTag(NSString *tag);

NSString *DecodeEntities(NSString *str);

NSURLRequest* tweeteroURLRequest(NSURL* url);
NSMutableURLRequest* tweeteroMutableURLRequest(NSURL* url);
BOOL isNullable(id obj);

#endif