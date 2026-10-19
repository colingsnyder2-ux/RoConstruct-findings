// from server: 72% by colin
// from server: 70% by colin
// roc 2008-06 00598610  unit: RBX::Decal  size: 126 bytes

struct RBX_String {
    void assign(const RBX_String&);
    __declspec(dllimport) ~RBX_String() throw();
};

extern "C" int __stdcall sub_55BD60(void*, void*);
extern "C" void* __stdcall sub_80240C(void*, void*);
extern "C" void __stdcall sub_802468(void*);

struct RBX_Decal {
    char pad[0x144];
    RBX_String name;
    void setSomething(const RBX_String*);
    void construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h);
};

void RBX_Decal::construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h) {
    RBX_String tmp;
    if (sub_55BD60(&tmp, &name)) {
        sub_80240C(&name, &tmp);
        name.assign(tmp);
        setSomething(&tmp);
    }
    sub_802468(&tmp);
}
