// from server: 60% by why2
struct S {
    char pad[4];
    char flag;
    void* ptr;
    void dispose();
};

extern "C" void __stdcall sub_4131a0(void*);

void S::dispose() {
    if (flag != 0) {
        sub_4131a0(ptr);
    }
}
