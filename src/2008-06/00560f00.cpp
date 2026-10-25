// from server: 100% by king_originala
// roc 2008-06 00560f00  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00560f00
//
// 00560f00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00560f04  56                   push esi
// 00560f05  57                   push edi
// 00560f06  85c0                 test eax, eax
// 00560f08  7522                 jne 0x560f2c
// 00560f0a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00560f0e  8b38                 mov edi, dword ptr [eax]
// 00560f10  6a28                 push 0x28
// 00560f12  e809fa1300           call 0x6a0920
// 00560f17  8bf0                 mov esi, eax
// 00560f19  57                   push edi
// 00560f1a  56                   push esi
// 00560f1b  e880e7ffff           call 0x55f6a0
// 00560f20  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00560f24  83c40c               add esp, 0xc
// 00560f27  5f                   pop edi
// 00560f28  8931                 mov dword ptr [ecx], esi
// 00560f2a  5e                   pop esi
// 00560f2b  c3                   ret 
// 00560f2c  83f801               cmp eax, 1
// 00560f2f  7538                 jne 0x560f69
// 00560f31  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00560f35  8b37                 mov esi, dword ptr [edi]
// 00560f37  8b4608               mov eax, dword ptr [esi + 8]
// 00560f3a  85c0                 test eax, eax
// 00560f3c  7419                 je 0x560f57
// 00560f3e  8b00                 mov eax, dword ptr [eax]
// 00560f40  8d4e10               lea ecx, [esi + 0x10]
// 00560f43  85c0                 test eax, eax
// 00560f45  7409                 je 0x560f50
// 00560f47  6a01                 push 1
// 00560f49  51                   push ecx
// 00560f4a  51                   push ecx
// 00560f4b  ffd0                 call eax
// 00560f4d  83c40c               add esp, 0xc
// 00560f50  c7460800000000       mov dword ptr [esi + 8], 0
// 00560f57  56                   push esi
// 00560f58  e81df71300           call 0x6a067a
// 00560f5d  83c404               add esp, 4
// 00560f60  c70700000000         mov dword ptr [edi], 0
// 00560f66  5f                   pop edi
// 00560f67  5e                   pop esi
// 00560f68  c3                   ret 
// 00560f69  8b742410             mov esi, dword ptr [esp + 0x10]
// 00560f6d  8b0e                 mov ecx, dword ptr [esi]
// 00560f6f  6830449400           push 0x944430
// 00560f74  ff1578288000         call dword ptr [0x802878]
// 00560f7a  84c0                 test al, al
// 00560f7c  740b                 je 0x560f89
// 00560f7e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00560f82  8b02                 mov eax, dword ptr [edx]
// 00560f84  5f                   pop edi
// 00560f85  8906                 mov dword ptr [esi], eax
// 00560f87  5e                   pop esi
// 00560f88  c3                   ret 
// 00560f89  5f                   pop edi
// 00560f8a  c70600000000         mov dword ptr [esi], 0
// 00560f90  5e                   pop esi
// 00560f91  c3                   ret 

extern void *__cdecl operator new(unsigned int);
extern void __cdecl operator delete(void *);

struct TypeInfo;
extern TypeInfo targetType;
extern bool (__thiscall *typeEqual)(const void *, const TypeInfo *);

typedef void (__cdecl *Manager)(void *, void *, int);

struct Block {
    char reserved[8];
    Manager *manager;
    char padding[4];
    char payload[24];
};

extern void __cdecl copyBlock(Block *, const void *);

void __cdecl manage(const void *const *source, void **destination, int operation)
{
    if (operation == 0) {
        const void *value = *source;
        Block *block = static_cast<Block *>(operator new(40));
        copyBlock(block, value);
        *destination = block;
    } else if (operation == 1) {
        Block *block = static_cast<Block *>(*destination);
        if (block->manager) {
            Manager callback = *block->manager;
            void *payload = block->payload;
            if (callback)
                callback(payload, payload, 1);
            block->manager = 0;
        }
        operator delete(block);
        *destination = 0;
    } else {
        if (typeEqual(*destination, &targetType))
            *destination = const_cast<void *>(*source);
        else
            *destination = 0;
    }
}
