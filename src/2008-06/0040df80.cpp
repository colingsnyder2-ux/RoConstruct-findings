// roc 2008-06 0040df80  unit: CPlayBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040df80
//
// 0040df80  b890cf8000           mov eax, 0x80cf90
// 0040df85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040df80()
{
    return &G;
}
