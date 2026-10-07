// roc 2010-06 0047cda0  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047cda0
//
// 0047cda0  b8b8c2b700           mov eax, 0xb7c2b8
// 0047cda5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0047cda0()
{
    return &G;
}
