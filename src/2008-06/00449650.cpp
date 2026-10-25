// from server: 100% by king_originala
// roc 2008-06 00449650  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449650
//
// 00449650  6aff                 push -1
// 00449652  6832107c00           push 0x7c1032
// 00449657  64a100000000         mov eax, dword ptr fs:[0]
// 0044965d  50                   push eax
// 0044965e  64892500000000       mov dword ptr fs:[0], esp
// 00449665  83ec08               sub esp, 8
// 00449668  56                   push esi
// 00449669  8bf1                 mov esi, ecx
// 0044966b  57                   push edi
// 0044966c  89742408             mov dword ptr [esp + 8], esi
// 00449670  e8097b2500           call 0x6a117e
// 00449675  6a6c                 push 0x6c
// 00449677  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0044967f  c7063c668100         mov dword ptr [esi], 0x81663c
// 00449685  e896722500           call 0x6a0920
// 0044968a  8bf8                 mov edi, eax
// 0044968c  83c404               add esp, 4
// 0044968f  897c240c             mov dword ptr [esp + 0xc], edi
// 00449693  c644241801           mov byte ptr [esp + 0x18], 1
// 00449698  85ff                 test edi, edi
// 0044969a  7420                 je 0x4496bc
// 0044969c  e8df48fcff           call 0x40df80
// 004496a1  50                   push eax
// 004496a2  e81999feff           call 0x432fc0
// 004496a7  50                   push eax
// 004496a8  e8f348fcff           call 0x40dfa0
// 004496ad  50                   push eax
// 004496ae  68b9000000           push 0xb9
// 004496b3  8bcf                 mov ecx, edi
// 004496b5  e8be7a2500           call 0x6a1178
// 004496ba  eb02                 jmp 0x4496be
// 004496bc  33c0                 xor eax, eax
// 004496be  50                   push eax
// 004496bf  8bce                 mov ecx, esi
// 004496c1  c644241c00           mov byte ptr [esp + 0x1c], 0
// 004496c6  894620               mov dword ptr [esi + 0x20], eax
// 004496c9  e8a47a2500           call 0x6a1172
// 004496ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004496d2  5f                   pop edi
// 004496d3  8bc6                 mov eax, esi
// 004496d5  5e                   pop esi
// 004496d6  64890d00000000       mov dword ptr fs:[0], ecx
// 004496dd  83c414               add esp, 0x14
// 004496e0  c3                   ret 

extern char* func_0040df80();
extern char* func_0040dfa0();
extern char* func_00432fc0();

struct Item {
    unsigned char storage[0x6c];
    Item(int, char*, char*, char*);
};

struct Base {
    unsigned char padding[0x1c];
    Base();
    virtual ~Base();
    void attach(Item*);
};

struct S : Base {
    Item* item;
    S();
    virtual ~S();
};

S::S()
{
    item = new Item(0xb9, func_0040dfa0(),
                    func_00432fc0(), func_0040df80());
    attach(item);
}
