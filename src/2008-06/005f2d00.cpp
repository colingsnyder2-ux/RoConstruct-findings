// from server: 100% by atomic.potato
// roc 2008-06 005f2d00  unit: UString_sink::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2d00
//
// 005f2d00  0fb6442404           movzx eax, byte ptr [esp + 4]
// 005f2d05  8b5158               mov edx, dword ptr [ecx + 0x58]
// 005f2d08  f7d8                 neg eax
// 005f2d0a  1bc0                 sbb eax, eax
// 005f2d0c  83e010               and eax, 0x10
// 005f2d0f  83e2ef               and edx, 0xffffffef
// 005f2d12  0bc2                 or eax, edx
// 005f2d14  894158               mov dword ptr [ecx + 0x58], eax
// 005f2d17  c20400               ret 4

struct S
{
    unsigned char padding[0x58];
    unsigned int value;
    void f(unsigned char enabled);
};

void S::f(unsigned char enabled)
{
    value = (value & 0xffffffefU) | (enabled ? 0x10U : 0U);
}
