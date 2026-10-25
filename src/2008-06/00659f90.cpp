// from server: 100% by king_originala
// roc 2008-06 00659f90  unit: RBX::BallBallContact  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00659f90
//
// 00659f90  53                   push ebx
// 00659f91  55                   push ebp
// 00659f92  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00659f96  57                   push edi
// 00659f97  33ff                 xor edi, edi
// 00659f99  8bd9                 mov ebx, ecx
// 00659f9b  3bef                 cmp ebp, edi
// 00659f9d  755a                 jne 0x659ff9
// 00659f9f  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00659fa2  3bc7                 cmp eax, edi
// 00659fa4  7428                 je 0x659fce
// 00659fa6  8b4804               mov ecx, dword ptr [eax + 4]
// 00659fa9  8b542414             mov edx, dword ptr [esp + 0x14]
// 00659fad  894b6c               mov dword ptr [ebx + 0x6c], ecx
// 00659fb0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00659fb4  895010               mov dword ptr [eax + 0x10], edx
// 00659fb7  8b11                 mov edx, dword ptr [ecx]
// 00659fb9  895014               mov dword ptr [eax + 0x14], edx
// 00659fbc  8b5104               mov edx, dword ptr [ecx + 4]
// 00659fbf  5f                   pop edi
// 00659fc0  895018               mov dword ptr [eax + 0x18], edx
// 00659fc3  8b4908               mov ecx, dword ptr [ecx + 8]
// 00659fc6  5d                   pop ebp
// 00659fc7  89481c               mov dword ptr [eax + 0x1c], ecx
// 00659fca  5b                   pop ebx
// 00659fcb  c20c00               ret 0xc
// 00659fce  6a24                 push 0x24
// 00659fd0  e84b690400           call 0x6a0920
// 00659fd5  83c404               add esp, 4
// 00659fd8  3bc7                 cmp eax, edi
// 00659fda  7415                 je 0x659ff1
// 00659fdc  897814               mov dword ptr [eax + 0x14], edi
// 00659fdf  897818               mov dword ptr [eax + 0x18], edi
// 00659fe2  89781c               mov dword ptr [eax + 0x1c], edi
// 00659fe5  5f                   pop edi
// 00659fe6  33d2                 xor edx, edx
// 00659fe8  5d                   pop ebp
// 00659fe9  66895020             mov word ptr [eax + 0x20], dx
// 00659fed  5b                   pop ebx
// 00659fee  c20c00               ret 0xc
// 00659ff1  5f                   pop edi
// 00659ff2  5d                   pop ebp
// 00659ff3  33c0                 xor eax, eax
// 00659ff5  5b                   pop ebx
// 00659ff6  c20c00               ret 0xc
// 00659ff9  56                   push esi
// 00659ffa  8b7370               mov esi, dword ptr [ebx + 0x70]
// 00659ffd  3bf7                 cmp esi, edi
// 00659fff  740c                 je 0x65a00d
// 0065a001  8b4604               mov eax, dword ptr [esi + 4]
// 0065a004  894370               mov dword ptr [ebx + 0x70], eax
// 0065a007  66896e20             mov word ptr [esi + 0x20], bp
// 0065a00b  eb21                 jmp 0x65a02e
// 0065a00d  6a28                 push 0x28
// 0065a00f  e80c690400           call 0x6a0920
// 0065a014  83c404               add esp, 4
// 0065a017  3bc7                 cmp eax, edi
// 0065a019  740f                 je 0x65a02a
// 0065a01b  897814               mov dword ptr [eax + 0x14], edi
// 0065a01e  897818               mov dword ptr [eax + 0x18], edi
// 0065a021  89781c               mov dword ptr [eax + 0x1c], edi
// 0065a024  66896820             mov word ptr [eax + 0x20], bp
// 0065a028  eb02                 jmp 0x65a02c
// 0065a02a  33c0                 xor eax, eax
// 0065a02c  8bf0                 mov esi, eax
// 0065a02e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0065a032  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0065a036  896e10               mov dword ptr [esi + 0x10], ebp
// 0065a039  8b0f                 mov ecx, dword ptr [edi]
// 0065a03b  894e14               mov dword ptr [esi + 0x14], ecx
// 0065a03e  8b5704               mov edx, dword ptr [edi + 4]
// 0065a041  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065a045  57                   push edi
// 0065a046  895618               mov dword ptr [esi + 0x18], edx
// 0065a049  8b4708               mov eax, dword ptr [edi + 8]
// 0065a04c  55                   push ebp
// 0065a04d  51                   push ecx
// 0065a04e  8bcb                 mov ecx, ebx
// 0065a050  89461c               mov dword ptr [esi + 0x1c], eax
// 0065a053  e818f6ffff           call 0x659670
// 0065a058  894624               mov dword ptr [esi + 0x24], eax
// 0065a05b  85c0                 test eax, eax
// 0065a05d  7511                 jne 0x65a070
// 0065a05f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065a063  57                   push edi
// 0065a064  55                   push ebp
// 0065a065  52                   push edx
// 0065a066  8bcb                 mov ecx, ebx
// 0065a068  e863f6ffff           call 0x6596d0
// 0065a06d  894624               mov dword ptr [esi + 0x24], eax
// 0065a070  8b4624               mov eax, dword ptr [esi + 0x24]
// 0065a073  ff4014               inc dword ptr [eax + 0x14]
// 0065a076  8bc6                 mov eax, esi
// 0065a078  5e                   pop esi
// 0065a079  5f                   pop edi
// 0065a07a  5d                   pop ebp
// 0065a07b  5b                   pop ebx
// 0065a07c  c20c00               ret 0xc

extern "C" void* __cdecl allocate(unsigned int);

struct Key {
    unsigned int a, b, c;
};

struct Node {
    char padding[28];
    Key key;
    Node* next;
};

struct PoolNode {
    unsigned int unused;
    PoolNode* next;
    unsigned int reserved[2];
    unsigned int value;
    Key key;
    unsigned short kind;
    unsigned short padding;
    Node* node;
};

struct S {
    char padding[108];
    PoolNode* freeSmall;
    PoolNode* freeLarge;

    Node* find(unsigned int, unsigned int, const Key*);
    Node* create(unsigned int, unsigned int, const Key*);
    PoolNode* f(unsigned int, unsigned int, const Key*);
};

PoolNode* S::f(unsigned int kind, unsigned int value, const Key* key)
{
    if (kind == 0) {
        PoolNode* p = freeSmall;
        if (p) {
            freeSmall = p->next;
            p->value = value;
            p->key = *key;
            return p;
        }

        p = static_cast<PoolNode*>(allocate(36));
        if (p) {
            p->key.a = 0;
            p->key.b = 0;
            p->key.c = 0;
            p->kind = 0;
            return p;
        }
        return 0;
    }

    PoolNode* p = freeLarge;
    if (p) {
        freeLarge = p->next;
        p->kind = static_cast<unsigned short>(kind);
    } else {
        PoolNode* allocated = static_cast<PoolNode*>(allocate(40));
        if (allocated) {
            allocated->key.a = 0;
            allocated->key.b = 0;
            allocated->key.c = 0;
            allocated->kind = static_cast<unsigned short>(kind);
        } else {
            allocated = 0;
        }
        p = allocated;
    }

    p->value = value;
    p->key = *key;
    p->node = find(kind, value, key);
    if (!p->node)
        p->node = create(kind, value, key);
    ++reinterpret_cast<unsigned int*>(p->node)[5];
    return p;
}
