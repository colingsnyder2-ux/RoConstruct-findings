// from server: 39% by colin
struct ExitCommand {
    char pad[0x0c];
    void* field_c;
    void execute(int);
};

extern "C" void* __cdecl sub_6a0926();
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

void ExitCommand::execute(int arg) {
    void* p = sub_6a0926();
    void* q = *(void**)((char*)p + 4);
    void* r = *(void**)((char*)q + 0x20);
    if (*(char*)((char*)r + 0x104) != 0) {
        void* w = *(void**)((char*)r + 0x20);
        PostMessageA(w, 0x10, 0, 0);
        return;
    }
    void* c = field_c;
    void** vt = *(void***)c;
    int (*fn1)(void*) = (int (*)(void*))vt[0x68 / 4];
    int res = fn1(c);
    if (res != 0) {
        void* c2 = field_c;
        void** vt2 = *(void***)c2;
        void* (*fn2)(void*, int*) = (void* (*)(void*, int*))vt2[0x6c / 4];
        int local = res;
        void* out = fn2(c2, &local);
        void* w2 = *(void**)((char*)out + 0x20);
        PostMessageA(w2, 0x111, 0xe102, 0);
    }
}
