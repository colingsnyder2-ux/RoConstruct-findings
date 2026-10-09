// from server: 47% by colin
// roc 2007-08 005a1bd0  unit: RBX::VShirt::?$FactoryProduct  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1bd0
//
// 005a1bd0  53                   push ebx
// 005a1bd1  56                   push esi
// 005a1bd2  8bf1                 mov esi, ecx
// 005a1bd4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a1bd8  57                   push edi
// 005a1bd9  e882400000           call 0x5a5c60
// 005a1bde  85c0                 test eax, eax
// 005a1be0  7432                 je 0x5a1c14
// 005a1be2  8bc8                 mov ecx, eax
// 005a1be4  e877fdffff           call 0x5a1960
// 005a1be9  8bd8                 mov ebx, eax
// 005a1beb  85db                 test ebx, ebx
// 005a1bed  7425                 je 0x5a1c14
// 005a1bef  83ec20               sub esp, 0x20
// 005a1bf2  8bfc                 mov edi, esp
// 005a1bf4  81c6e8000000         add esi, 0xe8
// 005a1bfa  89642430             mov dword ptr [esp + 0x30], esp
// 005a1bfe  56                   push esi
// 005a1bff  8bcf                 mov ecx, edi
// 005a1c01  ff159ce67700         call dword ptr [0x77e69c]
// 005a1c07  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005a1c0a  8bcb                 mov ecx, ebx
// 005a1c0c  89471c               mov dword ptr [edi + 0x1c], eax
// 005a1c0f  e82c14fdff           call 0x573040
// 005a1c14  5f                   pop edi
// 005a1c15  5e                   pop esi
// 005a1c16  5b                   pop ebx
// 005a1c17  c20400               ret 4

struct RBXName {
    char pad[0x1c];
    void* field_1c;
};

struct FactoryProduct {
    char pad[0xe8];
    RBXName name;

    void sub_5A1BD0(void* arg);
};

struct Creator {
    void* sub_5A5C60(void*);
    void* sub_5A1960();
    void sub_573040();
};

extern "C" void* __cdecl sub_5A5C60(void*);
extern "C" void* __cdecl sub_5A1960(void*);
extern "C" void __cdecl sub_573040(void*);
extern "C" void __cdecl sub_77E69C(void*, void*);

void FactoryProduct::sub_5A1BD0(void* arg)
{
    void* p = sub_5A5C60(arg);
    if (p) {
        void* q = sub_5A1960(p);
        if (q) {
            char buf[0x20];
            void* pbuf = buf;
            RBXName* n = &this->name;
            sub_77E69C(buf, n);
            *(void**)(buf + 0x1c) = n->field_1c;
            sub_573040(q);
        }
    }
}
