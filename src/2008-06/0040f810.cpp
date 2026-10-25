// from server: 100% by auto
// roc 2008-06 0040f810  unit: CBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f810
//
// 0040f810  b814d48000           mov eax, 0x80d414
// 0040f815  c3                   ret 

extern char G;

char* func_0040f810()
{
    return &G;
}
