// roc 2009-06 00440650  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00440650
//
// 00440650  8b542404             mov edx, dword ptr [esp + 4]
// 00440654  56                   push esi
// 00440655  8bf1                 mov esi, ecx
// 00440657  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044065a  8b01                 mov eax, dword ptr [ecx]
// 0044065c  8b4008               mov eax, dword ptr [eax + 8]
// 0044065f  52                   push edx
// 00440660  ffd0                 call eax
// 00440662  d95c2408             fstp dword ptr [esp + 8]
// 00440666  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00440669  8b11                 mov edx, dword ptr [ecx]
// 0044066b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044066f  8b5208               mov edx, dword ptr [edx + 8]
// 00440672  50                   push eax
// 00440673  ffd2                 call edx
// 00440675  d85c2408             fcomp dword ptr [esp + 8]
// 00440679  5e                   pop esi
// 0044067a  dfe0                 fnstsw ax
// 0044067c  f6c444               test ah, 0x44
// 0044067f  7a08                 jp 0x440689
// 00440681  b801000000           mov eax, 1
// 00440686  c20800               ret 8
// 00440689  33c0                 xor eax, eax
// 0044068b  c20800               ret 8
// copied from an identical function in another client (function ?equal@S@@QAE_NPAX0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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