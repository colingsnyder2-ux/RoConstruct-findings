// roc 2009-06 00409af0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00409af0
//
// 00409af0  8b542404             mov edx, dword ptr [esp + 4]
// 00409af4  53                   push ebx
// 00409af5  56                   push esi
// 00409af6  8bf1                 mov esi, ecx
// 00409af8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00409afb  8b01                 mov eax, dword ptr [ecx]
// 00409afd  8b4008               mov eax, dword ptr [eax + 8]
// 00409b00  52                   push edx
// 00409b01  ffd0                 call eax
// 00409b03  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00409b06  8b11                 mov edx, dword ptr [ecx]
// 00409b08  8b5208               mov edx, dword ptr [edx + 8]
// 00409b0b  8ad8                 mov bl, al
// 00409b0d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00409b11  50                   push eax
// 00409b12  ffd2                 call edx
// 00409b14  33c9                 xor ecx, ecx
// 00409b16  3ad8                 cmp bl, al
// 00409b18  0f94c1               sete cl
// 00409b1b  5e                   pop esi
// 00409b1c  8ac1                 mov al, cl
// 00409b1e  5b                   pop ebx
// 00409b1f  c20800               ret 8
// copied from an identical function in another client (function ?equal@Descriptor@@QAE_NPBX0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual bool get(const void* object) = 0;
};

struct Descriptor {
    unsigned char padding[24];
    Accessor* accessor;
    bool equal(const void* first, const void* second);
};

bool Descriptor::equal(const void* first, const void* second)
{
    bool a = accessor->get(first);
    bool b = accessor->get(second);
    return a == b;
}