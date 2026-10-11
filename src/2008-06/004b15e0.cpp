// from server: 94% by tester
extern "C" void __cdecl free(void*);
extern "C" void __cdecl sub_553d80();

struct S {
    char pad0[0x24];
    void* field24;
    char pad1[0x08];
    void* field30;
    void* field34;
    void* field38;
    void destroy();
};

void S::destroy()
{
    if (field30) {
        free(field30);
    }
    void* p = field24;
    field30 = 0;
    field34 = 0;
    field38 = 0;
    free(p);
    sub_553d80();
}
