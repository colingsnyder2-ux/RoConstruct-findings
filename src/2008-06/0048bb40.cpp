// from server: 100% by king_originala
// roc 2008-06 0048bb40  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048bb40
//
// 0048bb40  51                   push ecx
// 0048bb41  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0048bb45  56                   push esi
// 0048bb46  8bf1                 mov esi, ecx
// 0048bb48  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0048bb4b  8b01                 mov eax, dword ptr [ecx]
// 0048bb4d  8b4008               mov eax, dword ptr [eax + 8]
// 0048bb50  52                   push edx
// 0048bb51  8d542408             lea edx, [esp + 8]
// 0048bb55  52                   push edx
// 0048bb56  ffd0                 call eax
// 0048bb58  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048bb5c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0048bb5f  8b11                 mov edx, dword ptr [ecx]
// 0048bb61  8b5208               mov edx, dword ptr [edx + 8]
// 0048bb64  50                   push eax
// 0048bb65  8d442414             lea eax, [esp + 0x14]
// 0048bb69  50                   push eax
// 0048bb6a  ffd2                 call edx
// 0048bb6c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048bb70  33c0                 xor eax, eax
// 0048bb72  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 0048bb76  5e                   pop esi
// 0048bb77  0f94c0               sete al
// 0048bb7a  59                   pop ecx
// 0048bb7b  c20800               ret 8

struct Getter {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void get(unsigned int* result, unsigned int object) = 0;
};

struct S {
    unsigned char padding[24];
    Getter* getter;
    int equal(unsigned int a, unsigned int b);
};

int S::equal(unsigned int a, unsigned int b)
{
    unsigned int value;
    getter->get(&value, b);
    getter->get(&b, a);
    return b == value;
}
