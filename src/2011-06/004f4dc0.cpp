// roc 2011-06 004f4dc0  unit: RBX::VContentId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4dc0
//
// 004f4dc0  b8dcabc000           mov eax, 0xc0abdc
// 004f4dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f4dc0()
{
    return &G;
}
