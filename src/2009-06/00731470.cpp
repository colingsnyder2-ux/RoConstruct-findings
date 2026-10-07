// roc 2009-06 00731470  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00731470
//
// 00731470  b8182e8f00           mov eax, 0x8f2e18
// 00731475  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00731470()
{
    return &G;
}
