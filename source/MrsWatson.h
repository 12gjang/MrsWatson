//
//  MrsWatson.h
//  MrsWatson
//
//  Created by Nik Reiman on 1/2/12.
//  Copyright (c) 2012 Teragon Audio. All rights reserved.
//

#include "CharString.h"

#ifndef MrsWatson_MrsWatson_h
#define MrsWatson_MrsWatson_h

#define PROGRAM_NAME "MrsWatson"
#define VERSION_MAJOR 0
#define VERSION_MINOR 1
#define VERSION_PATCH 0

#define OFFICIAL_WEBSITE "http://www.teragonaudio.com"
// TODO: This URL doesn't exist yet. Be sure to double-check it before releasing anything.
#define SUPPORT_WEBSITE "https://github.com/teragonaudio/mrswatson/issues"
#define SUPPORT_EMAIL "support@teragonaudio.com"

#define COPYRIGHT_HOLDER "Teragon Audio"
#define LICENSE_STRING "Redistribution and use in source and binary forms, with or without " \
"modification, are permitted provided that the following conditions are met:\n\n" \
"* Redistributions of source code must retain the above copyright notice, this list of " \
"conditions and the following disclaimer.\n" \
"* Redistributions in binary form must reproduce the above copyright notice, this list of " \
"conditions and the following disclaimer in the documentation and/or other materials " \
"provided with the distribution.\n\n" \
"THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\" AND ANY " \
"EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF " \
"MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE " \
"COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, " \
"EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE " \
"GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED " \
"AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING " \
"NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED " \
"OF THE POSSIBILITY OF SUCH DAMAGE."

typedef enum {
  RETURN_CODE_SUCCESS,
  RETURN_CODE_NOT_RUN,
  RETURN_CODE_INVALID_ARGUMENT,
  RETURN_CODE_MISSING_REQUIRED_OPTION,
} ReturnCodes;

void fillVersionString(CharString outString);

#endif
