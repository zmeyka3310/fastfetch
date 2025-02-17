#pragma once

#include "fastfetch.h"

typedef struct FFOpenGLResult
{
    FFstrbuf version;
    FFstrbuf renderer;
    FFstrbuf vendor;
    FFstrbuf slv;
    FFstrbuf library;
} FFOpenGLResult;

const char* ffDetectOpenGL(FFOpenGLOptions* options, FFOpenGLResult* result);
