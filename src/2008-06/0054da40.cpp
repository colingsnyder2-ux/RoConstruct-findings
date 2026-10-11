// from server: 44% by colin
struct Mesh {
    char pad[8];
    Mesh* f(const void*);
};

extern "C" void __stdcall sub_553220(const void*);
extern "C" void __stdcall sub_54ef60();

Mesh* Mesh::f(const void* arg) {
    sub_553220(&arg);
    sub_54ef60();
    sub_553220((char*)this + 8);
    return this;
}
