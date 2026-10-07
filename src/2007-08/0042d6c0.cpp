// roc 2007-08 0042d6c0  unit: boost::any::_N::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d6c0
//
// 0042d6c0  b8e0278800           mov eax, 0x8827e0
// 0042d6c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042d6c0()
{
    return &G;
}
