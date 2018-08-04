// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

// IF AT SOME POINT I WANT TO CREATE MY OWN LOGGING CATEGORIES, I WOULD USE THE FOLLOWING:

// DECLARE_LOG_CATEGORY_EXTERN ( CategoryName, DefaultVerbosity, CompileTimeVerbosity )
// CategoryName is simply the name for the new category you are defining.
// DefaultVerbosity is the verbosity level used when one is not specified in the ini files or on the command line. Anything more verbose than this will not be logged.
// CompileTimeVerbosity is the maximum verbosity to compile in the code. Anything more verbose than this will not be compiled.

DECLARE_LOG_CATEGORY_EXTERN ( LogProjectX, Display, All );