// roc 2007-08 006e0400  unit: CXTPDockingPaneMiniWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0400
//
// 006e0400  b87c997d00           mov eax, 0x7d997c
// 006e0405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006e0400()
{
    return &G;
}
