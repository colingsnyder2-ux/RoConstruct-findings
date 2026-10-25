// from server: 100% by king_originala
// roc 2008-06 0059b2a0  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b2a0
//
// 0059b2a0  8b542408             mov edx, dword ptr [esp + 8]
// 0059b2a4  83ec18               sub esp, 0x18
// 0059b2a7  56                   push esi
// 0059b2a8  8bf1                 mov esi, ecx
// 0059b2aa  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0059b2ad  8b01                 mov eax, dword ptr [ecx]
// 0059b2af  8b4008               mov eax, dword ptr [eax + 8]
// 0059b2b2  52                   push edx
// 0059b2b3  8d542408             lea edx, [esp + 8]
// 0059b2b7  52                   push edx
// 0059b2b8  ffd0                 call eax
// 0059b2ba  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059b2be  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0059b2c1  8b11                 mov edx, dword ptr [ecx]
// 0059b2c3  8b5208               mov edx, dword ptr [edx + 8]
// 0059b2c6  50                   push eax
// 0059b2c7  8d442414             lea eax, [esp + 0x14]
// 0059b2cb  50                   push eax
// 0059b2cc  ffd2                 call edx
// 0059b2ce  d9442404             fld dword ptr [esp + 4]
// 0059b2d2  d85c2410             fcomp dword ptr [esp + 0x10]
// 0059b2d6  5e                   pop esi
// 0059b2d7  dfe0                 fnstsw ax
// 0059b2d9  f6c444               test ah, 0x44
// 0059b2dc  7a29                 jp 0x59b307
// 0059b2de  d9442404             fld dword ptr [esp + 4]
// 0059b2e2  d85c2410             fcomp dword ptr [esp + 0x10]
// 0059b2e6  dfe0                 fnstsw ax
// 0059b2e8  f6c444               test ah, 0x44
// 0059b2eb  7a1a                 jp 0x59b307
// 0059b2ed  d9442408             fld dword ptr [esp + 8]
// 0059b2f1  d85c2414             fcomp dword ptr [esp + 0x14]
// 0059b2f5  dfe0                 fnstsw ax
// 0059b2f7  f6c444               test ah, 0x44
// 0059b2fa  7a0b                 jp 0x59b307
// 0059b2fc  b801000000           mov eax, 1
// 0059b301  83c418               add esp, 0x18
// 0059b304  c20800               ret 8
// 0059b307  33c0                 xor eax, eax
// 0059b309  83c418               add esp, 0x18
// 0059b30c  c20800               ret 8

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
