// roc 2012-06 0047a230  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047a230
//
// 0047a230  b8acb7b500           mov eax, 0xb5b7ac
// 0047a235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0047a230()
{
    return &G;
}
