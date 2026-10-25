// from server: 100% by king_originala
// roc 2008-06 004b9190  unit: RBX::Network::Replicator  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b9190
//
// 004b9190  6aff                 push -1
// 004b9192  683bf47b00           push 0x7bf43b
// 004b9197  64a100000000         mov eax, dword ptr fs:[0]
// 004b919d  50                   push eax
// 004b919e  64892500000000       mov dword ptr fs:[0], esp
// 004b91a5  51                   push ecx
// 004b91a6  53                   push ebx
// 004b91a7  56                   push esi
// 004b91a8  57                   push edi
// 004b91a9  33f6                 xor esi, esi
// 004b91ab  6a10                 push 0x10
// 004b91ad  89742410             mov dword ptr [esp + 0x10], esi
// 004b91b1  e86a771e00           call 0x6a0920
// 004b91b6  83c404               add esp, 4
// 004b91b9  8944240c             mov dword ptr [esp + 0xc], eax
// 004b91bd  89742418             mov dword ptr [esp + 0x18], esi
// 004b91c1  3bc6                 cmp eax, esi
// 004b91c3  7409                 je 0x4b91ce
// 004b91c5  8bc8                 mov ecx, eax
// 004b91c7  e874ffffff           call 0x4b9140
// 004b91cc  8bf0                 mov esi, eax
// 004b91ce  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004b91d2  8d5f04               lea ebx, [edi + 4]
// 004b91d5  56                   push esi
// 004b91d6  8bcb                 mov ecx, ebx
// 004b91d8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b91e0  8937                 mov dword ptr [edi], esi
// 004b91e2  e8592effff           call 0x4ac040
// 004b91e7  56                   push esi
// 004b91e8  56                   push esi
// 004b91e9  53                   push ebx
// 004b91ea  e82142fcff           call 0x47d410
// 004b91ef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b91f3  83c40c               add esp, 0xc
// 004b91f6  8bc7                 mov eax, edi
// 004b91f8  5f                   pop edi
// 004b91f9  5e                   pop esi
// 004b91fa  5b                   pop ebx
// 004b91fb  64890d00000000       mov dword ptr fs:[0], ecx
// 004b9202  83c410               add esp, 0x10
// 004b9205  c3                   ret 

extern void* __cdecl operator new(unsigned int);
extern void __cdecl operator delete(void*);

struct Object {
    unsigned char storage[16];
    Object();
};

struct Count {
    void* control;
    void initialize(Object*);
};

struct Shared {
    Object* object;
    Count count;
    Shared();
    Shared(const Shared&);
};

inline Shared::Shared()
{
}

extern void __cdecl func_0047d410(Count*, Object*, Object*);

Shared __cdecl func_004b9190()
{
    Shared result;
    Object* object;
    *reinterpret_cast<Object* volatile*>(&object) = 0;
    object = new Object;
    result.object = object;
    result.count.initialize(object);
    func_0047d410(&result.count, object, object);
    return result;
}
