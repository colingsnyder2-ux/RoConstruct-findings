// from server: 73% by colin
// roc 2007-08 006eff90  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006eff90
//
// 006eff90  53                   push ebx
// 006eff91  8bd9                 mov ebx, ecx
// 006eff93  57                   push edi
// 006eff94  8b7b08               mov edi, dword ptr [ebx + 8]
// 006eff97  85ff                 test edi, edi
// 006eff99  743a                 je 0x6effd5
// 006eff9b  55                   push ebp
// 006eff9c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006effa0  56                   push esi
// 006effa1  8bc7                 mov eax, edi
// 006effa3  8b7008               mov esi, dword ptr [eax + 8]
// 006effa6  8b4664               mov eax, dword ptr [esi + 0x64]
// 006effa9  3be8                 cmp ebp, eax
// 006effab  8b3f                 mov edi, dword ptr [edi]
// 006effad  7520                 jne 0x6effcf
// 006effaf  85c0                 test eax, eax
// 006effb1  8d4e54               lea ecx, [esi + 0x54]
// 006effb4  7403                 je 0x6effb9
// 006effb6  8b4020               mov eax, dword ptr [eax + 0x20]
// 006effb9  51                   push ecx
// 006effba  50                   push eax
// 006effbb  e88030fbff           call 0x6a3040
// 006effc0  8bc8                 mov ecx, eax
// 006effc2  e84935fbff           call 0x6a3510
// 006effc7  56                   push esi
// 006effc8  8bcb                 mov ecx, ebx
// 006effca  e8e1feffff           call 0x6efeb0
// 006effcf  85ff                 test edi, edi
// 006effd1  75ce                 jne 0x6effa1
// 006effd3  5e                   pop esi
// 006effd4  5d                   pop ebp
// 006effd5  5f                   pop edi
// 006effd6  5b                   pop ebx
// 006effd7  c20400               ret 4

struct Node {
    Node* next;
    int pad;
    void* data;
};

struct Inner {
    char pad0[0x54];
    int field54;
    char pad1[0x64 - 0x58];
    void* field64;
};

struct Manager {
    char pad0[8];
    Node* head;
    void remove(void* arg);
};

extern "C" void* __cdecl sub_6a3040(void*, void*);
extern "C" void __cdecl sub_6a3510(void*);

void Manager::remove(void* arg) {
    Node* node = head;
    if (node != 0) {
        do {
            Inner* inner = (Inner*)node->data;
            void* v = inner->field64;
            if (arg == v) {
                void* p;
                if (v != 0) {
                    p = *(void**)((char*)v + 0x20);
                } else {
                    p = 0;
                }
                void* r = sub_6a3040(p, (char*)inner + 0x54);
                sub_6a3510(r);
                this->remove(inner);
            }
            node = node->next;
        } while (node != 0);
    }
}
