// roc 2012-06 0049c660  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049c660
//
// 0049c660  b8b8f7b500           mov eax, 0xb5f7b8
// 0049c665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0049c660()
{
    return &G;
}
