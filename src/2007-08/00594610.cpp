// from server: 92% by colin
// roc 2007-08 00594610  unit: RBX::VStudsTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594610
//
// 00594610  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594613  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594619  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059461f  85c0                 test eax, eax
// 00594621  7416                 je 0x594639
// 00594623  50                   push eax
// 00594624  e869cd0900           call 0x631392
// 00594629  83c404               add esp, 4
// 0059462c  50                   push eax
// 0059462d  b9d44e8a00           mov ecx, 0x8a4ed4
// 00594632  ff1508e77700         call dword ptr [0x77e708]
// 00594638  c3                   ret 
// 00594639  32c0                 xor al, al
// 0059463b  c3                   ret 

struct DataModel;
struct Workspace;

struct MouseCommand {
    static const char* name();
};

struct Verb {
    virtual ~Verb();
    virtual bool isEnabled() const;
    virtual bool isChecked() const;
    virtual bool isSelected() const;
    virtual void getText() const;
    virtual void doIt(void*);
};

struct RunStateVerb : Verb {
};

struct TToolVerb : RunStateVerb {
    bool toggle;
    bool isEnabled() const;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" void* __stdcall sub_77e708(void*, void*);

bool TToolVerb::isEnabled() const {
    DataModel* dm = *(DataModel**)((char*)this + 0xc);
    Workspace* ws = *(Workspace**)((char*)dm + 0x188);
    void* p = *(void**)((char*)ws + 0x318);
    if (p) {
        void* q = sub_631392(p);
        sub_77e708((void*)0x8a4ed4, q);
        return true;
    }
    return false;
}
