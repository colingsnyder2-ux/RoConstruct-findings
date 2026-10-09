// from server: 97% by colin
// roc 2007-08 005952d0  unit: RBX::VGameTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005952d0
//
// 005952d0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005952d3  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 005952d9  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 005952df  85c0                 test eax, eax
// 005952e1  7416                 je 0x5952f9
// 005952e3  50                   push eax
// 005952e4  e8a9c00900           call 0x631392
// 005952e9  83c404               add esp, 4
// 005952ec  50                   push eax
// 005952ed  b968578a00           mov ecx, 0x8a5768
// 005952f2  ff1508e77700         call dword ptr [0x77e708]
// 005952f8  c3                   ret 
// 005952f9  32c0                 xor al, al
// 005952fb  c3                   ret 

struct MouseCommand {
    char pad[0x188];
    void* field_188;
};

struct TToolVerb {
    char pad[0xc];
    MouseCommand* mouseCommand;
    bool isEnabled() const;
};

extern "C" int __cdecl sub_00631392(void*);
extern "C" bool (__thiscall *sub_0077e708)(void*, int);
extern char g_8a5768;

bool TToolVerb::isEnabled() const {
    void* p = this->mouseCommand->field_188;
    void* q = *reinterpret_cast<void**>(reinterpret_cast<char*>(p) + 0x318);
    if (q) {
        return sub_0077e708(&g_8a5768, sub_00631392(q));
    }
    return false;
}
