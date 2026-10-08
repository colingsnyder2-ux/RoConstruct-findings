// from server: 92% by colin
// roc 2007-08 00594e60  unit: RBX::VAnchorTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594e60
//
// 00594e60  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594e63  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594e69  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 00594e6f  85c0                 test eax, eax
// 00594e71  7416                 je 0x594e89
// 00594e73  50                   push eax
// 00594e74  e819c50900           call 0x631392
// 00594e79  83c404               add esp, 4
// 00594e7c  50                   push eax
// 00594e7d  b968548a00           mov ecx, 0x8a5468
// 00594e82  ff1508e77700         call dword ptr [0x77e708]
// 00594e88  c3                   ret 
// 00594e89  32c0                 xor al, al
// 00594e8b  c3                   ret 

struct AnchorTool {
    char pad[0xc];
    void* field0c;
    bool isEnabled() const;
};

struct VerbContainer {
    char pad[0x188];
    void* field188;
};

struct DataModel {
    char pad[0x318];
    void* field318;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" void* __cdecl sub_77e708(void*, void*);

extern void* g_8a5468;

bool AnchorTool::isEnabled() const
{
    void* p = field0c;
    VerbContainer* vc = *(VerbContainer**)((char*)p + 0x188);
    void* q = *(void**)((char*)vc + 0x318);
    if (q) {
        void* r = sub_631392(q);
        sub_77e708(&g_8a5468, r);
        return true;
    }
    return false;
}
