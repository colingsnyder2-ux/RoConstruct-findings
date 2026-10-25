// from server: 100% by king_originala
// roc 2008-06 00645e40  unit: RBX::RotateJoint  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645e40
//
// 00645e40  64a100000000         mov eax, dword ptr fs:[0]
// 00645e46  6aff                 push -1
// 00645e48  6881ad7d00           push 0x7dad81
// 00645e4d  50                   push eax
// 00645e4e  64892500000000       mov dword ptr fs:[0], esp
// 00645e55  8b442410             mov eax, dword ptr [esp + 0x10]
// 00645e59  83e806               sub eax, 6
// 00645e5c  0f849e000000         je 0x645f00
// 00645e62  83e801               sub eax, 1
// 00645e65  7453                 je 0x645eba
// 00645e67  83e801               sub eax, 1
// 00645e6a  0f85d6000000         jne 0x645f46
// 00645e70  68c8000000           push 0xc8
// 00645e75  e8a6aa0500           call 0x6a0920
// 00645e7a  83c404               add esp, 4
// 00645e7d  89442410             mov dword ptr [esp + 0x10], eax
// 00645e81  c744240801000000     mov dword ptr [esp + 8], 1
// 00645e89  85c0                 test eax, eax
// 00645e8b  0f84b5000000         je 0x645f46
// 00645e91  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00645e95  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00645e99  51                   push ecx
// 00645e9a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00645e9e  52                   push edx
// 00645e9f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00645ea3  51                   push ecx
// 00645ea4  52                   push edx
// 00645ea5  8bc8                 mov ecx, eax
// 00645ea7  e8e4feffff           call 0x645d90
// 00645eac  8b0c24               mov ecx, dword ptr [esp]
// 00645eaf  64890d00000000       mov dword ptr fs:[0], ecx
// 00645eb6  83c40c               add esp, 0xc
// 00645eb9  c3                   ret 
// 00645eba  68c8000000           push 0xc8
// 00645ebf  e85caa0500           call 0x6a0920
// 00645ec4  83c404               add esp, 4
// 00645ec7  89442410             mov dword ptr [esp + 0x10], eax
// 00645ecb  c744240802000000     mov dword ptr [esp + 8], 2
// 00645ed3  85c0                 test eax, eax
// 00645ed5  746f                 je 0x645f46
// 00645ed7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00645edb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00645edf  51                   push ecx
// 00645ee0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00645ee4  52                   push edx
// 00645ee5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00645ee9  51                   push ecx
// 00645eea  52                   push edx
// 00645eeb  8bc8                 mov ecx, eax
// 00645eed  e8defeffff           call 0x645dd0
// 00645ef2  8b0c24               mov ecx, dword ptr [esp]
// 00645ef5  64890d00000000       mov dword ptr fs:[0], ecx
// 00645efc  83c40c               add esp, 0xc
// 00645eff  c3                   ret 
// 00645f00  68c4000000           push 0xc4
// 00645f05  e816aa0500           call 0x6a0920
// 00645f0a  83c404               add esp, 4
// 00645f0d  89442410             mov dword ptr [esp + 0x10], eax
// 00645f11  c744240800000000     mov dword ptr [esp + 8], 0
// 00645f19  85c0                 test eax, eax
// 00645f1b  7429                 je 0x645f46
// 00645f1d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00645f21  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00645f25  51                   push ecx
// 00645f26  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00645f2a  52                   push edx
// 00645f2b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00645f2f  51                   push ecx
// 00645f30  52                   push edx
// 00645f31  8bc8                 mov ecx, eax
// 00645f33  e858fbffff           call 0x645a90
// 00645f38  8b0c24               mov ecx, dword ptr [esp]
// 00645f3b  64890d00000000       mov dword ptr fs:[0], ecx
// 00645f42  83c40c               add esp, 0xc
// 00645f45  c3                   ret 
// 00645f46  8b0c24               mov ecx, dword ptr [esp]
// 00645f49  33c0                 xor eax, eax
// 00645f4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00645f52  83c40c               add esp, 0xc
// 00645f55  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct A
{
    char storage[196];
    A(int a, int b, int c, int d);
};

struct B
{
    char storage[200];
    B(int a, int b, int c, int d);
};

struct C
{
    char storage[200];
    C(int a, int b, int c, int d);
};

void* __cdecl create(int kind, int a, int b, int c, int d)
{
    switch (kind)
    {
    case 6:
        return new A(a, b, c, d);
    case 8:
        return new C(a, b, c, d);
    case 7:
        return new B(a, b, c, d);
    default:
        return 0;
    }
}
