// from server: 40% by colin
struct Verb {
    char pad[0x48];
};

struct MouseCommand {
    char pad[0x204];
    void* p;
};

struct DataModel {
    char pad[0xc];
    MouseCommand* mc;
};

struct TToolVerb {
    char pad[0x48];
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __stdcall MouseCommand_ctor(MouseCommand*, void*);

TToolVerb* makeToolVerb(DataModel* dm)
{
    TToolVerb* v = (TToolVerb*)operator_new(0x48);
    if (v) {
        MouseCommand_ctor((MouseCommand*)v, dm->mc->p);
        *(void**)v = (void*)0x8394ec;
        *(void**)((char*)v + 4) = (void*)0x8394d4;
    }
    return v;
}
