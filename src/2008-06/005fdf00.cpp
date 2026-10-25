// from server: 100% by colin
// roc 2008-06 005fdf00  unit: RBX::VTool::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fdf00
//
// 005fdf00  51                   push ecx
// 005fdf01  53                   push ebx
// 005fdf02  55                   push ebp
// 005fdf03  56                   push esi
// 005fdf04  57                   push edi
// 005fdf05  8bf9                 mov edi, ecx
// 005fdf07  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005fdf0d  85f6                 test esi, esi
// 005fdf0f  0f8483000000         je 0x5fdf98
// 005fdf15  8b4610               mov eax, dword ptr [esi + 0x10]
// 005fdf18  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005fdf1e  89442410             mov dword ptr [esp + 0x10], eax
// 005fdf22  39460c               cmp dword ptr [esi + 0xc], eax
// 005fdf25  7602                 jbe 0x5fdf29
// 005fdf27  ffd3                 call ebx
// 005fdf29  8b2e                 mov ebp, dword ptr [esi]
// 005fdf2b  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005fdf31  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005fdf34  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005fdf37  7602                 jbe 0x5fdf3b
// 005fdf39  ffd3                 call ebx
// 005fdf3b  8b36                 mov esi, dword ptr [esi]
// 005fdf3d  8d4900               lea ecx, [ecx]
// 005fdf40  85f6                 test esi, esi
// 005fdf42  7404                 je 0x5fdf48
// 005fdf44  3bf5                 cmp esi, ebp
// 005fdf46  7402                 je 0x5fdf4a
// 005fdf48  ffd3                 call ebx
// 005fdf4a  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005fdf4e  7448                 je 0x5fdf98
// 005fdf50  85f6                 test esi, esi
// 005fdf52  753c                 jne 0x5fdf90
// 005fdf54  ffd3                 call ebx
// 005fdf56  33c0                 xor eax, eax
// 005fdf58  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005fdf5b  7202                 jb 0x5fdf5f
// 005fdf5d  ffd3                 call ebx
// 005fdf5f  8b07                 mov eax, dword ptr [edi]
// 005fdf61  6a00                 push 0
// 005fdf63  68bc969400           push 0x9496bc
// 005fdf68  687c909200           push 0x92907c
// 005fdf6d  6a00                 push 0
// 005fdf6f  50                   push eax
// 005fdf70  e851380a00           call 0x6a17c6
// 005fdf75  83c414               add esp, 0x14
// 005fdf78  85c0                 test eax, eax
// 005fdf7a  751e                 jne 0x5fdf9a
// 005fdf7c  85f6                 test esi, esi
// 005fdf7e  7514                 jne 0x5fdf94
// 005fdf80  ffd3                 call ebx
// 005fdf82  33c0                 xor eax, eax
// 005fdf84  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005fdf87  7202                 jb 0x5fdf8b
// 005fdf89  ffd3                 call ebx
// 005fdf8b  83c708               add edi, 8
// 005fdf8e  ebb0                 jmp 0x5fdf40
// 005fdf90  8b06                 mov eax, dword ptr [esi]
// 005fdf92  ebc4                 jmp 0x5fdf58
// 005fdf94  8b06                 mov eax, dword ptr [esi]
// 005fdf96  ebec                 jmp 0x5fdf84
// 005fdf98  33c0                 xor eax, eax
// 005fdf9a  5f                   pop edi
// 005fdf9b  5e                   pop esi
// 005fdf9c  5d                   pop ebp
// 005fdf9d  5b                   pop ebx
// 005fdf9e  59                   pop ecx
// 005fdf9f  c3                   ret 


extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instance_type;
extern char properties_type;

struct Entry {
    void* object;
    void* other;
};

struct Storage;

struct Owner {
    Storage* storage;
};

struct Storage {
    Owner* owner;
    unsigned char padding[8];
    Entry* begin;
    Entry* end;
};

struct S {
    unsigned char padding[0x108];
    Storage* storage;
    void* f();
};

void* S::f()
{
    Storage* s = storage;
    if (s) {
        Entry* last = s->end;
        void (__cdecl *invalid)() = invalid_parameter_noinfo;
        if (s->begin > last)
            invalid();

        Owner* lastOwner = s->owner;
        s = storage;
        Entry* current = s->begin;
        if (current > s->end)
            invalid();

        Owner* owner = s->owner;
        for (;;) {
            if (!owner || owner != lastOwner)
                invalid();

            if (current == last)
                break;

            if (!owner)
                invalid();
            Storage* container = owner ? owner->storage : 0;

            if (current >= container->end)
                invalid();

            void* result = __RTDynamicCast(
                current->object, 0, &instance_type, &properties_type, 0);
            if (result)
                return result;

            if (!owner)
                invalid();
            container = owner ? owner->storage : 0;

            if (current >= container->end)
                invalid();

            ++current;
        }
    }
    return 0;
}
