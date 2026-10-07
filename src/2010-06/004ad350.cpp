// roc 2010-06 004ad350  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ad350
//
// 004ad350  b8d886b800           mov eax, 0xb886d8
// 004ad355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004ad350()
{
    return &G;
}
