// roc 2009-06 006276a0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006276a0
//
// 006276a0  8b542408             mov edx, dword ptr [esp + 8]
// 006276a4  83ec18               sub esp, 0x18
// 006276a7  56                   push esi
// 006276a8  8bf1                 mov esi, ecx
// 006276aa  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006276ad  8b01                 mov eax, dword ptr [ecx]
// 006276af  8b4008               mov eax, dword ptr [eax + 8]
// 006276b2  52                   push edx
// 006276b3  8d542408             lea edx, [esp + 8]
// 006276b7  52                   push edx
// 006276b8  ffd0                 call eax
// 006276ba  8b442420             mov eax, dword ptr [esp + 0x20]
// 006276be  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006276c1  8b11                 mov edx, dword ptr [ecx]
// 006276c3  8b5208               mov edx, dword ptr [edx + 8]
// 006276c6  50                   push eax
// 006276c7  8d442414             lea eax, [esp + 0x14]
// 006276cb  50                   push eax
// 006276cc  ffd2                 call edx
// 006276ce  d9442404             fld dword ptr [esp + 4]
// 006276d2  d85c2410             fcomp dword ptr [esp + 0x10]
// 006276d6  5e                   pop esi
// 006276d7  dfe0                 fnstsw ax
// 006276d9  f6c444               test ah, 0x44
// 006276dc  7a29                 jp 0x627707
// 006276de  d9442404             fld dword ptr [esp + 4]
// 006276e2  d85c2410             fcomp dword ptr [esp + 0x10]
// 006276e6  dfe0                 fnstsw ax
// 006276e8  f6c444               test ah, 0x44
// 006276eb  7a1a                 jp 0x627707
// 006276ed  d9442408             fld dword ptr [esp + 8]
// 006276f1  d85c2414             fcomp dword ptr [esp + 0x14]
// 006276f5  dfe0                 fnstsw ax
// 006276f7  f6c444               test ah, 0x44
// 006276fa  7a0b                 jp 0x627707
// 006276fc  b801000000           mov eax, 1
// 00627701  83c418               add esp, 0x18
// 00627704  c20800               ret 8
// 00627707  33c0                 xor eax, eax
// 00627709  83c418               add esp, 0x18
// 0062770c  c20800               ret 8
// copied from an identical function in another client (function ?equal@S@@QAEHPAX0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Value {
    float x, y, z;
};

struct Reader {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual Value get(void* object) = 0;
};

struct S {
    char padding[24];
    Reader* reader;
    int equal(void* a, void* b);
};

#pragma float_control(precise, off, push)

int S::equal(void* a, void* b)
{
    Value first = reader->get(b);
    Value second = reader->get(a);
    return second.x == first.x &&
           second.y == first.y &&
           second.z == first.z;
}

#pragma float_control(pop)