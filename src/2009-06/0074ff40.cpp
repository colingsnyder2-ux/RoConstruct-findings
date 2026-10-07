// roc 2009-06 0074ff40  unit: CInstanceRecord  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ff40
//
// 0074ff40  b84061a200           mov eax, 0xa26140
// 0074ff45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0074ff40()
{
    return &G;
}
