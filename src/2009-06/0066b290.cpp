// from server: 70% by atomic.potato
// roc 2009-06 0066b290  unit: RBX::Humanoid  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066b290
//
// 0066b290  56                   push esi
// 0066b291  57                   push edi
// 0066b292  8bf9                 mov edi, ecx
// 0066b294  8db7d4feffff         lea esi, [edi - 0x12c]
// 0066b29a  56                   push esi
// 0066b29b  e81016e6ff           call 0x4cc8b0
// 0066b2a0  83c404               add esp, 4
// 0066b2a3  85c0                 test eax, eax
// 0066b2a5  7424                 je 0x66b2cb
// 0066b2a7  6a00                 push 0
// 0066b2a9  6888619e00           push 0x9e6188
// 0066b2ae  6840be9d00           push 0x9dbe40
// 0066b2b3  6a00                 push 0
// 0066b2b5  50                   push eax
// 0066b2b6  e8bfe90a00           call 0x719c7a
// 0066b2bb  83c414               add esp, 0x14
// 0066b2be  85c0                 test eax, eax
// 0066b2c0  7409                 je 0x66b2cb
// 0066b2c2  8bc8                 mov ecx, eax
// 0066b2c4  e877cfffff           call 0x668240
// 0066b2c9  eb02                 jmp 0x66b2cd
// 0066b2cb  33c0                 xor eax, eax
// 0066b2cd  81c7d4feffff         add edi, 0xfffffed4
// 0066b2d3  3bf8                 cmp edi, eax
// 0066b2d5  7427                 je 0x66b2fe
// 0066b2d7  56                   push esi
// 0066b2d8  e8532ffcff           call 0x62e230
// 0066b2dd  83c404               add esp, 4
// 0066b2e0  85c0                 test eax, eax
// 0066b2e2  741a                 je 0x66b2fe
// 0066b2e4  8d8818010000         lea ecx, [eax + 0x118]
// 0066b2ea  8b01                 mov eax, dword ptr [ecx]
// 0066b2ec  8b500c               mov edx, dword ptr [eax + 0xc]
// 0066b2ef  ffd2                 call edx
// 0066b2f1  50                   push eax
// 0066b2f2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066b2f6  50                   push eax
// 0066b2f7  8bce                 mov ecx, esi
// 0066b2f9  e8a2fcffff           call 0x66afa0
// 0066b2fe  5f                   pop edi
// 0066b2ff  5e                   pop esi
// 0066b300  c20400               ret 4

struct Instance {
    char pad0[0x118];
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void* vfunc3();
};

struct ModelInstance {
    char pad0[0x12c];
    Instance inst;
};

extern "C" void* __stdcall sub_4CC8B0(void*);
extern "C" void* __stdcall sub_719C7A(void*, void*, void*, void*, void*);
extern "C" void* __stdcall sub_62E230(void*);
extern "C" void __fastcall sub_668240(void*);
extern "C" void __fastcall sub_66AFA0(void*, void*, void*);

struct Humanoid {
    void func(void* arg);
};

void Humanoid::func(void* arg)
{
    ModelInstance* mi = (ModelInstance*)((char*)this - 0x12c);
    void* p = sub_4CC8B0(mi);
    void* q = 0;
    if (p) {
        q = sub_719C7A(p, (void*)0x9dbe40, (void*)0x9e6188, 0, 0);
        if (q) {
            sub_668240(q);
        } else {
            q = 0;
        }
    } else {
        q = 0;
    }
    if ((char*)this - 0x12c != q) {
        void* r = sub_62E230(mi);
        if (r) {
            Instance* inst = (Instance*)((char*)r + 0x118);
            void* v = inst->vfunc3();
            sub_66AFA0(mi, v, arg);
        }
    }
}
