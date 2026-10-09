// from server: 92% by colin
// roc 2007-08 005954b0  unit: RBX::VHammerTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005954b0
//
// 005954b0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005954b3  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 005954b9  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 005954bf  85c0                 test eax, eax
// 005954c1  7416                 je 0x5954d9
// 005954c3  50                   push eax
// 005954c4  e8c9be0900           call 0x631392
// 005954c9  83c404               add esp, 4
// 005954cc  50                   push eax
// 005954cd  b980588a00           mov ecx, 0x8a5880
// 005954d2  ff1508e77700         call dword ptr [0x77e708]
// 005954d8  c3                   ret 
// 005954d9  32c0                 xor al, al
// 005954db  c3                   ret 

struct HammerTool;

struct TToolVerb {
    char pad[0xc];
    HammerTool* tool;
    bool m();
};

struct HammerTool {
    char pad[0x188];
    void* field188;
};

struct Inner {
    char pad[0x318];
    void* field318;
};

struct Verb {
    bool operator==(const Verb&) const;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" bool (__thiscall *sub_77e708)(const Verb*, void*);

bool TToolVerb::m()
{
    Inner* inner = (Inner*)tool->field188;
    void* p = inner->field318;
    if (p) {
        void* q = sub_631392(p);
        return sub_77e708((const Verb*)0x8a5880, q);
    }
    return false;
}
