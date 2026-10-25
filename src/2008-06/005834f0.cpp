// from server: 100% by king_originala
// roc 2008-06 005834f0  unit: RBX::ModelInstance  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005834f0
//
// 005834f0  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 005834f6  8b5004               mov edx, dword ptr [eax + 4]
// 005834f9  8b840a34010000       mov eax, dword ptr [edx + ecx + 0x134]
// 00583500  8d8c0a34010000       lea ecx, [edx + ecx + 0x134]
// 00583507  8b5004               mov edx, dword ptr [eax + 4]
// 0058350a  ffd2                 call edx
// 0058350c  85c0                 test eax, eax
// 0058350e  7406                 je 0x583516
// 00583510  0528020000           add eax, 0x228
// 00583515  c3                   ret 
// 00583516  33c0                 xor eax, eax
// 00583518  c3                   ret 

struct Interface {
    virtual void unused();
    virtual char* get();
};

struct S {
    char padding[0x134];
    int* offsets;
    char* f();
};

char* S::f()
{
    Interface* base = reinterpret_cast<Interface*>(
        reinterpret_cast<char*>(this) + 0x134 + offsets[1]);
    char* result = base->get();
    return result ? result + 0x228 : 0;
}
