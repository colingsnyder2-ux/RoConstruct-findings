// from server: 100% by colin
// roc 2008-06 00576f00  unit: RBX::DataModel  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576f00
//
// 00576f00  64a100000000         mov eax, dword ptr fs:[0]
// 00576f06  6aff                 push -1
// 00576f08  683beb7d00           push 0x7deb3b
// 00576f0d  50                   push eax
// 00576f0e  64892500000000       mov dword ptr fs:[0], esp
// 00576f15  8b442410             mov eax, dword ptr [esp + 0x10]
// 00576f19  56                   push esi
// 00576f1a  57                   push edi
// 00576f1b  8bf9                 mov edi, ecx
// 00576f1d  85c0                 test eax, eax
// 00576f1f  744c                 je 0x576f6d
// 00576f21  8b885c020000         mov ecx, dword ptr [eax + 0x25c]
// 00576f27  0560020000           add eax, 0x260
// 00576f2c  890f                 mov dword ptr [edi], ecx
// 00576f2e  50                   push eax
// 00576f2f  8d4f04               lea ecx, [edi + 4]
// 00576f32  e879b6e8ff           call 0x4025b0
// 00576f37  6a08                 push 8
// 00576f39  e8e2991200           call 0x6a0920
// 00576f3e  8bf0                 mov esi, eax
// 00576f40  83c404               add esp, 4
// 00576f43  89742418             mov dword ptr [esp + 0x18], esi
// 00576f47  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00576f4f  85f6                 test esi, esi
// 00576f51  7415                 je 0x576f68
// 00576f53  8b17                 mov edx, dword ptr [edi]
// 00576f55  8bca                 mov ecx, edx
// 00576f57  8916                 mov dword ptr [esi], edx
// 00576f59  c6460400             mov byte ptr [esi + 4], 0
// 00576f5d  e82ec1feff           call 0x563090
// 00576f62  c6460401             mov byte ptr [esi + 4], 1
// 00576f66  eb02                 jmp 0x576f6a
// 00576f68  33f6                 xor esi, esi
// 00576f6a  897708               mov dword ptr [edi + 8], esi
// 00576f6d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00576f71  5f                   pop edi
// 00576f72  64890d00000000       mov dword ptr fs:[0], ecx
// 00576f79  5e                   pop esi
// 00576f7a  83c40c               add esp, 0xc
// 00576f7d  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    void acquire();
};

struct Reference {
    void* value;
    Reference& operator=(const Reference&);
};

struct Source {
    char padding[0x25c];
    Object* object;
    Reference reference;
};

struct Guard {
    Object* object;
    bool acquired;

    Guard(Object* p) : object(p), acquired(false) {
        object->acquire();
        acquired = true;
    }
};

struct S {
    Object* object;
    Reference reference;
    Guard* guard;

    void set(Source*);
};

void S::set(Source* source) {
    if (source) {
        object = source->object;
        reference = source->reference;
        guard = new Guard(object);
    }
}
