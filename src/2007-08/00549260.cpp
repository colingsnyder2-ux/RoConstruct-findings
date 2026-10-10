// from server: 44% by colin
struct S {
    char pad[0x1c];
    void* field_1c;
    void* method_5488e0(void*);
    bool method_548680(void*);
    bool target(int, int, int, int, int, int, int, int, int);
};

extern "C" {
    void __stdcall sub_77e69c(void*, void*);
    void __stdcall sub_77e690(void*, void*);
    void __stdcall sub_77e6ac(void*);
}

bool S::target(int, int, int, int, int, int, int, int, int)
{
    char local[0x20];
    int flag = 0;
    sub_77e69c(local, &flag);
    *(void**)(local + 0x1c) = field_1c;
    void* p = method_5488e0(local);
    if (p != 0) {
        sub_77e6ac(local);
        return false;
    }
    if (!method_548680(p)) {
        sub_77e6ac(local);
        return false;
    }
    void* q = *(void**)((char*)p + 8);
    sub_77e690(local, q);
    sub_77e6ac(local);
    return true;
}
