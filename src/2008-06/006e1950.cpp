// roc 2008-06 006e1950  unit: CXTPMDIFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1950
//
// 006e1950  b818608500           mov eax, 0x856018
// 006e1955  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006e1950()
{
    return &G;
}
