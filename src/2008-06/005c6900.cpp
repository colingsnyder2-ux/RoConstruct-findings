// from server: 47% by atomic.potato
struct VWeldTool {
    char pad[0xc];
    void* p;
    void* f();
};
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __fastcall sub_619de0(void*, void*);
void* VWeldTool::f() {
    void* m = operator_new(0x48);
    void* r = 0;
    if (m) {
        sub_619de0(m, *(void**)((char*)p + 0x204));
        *(void**)m = (void*)0x8392cc;
        *(void**)((char*)m + 4) = (void*)0x8392b4;
        r = m;
    }
    return r;
}
