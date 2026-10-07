// roc 2007-08 0040ed80  unit: CChildFrame  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0040ed80
//
// 0040ed80  b8dc6a7800           mov eax, 0x786adc
// 0040ed85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040ed80()
{
    return &G;
}
