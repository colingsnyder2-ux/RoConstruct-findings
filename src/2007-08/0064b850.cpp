// from server: 44% by tester
struct CXTPImageManagerIcon {
    char pad0[0x90];
    char field90[0x10];
    void func_64b280(void*);
    void func_64b850(int, int, int, int);
};

extern "C" void __stdcall sub_648710();
extern "C" void __stdcall sub_6496a0(void*);

void CXTPImageManagerIcon::func_64b850(int a, int b, int c, int d) {
    char local[0x10];
    sub_648710();
    func_64b280(local);
    sub_6496a0(local);
}
