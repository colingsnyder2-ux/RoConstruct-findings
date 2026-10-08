// from server: 88% by colin
// roc 2007-08 00594bb0  unit: RBX::VOscillateMotorTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594bb0
//
// 00594bb0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594bb3  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594bb9  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 00594bbf  85c0                 test eax, eax
// 00594bc1  7416                 je 0x594bd9
// 00594bc3  50                   push eax
// 00594bc4  e8c9c70900           call 0x631392
// 00594bc9  83c404               add esp, 4
// 00594bcc  50                   push eax
// 00594bcd  b920528a00           mov ecx, 0x8a5220
// 00594bd2  ff1508e77700         call dword ptr [0x77e708]
// 00594bd8  c3                   ret 
// 00594bd9  32c0                 xor al, al
// 00594bdb  c3                   ret 

struct type_info;

extern "C" {
    int __cdecl strcmp(const char*, const char*);
}

struct Name {
    void* data;
};

struct VerbContainer;

struct Verb {
    const Name& name;
    VerbContainer* const container;
    bool verbSecurity;
};

struct DataModel;

struct MouseCommand {
    static const Name& name();
};

struct OscillateMotorTool {
    static const Name& name();
};

struct TToolVerb : Verb {
    bool toggle;
    TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted);
};

struct DataModel {
    char pad[0x188];
    void* getVerbContainer();
};

struct VerbContainer {
    char pad[0x318];
    void* findVerb(const Name& name);
};

struct RBX {
    struct Security {
        static void setHackFlagVs(int flag, int value);
    };
};

extern "C" int __cdecl _stricmp(const char*, const char*);

struct TToolVerbImpl {
    bool isEnabled() const;
};

bool TToolVerbImpl::isEnabled() const {
    DataModel* dm = *(DataModel**)((char*)this + 0xc);
    VerbContainer* vc = *(VerbContainer**)((char*)dm + 0x188);
    void* v = *(void**)((char*)vc + 0x318);
    if (v) {
        const char* s = (const char*)v;
        int r = _stricmp(s, "QVWjL");
        return r == 0;
    }
    return false;
}
