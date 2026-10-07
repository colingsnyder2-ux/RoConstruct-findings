// roc 2007-08 00524640  unit: G3D::Line  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00524640
//
// 00524640  b8808d5b00           mov eax, 0x5b8d80
// 00524645  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00524640()
{
    return 0x5b8d80u;
}
