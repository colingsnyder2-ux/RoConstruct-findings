// roc 2011-06 004f5880  unit: RBX::VUDim2::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f5880
//
// 004f5880  b848acc200           mov eax, 0xc2ac48
// 004f5885  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f5880()
{
    return &G;
}
