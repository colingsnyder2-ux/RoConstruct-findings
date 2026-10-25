// from server: 100% by king_originala
// roc 2008-06 005b1480  unit: RBX::Accoutrement  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1480
//
// 005b1480  64a100000000         mov eax, dword ptr fs:[0]
// 005b1486  6aff                 push -1
// 005b1488  682bf57b00           push 0x7bf52b
// 005b148d  50                   push eax
// 005b148e  64892500000000       mov dword ptr fs:[0], esp
// 005b1495  83ec08               sub esp, 8
// 005b1498  803dad6c970000       cmp byte ptr [0x976cad], 0
// 005b149f  56                   push esi
// 005b14a0  57                   push edi
// 005b14a1  8bf9                 mov edi, ecx
// 005b14a3  755c                 jne 0x5b1501
// 005b14a5  6a28                 push 0x28
// 005b14a7  e874f40e00           call 0x6a0920
// 005b14ac  8bf0                 mov esi, eax
// 005b14ae  83c404               add esp, 4
// 005b14b1  89742408             mov dword ptr [esp + 8], esi
// 005b14b5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b14bd  85f6                 test esi, esi
// 005b14bf  742d                 je 0x5b14ee
// 005b14c1  83ec08               sub esp, 8
// 005b14c4  8bcc                 mov ecx, esp
// 005b14c6  89642414             mov dword ptr [esp + 0x14], esp
// 005b14ca  57                   push edi
// 005b14cb  e83039feff           call 0x594e00
// 005b14d0  a158539700           mov eax, dword ptr [0x975358]
// 005b14d5  50                   push eax
// 005b14d6  8bce                 mov ecx, esi
// 005b14d8  e83360e6ff           call 0x417510
// 005b14dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b14e1  64890d00000000       mov dword ptr fs:[0], ecx
// 005b14e8  5f                   pop edi
// 005b14e9  5e                   pop esi
// 005b14ea  83c414               add esp, 0x14
// 005b14ed  c3                   ret 
// 005b14ee  33c0                 xor eax, eax
// 005b14f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b14f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b14fb  5f                   pop edi
// 005b14fc  5e                   pop esi
// 005b14fd  83c414               add esp, 0x14
// 005b1500  c3                   ret 
// 005b1501  e84a77faff           call 0x558c50
// 005b1506  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b150a  5f                   pop edi
// 005b150b  64890d00000000       mov dword ptr fs:[0], ecx
// 005b1512  5e                   pop esi
// 005b1513  83c414               add esp, 0x14
// 005b1516  c3                   ret 

void * __cdecl operator new(unsigned int);
void __cdecl operator delete(void *) throw();

extern unsigned char useFallback;
extern void *constructorKey;

struct S;

struct Ref {
    void *object;
    void *control;
    Ref(S *);
    Ref(const Ref &);
};

struct Result {
    unsigned char data[40];
    Result(void *, Ref);
};

struct S {
    Result *fallback();
    Result *f();
};

Result *S::f()
{
    if (!useFallback)
        return new Result(constructorKey, Ref(this));
    return fallback();
}
