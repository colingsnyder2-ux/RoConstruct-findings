// from server: 95% by colin
struct Verb {
    char pad[0xc];
    void* container;
};

struct Container {
    char pad[0x188];
    void* something;
};

struct Something {
    char pad[0x318];
    void* ptr;
};

extern "C" void __cdecl func_00631392(void*);
extern "C" void* __stdcall func_0077e708(void*);

struct VRightMotorTool {
    bool isEnabled() const;
};

bool VRightMotorTool::isEnabled() const
{
    void* c = *(void**)((char*)this + 0xc);
    void* s = *(void**)((char*)c + 0x188);
    void* p = *(void**)((char*)s + 0x318);
    if (p) {
        func_00631392(p);
        func_0077e708((void*)0x8a50bc);
        return true;
    }
    return false;
}
