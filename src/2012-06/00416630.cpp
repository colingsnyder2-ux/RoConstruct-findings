// roc 2012-06 00416630  unit: CIDEBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00416630
//
// 00416630  b86457b400           mov eax, 0xb45764
// 00416635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00416630()
{
    return &G;
}
