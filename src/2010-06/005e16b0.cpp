// from server: 82% by atomic.potato
// roc 2010-06 005e16b0  unit: RBX::WatchCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e16b0
//
// 005e16b0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005e16b3  8b8120010000         mov eax, dword ptr [ecx + 0x120]
// 005e16b9  8b5004               mov edx, dword ptr [eax + 4]
// 005e16bc  81c120010000         add ecx, 0x120
// 005e16c2  ffd2                 call edx
// 005e16c4  33c9                 xor ecx, ecx
// 005e16c6  83b84401000002       cmp dword ptr [eax + 0x144], 2
// 005e16cd  0f94c1               sete cl
// 005e16d0  8ac1                 mov al, cl
// 005e16d2  c3                   ret 

struct S
{
    unsigned char f();
};

unsigned char S::f()
{
    struct T
    {
        int (__thiscall **vtable)(T *);
    };

    T *p = *(T **)((char *)this + 12);
    int (__thiscall *fn)(T *) = *(int (__thiscall **)(T *))((char *)p + 288);
    int *result = (int *)fn((T *)((char *)p + 288));
    return (unsigned char)(result[81] == 2);
}
