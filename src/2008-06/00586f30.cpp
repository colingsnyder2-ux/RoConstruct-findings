// from server: 44% by colin
// roc 2008-06 00586f30  unit: RBX::LocalScript  size: 144 bytes

extern "C" int __stdcall sub_8023d8(void*, void*);
extern "C" void* __stdcall sub_80245c(void*, void*);
extern "C" void* __cdecl sub_6a0920(unsigned int);

struct Str {
    void* data;
    int len;
    int cap;
};

struct LocalScript {
    char pad[0x130];
    Str field130;
    void setScript(void*);
};

void sub_55e1d0(Str*, void*);
void sub_40db00(LocalScript*, void*);

void LocalScript::setScript(void* p) {
    if (sub_8023d8(field130.data, p)) {
        void* mem = sub_6a0920(0x1c);
        void* obj;
        if (mem) {
            obj = sub_80245c(mem, p);
        } else {
            obj = 0;
        }
        sub_55e1d0(&field130, obj);
        sub_40db00(this, (void*)0x975770);
    }
}
