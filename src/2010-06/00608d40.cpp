// roc 2010-06 00608d40  unit: RBX::Workspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00608d40
//
// 00608d40  b8009ec100           mov eax, 0xc19e00
// 00608d45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00608d40()
{
    return &G;
}
