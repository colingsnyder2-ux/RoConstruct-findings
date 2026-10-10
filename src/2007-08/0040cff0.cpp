// from server: 45% by colin
struct CGdiObject {
    void construct();
};

extern "C" void __stdcall sub_77DDAC(void*);
extern "C" void __stdcall sub_77DCB8(void*, void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void __stdcall sub_630250(CGdiObject*, void*);
extern "C" void __stdcall sub_630016(CGdiObject*, void*);

extern void* g_881DD8;
extern void* g_785954;

void CGdiObject::construct() {
    void* local;
    sub_77DDAC(&local);
    sub_630250(this, &local);
    sub_77DCB8(&local, g_881DD8);
    if (local == 0) {
        sub_630016(this, g_785954);
    }
    sub_77DDBC(&local);
}
