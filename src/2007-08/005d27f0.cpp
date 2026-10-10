// from server: 63% by colin
struct Instance;
struct Tool;

extern "C" Instance* __stdcall sub_495820(Tool*);
extern "C" int __stdcall sub_5a56b0(Instance*);
extern "C" int __stdcall sub_5d2380(Instance*);
extern "C" int __stdcall sub_4887e0(Instance*);
extern "C" void __stdcall sub_5d2690(Instance*);

struct Tool {
    char pad[0xbc];
    int field_bc;
    void sub_541630(Instance*);
    void func();
};

void Tool::func() {
    Instance* p = sub_495820(this);
    if (p) {
        Instance* q = *(Instance**)((char*)p + 0x118);
        if (q) {
            if (sub_5a56b0(q)) {
                Instance* r = (Instance*)sub_5d2380(q);
                if (r) {
                    int (*fp)(Instance*) = *(int (**)(Instance*))((*(int*)r) + 0x90);
                    if (!fp(r)) {
                        return;
                    }
                }
            }
        }
        int v = *(int*)((char*)this + 0xbc);
        if (v == sub_4887e0(p)) {
            sub_5d2690(p);
            sub_541630(*(Instance**)((char*)p + 0x118));
        } else {
            sub_541630((Instance*)sub_4887e0(p));
        }
    }
}
