// roc 2009-06 00425db0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00425db0
//
// 00425db0  b800f39d00           mov eax, 0x9df300
// 00425db5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00425db0()
{
    return &G;
}
