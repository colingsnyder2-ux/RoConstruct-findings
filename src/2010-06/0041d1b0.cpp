// roc 2010-06 0041d1b0  unit: CRobloxTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041d1b0
//
// 0041d1b0  b8803ca000           mov eax, 0xa03c80
// 0041d1b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041d1b0()
{
    return &G;
}
