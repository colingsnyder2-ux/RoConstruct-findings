// roc 2008-06 0071a710  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071a710
//
// 0071a710  b82cf18500           mov eax, 0x85f12c
// 0071a715  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0071a710()
{
    return &G;
}
