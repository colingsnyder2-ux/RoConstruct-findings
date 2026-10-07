// roc 2011-06 004f4b40  unit: RBX::VFaces::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4b40
//
// 004f4b40  b868afc200           mov eax, 0xc2af68
// 004f4b45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f4b40()
{
    return &G;
}
