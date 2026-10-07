// roc 2007-08 00534b40  unit: G3D::VVector3::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00534b40
//
// 00534b40  b8b4998900           mov eax, 0x8999b4
// 00534b45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00534b40()
{
    return &G;
}
