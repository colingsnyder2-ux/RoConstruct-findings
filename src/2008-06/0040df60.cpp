// from server: 100% by auto
// roc 2008-06 0040df60  unit: CBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040df60
//
// 0040df60  b858cf8000           mov eax, 0x80cf58
// 0040df65  c3                   ret 

extern char G;

char* func_0040df60()
{
    return &G;
}
