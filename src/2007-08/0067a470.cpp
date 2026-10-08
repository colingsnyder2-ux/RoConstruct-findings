// roc 2007-08 0067a470  unit: CXTPControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a470
//
// 0067a470  b80cd87c00           mov eax, 0x7cd80c
// 0067a475  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067a470()
{
    return &G;
}
