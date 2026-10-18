// from server: 45% by colin
extern "C" void* __stdcall sub_554270();
extern "C" void* __stdcall sub_5644A0(void* self, void* arg);

struct VerbBinder {
    char pad[0x54];
    void* field54;
    void __stdcall insert(int a, int b);
};

void __stdcall VerbBinder::insert(int a, int b) {
    void* v;
    if (a != 0) {
        v = *(void**)(a + 4);
    } else {
        v = sub_554270();
    }
    void* p = sub_5644A0(&field54, &b);
    *(void**)p = v;
}
