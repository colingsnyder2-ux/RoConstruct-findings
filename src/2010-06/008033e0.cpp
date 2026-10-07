// roc 2010-06 008033e0  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008033e0
//
// 008033e0  b84403a600           mov eax, 0xa60344
// 008033e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008033e0()
{
    return &G;
}
