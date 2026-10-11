// from server: 74% by colin
struct RefPropDescriptor {
    char pad[0x1c];
    void* getset;
    void setValue(void* object, const void* value);
};

extern "C" void* __cdecl func_00492a90(void* p);

void RefPropDescriptor::setValue(void* object, const void* value) {
    void* v;
    if (value) {
        v = func_00492a90((void*)value);
    } else {
        v = 0;
    }
    void* g = this->getset;
    void* tmp = v;
    void** vtbl = *(void***)g;
    void (*fn)(void*, void*, const void*) = (void (*)(void*, void*, const void*))vtbl[3];
    fn(g, object, tmp);
}
