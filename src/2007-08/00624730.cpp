// from server: 35% by colin
struct Cofm {
    char pad0[4];
    void** begin;
    void** end;
    void* field0c;
    void* field10;
    int f();
};

extern "C" void __stdcall sub_62FC62(void*);
extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_77E6D8();

int Cofm::f() {
    void** ebx = end;
    if (begin > ebx) {
        sub_77E6D8();
    }
    void** esi = begin;
    if (esi > end) {
        sub_77E6D8();
    }
    while (esi != ebx) {
        void* edi = *esi;
        if (edi != 0) {
            ((Cofm*)edi)->f();
            sub_62FC62(edi);
        }
        esi++;
    }
    sub_77E6AC(&field10);
    void* eax = begin;
    if (eax != 0) {
        sub_62FC62(eax);
    }
    begin = 0;
    end = 0;
    field0c = 0;
    return 0;
}
