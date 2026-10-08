// from server: 92% by colin
// roc 2007-08 005944c0  unit: RBX::VWeldTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005944c0
//
// 005944c0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005944c3  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 005944c9  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 005944cf  85c0                 test eax, eax
// 005944d1  7416                 je 0x5944e9
// 005944d3  50                   push eax
// 005944d4  e8b9ce0900           call 0x631392
// 005944d9  83c404               add esp, 4
// 005944dc  50                   push eax
// 005944dd  b9344e8a00           mov ecx, 0x8a4e34
// 005944e2  ff1508e77700         call dword ptr [0x77e708]
// 005944e8  c3                   ret 
// 005944e9  32c0                 xor al, al
// 005944eb  c3                   ret 

struct VWeldTool {
    char pad[0xc];
    void* workspace;

    bool isEnabled() const;
};

struct Workspace {
    char pad[0x188];
    void* dataModel;
};

struct DataModel {
    char pad[0x318];
    void* something;
};

extern "C" void* __cdecl func_00631392(void*);
extern "C" void __stdcall func_0077e708(void*, void*);

bool VWeldTool::isEnabled() const
{
    Workspace* ws = *(Workspace**)((char*)this + 0xc);
    DataModel* dm = *(DataModel**)((char*)ws + 0x188);
    void* p = *(void**)((char*)dm + 0x318);
    if (p) {
        void* q = func_00631392(p);
        func_0077e708((void*)0x8a4e34, q);
        return true;
    }
    return false;
}
