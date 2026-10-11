// from server: 98% by colin
// roc 2007-08 0055ece0  unit: RBX::FollowCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055ece0
//
// 0055ece0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055ece3  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055ece9  8b5004               mov edx, dword ptr [eax + 4]
// 0055ecec  81c128020000         add ecx, 0x228
// 0055ecf2  ffd2                 call edx
// 0055ecf4  33c9                 xor ecx, ecx
// 0055ecf6  83b88c01000004       cmp dword ptr [eax + 0x18c], 4
// 0055ecfd  0f94c1               sete cl
// 0055ed00  8ac1                 mov al, cl
// 0055ed02  c3                   ret 

struct Inner {
    char pad[0x228];
    int field228;
};

struct Outer {
    char pad[0xc];
    Inner* ptr;
};

struct S {
    char pad[0xc];
    Inner* inner;
    bool f();
};

bool S::f()
{
    Inner* p = this->inner;
    int* q = (int*)((char*)p + 0x228);
    int v = *q;
    typedef int (__thiscall *Fn)(void*, int);
    Fn fn = *(Fn*)(v + 4);
    int r = fn(q, v);
    return *(int*)(r + 0x18c) == 4;
}
