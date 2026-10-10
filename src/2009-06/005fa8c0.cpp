// from server: 88% by why2
struct S {
    char pad[0x23c];
    void f();
};

extern "C" void* __stdcall assign_string(void*, const char*);

void S::f() {
    assign_string((char*)this + 0x23c, ">Authoring");
}
