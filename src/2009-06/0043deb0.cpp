// roc 2009-06 0043deb0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043deb0
//
// 0043deb0  8b542404             mov edx, dword ptr [esp + 4]
// 0043deb4  56                   push esi
// 0043deb5  8bf1                 mov esi, ecx
// 0043deb7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043deba  8b01                 mov eax, dword ptr [ecx]
// 0043debc  8b4008               mov eax, dword ptr [eax + 8]
// 0043debf  57                   push edi
// 0043dec0  52                   push edx
// 0043dec1  ffd0                 call eax
// 0043dec3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043dec6  8b11                 mov edx, dword ptr [ecx]
// 0043dec8  8b5208               mov edx, dword ptr [edx + 8]
// 0043decb  8bf8                 mov edi, eax
// 0043decd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043ded1  50                   push eax
// 0043ded2  ffd2                 call edx
// 0043ded4  33c9                 xor ecx, ecx
// 0043ded6  3bf8                 cmp edi, eax
// 0043ded8  0f94c1               sete cl
// 0043dedb  5f                   pop edi
// 0043dedc  8ac1                 mov al, cl
// 0043dede  5e                   pop esi
// 0043dedf  c20800               ret 8
// copied from an identical function in another client (function ?f@S@@QAE_NPAX0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual int get(void*) = 0;
};

struct S {
    unsigned char padding[0x18];
    Accessor* accessor;
    bool f(void*, void*);
};

bool S::f(void* first, void* second)
{
    int value = accessor->get(first);
    return value == accessor->get(second);
}