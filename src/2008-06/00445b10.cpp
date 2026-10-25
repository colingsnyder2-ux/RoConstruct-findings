// from server: 100% by king_originala
// roc 2008-06 00445b10  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445b10
//
// 00445b10  8b542404             mov edx, dword ptr [esp + 4]
// 00445b14  56                   push esi
// 00445b15  8bf1                 mov esi, ecx
// 00445b17  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00445b1a  8b01                 mov eax, dword ptr [ecx]
// 00445b1c  8b4008               mov eax, dword ptr [eax + 8]
// 00445b1f  52                   push edx
// 00445b20  ffd0                 call eax
// 00445b22  d95c2408             fstp dword ptr [esp + 8]
// 00445b26  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00445b29  8b11                 mov edx, dword ptr [ecx]
// 00445b2b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00445b2f  8b5208               mov edx, dword ptr [edx + 8]
// 00445b32  50                   push eax
// 00445b33  ffd2                 call edx
// 00445b35  d85c2408             fcomp dword ptr [esp + 8]
// 00445b39  5e                   pop esi
// 00445b3a  dfe0                 fnstsw ax
// 00445b3c  f6c444               test ah, 0x44
// 00445b3f  7a08                 jp 0x445b49
// 00445b41  b801000000           mov eax, 1
// 00445b46  c20800               ret 8
// 00445b49  33c0                 xor eax, eax
// 00445b4b  c20800               ret 8

struct Reader {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual float get(void* object) = 0;
};

struct S {
    unsigned char padding[24];
    Reader* reader;
    bool equal(void* first, void* second);
};

#pragma float_control(precise, off, push)
bool S::equal(void* first, void* second)
{
    float value = reader->get(first);
    return reader->get(second) == value;
}
#pragma float_control(pop)
