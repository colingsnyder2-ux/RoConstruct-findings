// from server: 70% by atomic.potato




extern "C" void* __cdecl sub_585310(void*);

struct VModelInstance {
    char pad[0x1c];
    void* field_1c;
    void __thiscall RefPropDescriptor(void*, void*);
};

void VModelInstance::RefPropDescriptor(void* a, void* b) {
    void* v;
    if (b) {
        v = sub_585310(b);
    } else {
        v = 0;
    }
    void* p = field_1c;
    void* tmp = v;
    void* fn = *(void**)(*(char**)p + 0xc);
    ((void (__thiscall*)(void*, void*, void*))fn)(p, a, tmp);
}
