// from server: 100% by king_originala
// roc 2008-06 0060d770  unit: RBX::BlockBlockContact  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060d770
//
// 0060d770  64a100000000         mov eax, dword ptr fs:[0]
// 0060d776  6aff                 push -1
// 0060d778  68418c7d00           push 0x7d8c41
// 0060d77d  50                   push eax
// 0060d77e  64892500000000       mov dword ptr fs:[0], esp
// 0060d785  53                   push ebx
// 0060d786  56                   push esi
// 0060d787  8b742418             mov esi, dword ptr [esp + 0x18]
// 0060d78b  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0060d791  8b01                 mov eax, dword ptr [ecx]
// 0060d793  8b5008               mov edx, dword ptr [eax + 8]
// 0060d796  57                   push edi
// 0060d797  ffd2                 call edx
// 0060d799  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060d79d  8b8f9c000000         mov ecx, dword ptr [edi + 0x9c]
// 0060d7a3  8bd8                 mov ebx, eax
// 0060d7a5  8b01                 mov eax, dword ptr [ecx]
// 0060d7a7  8b5008               mov edx, dword ptr [eax + 8]
// 0060d7aa  ffd2                 call edx
// 0060d7ac  3bd8                 cmp ebx, eax
// 0060d7ae  7e06                 jle 0x60d7b6
// 0060d7b0  8bc6                 mov eax, esi
// 0060d7b2  8bf7                 mov esi, edi
// 0060d7b4  8bf8                 mov edi, eax
// 0060d7b6  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0060d7bc  8b01                 mov eax, dword ptr [ecx]
// 0060d7be  8b5008               mov edx, dword ptr [eax + 8]
// 0060d7c1  ffd2                 call edx
// 0060d7c3  8b8f9c000000         mov ecx, dword ptr [edi + 0x9c]
// 0060d7c9  8bd8                 mov ebx, eax
// 0060d7cb  8b01                 mov eax, dword ptr [ecx]
// 0060d7cd  8b5008               mov edx, dword ptr [eax + 8]
// 0060d7d0  ffd2                 call edx
// 0060d7d2  8bcb                 mov ecx, ebx
// 0060d7d4  83e901               sub ecx, 1
// 0060d7d7  741b                 je 0x60d7f4
// 0060d7d9  83e901               sub ecx, 1
// 0060d7dc  7420                 je 0x60d7fe
// 0060d7de  33c0                 xor eax, eax
// 0060d7e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060d7e4  64890d00000000       mov dword ptr fs:[0], ecx
// 0060d7eb  5f                   pop edi
// 0060d7ec  5e                   pop esi
// 0060d7ed  5b                   pop ebx
// 0060d7ee  83c40c               add esp, 0xc
// 0060d7f1  c20800               ret 8
// 0060d7f4  83e801               sub eax, 1
// 0060d7f7  7473                 je 0x60d86c
// 0060d7f9  83e801               sub eax, 1
// 0060d7fc  7437                 je 0x60d835
// 0060d7fe  6a7c                 push 0x7c
// 0060d800  e81b310900           call 0x6a0920
// 0060d805  83c404               add esp, 4
// 0060d808  8944241c             mov dword ptr [esp + 0x1c], eax
// 0060d80c  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0060d814  85c0                 test eax, eax
// 0060d816  74c6                 je 0x60d7de
// 0060d818  57                   push edi
// 0060d819  56                   push esi
// 0060d81a  8bc8                 mov ecx, eax
// 0060d81c  e8dffcffff           call 0x60d500
// 0060d821  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060d825  64890d00000000       mov dword ptr fs:[0], ecx
// 0060d82c  5f                   pop edi
// 0060d82d  5e                   pop esi
// 0060d82e  5b                   pop ebx
// 0060d82f  83c40c               add esp, 0xc
// 0060d832  c20800               ret 8
// 0060d835  6a38                 push 0x38
// 0060d837  e8e4300900           call 0x6a0920
// 0060d83c  83c404               add esp, 4
// 0060d83f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0060d843  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0060d84b  85c0                 test eax, eax
// 0060d84d  748f                 je 0x60d7de
// 0060d84f  57                   push edi
// 0060d850  56                   push esi
// 0060d851  8bc8                 mov ecx, eax
// 0060d853  e838f3ffff           call 0x60cb90
// 0060d858  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060d85c  64890d00000000       mov dword ptr fs:[0], ecx
// 0060d863  5f                   pop edi
// 0060d864  5e                   pop esi
// 0060d865  5b                   pop ebx
// 0060d866  83c40c               add esp, 0xc
// 0060d869  c20800               ret 8
// 0060d86c  6a38                 push 0x38
// 0060d86e  e8ad300900           call 0x6a0920
// 0060d873  83c404               add esp, 4
// 0060d876  8944241c             mov dword ptr [esp + 0x1c], eax
// 0060d87a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0060d882  85c0                 test eax, eax
// 0060d884  0f8454ffffff         je 0x60d7de
// 0060d88a  57                   push edi
// 0060d88b  56                   push esi
// 0060d88c  8bc8                 mov ecx, eax
// 0060d88e  e84df2ffff           call 0x60cae0
// 0060d893  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060d897  5f                   pop edi
// 0060d898  5e                   pop esi
// 0060d899  64890d00000000       mov dword ptr fs:[0], ecx
// 0060d8a0  5b                   pop ebx
// 0060d8a1  83c40c               add esp, 0xc
// 0060d8a4  c20800               ret 8

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Geometry {
    virtual void slot0();
    virtual void slot1();
    virtual int getType();
};

struct Primitive {
    char padding[0x9c];
    Geometry* geometry;
};

struct Contact1 {
    char storage[0x38];
    Contact1(Primitive*, Primitive*);
};

struct Contact2 {
    char storage[0x38];
    Contact2(Primitive*, Primitive*);
};

struct Contact3 {
    char storage[0x7c];
    Contact3(Primitive*, Primitive*);
};

void* __stdcall createContact(Primitive* first, Primitive* second)
{
    int firstType = first->geometry->getType();
    int secondType = second->geometry->getType();

    if (firstType > secondType) {
        Primitive* temp = first;
        first = second;
        second = temp;
    }

    firstType = first->geometry->getType();
    secondType = second->geometry->getType();

    switch (firstType) {
    case 1:
        switch (secondType) {
        case 1:
            return new Contact1(first, second);
        case 2:
            return new Contact2(first, second);
        }
    case 2:
        return new Contact3(first, second);
    default:
        return 0;
    }
}
