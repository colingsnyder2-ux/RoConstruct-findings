// roc 2010-06 00592e70  unit: RBX::Reflection::$$CBUTuple::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00592e70
//
// 00592e70  b82452b800           mov eax, 0xb85224
// 00592e75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00592e70()
{
    return &G;
}
