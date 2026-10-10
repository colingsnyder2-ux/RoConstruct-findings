// from server: 85% by colin
struct RefPropDescriptor {
    char pad[0x1c];
    void* field_1c;
    void setValue(void* object, const void* value);
};

extern void* __cdecl func_0048da90(void*);

void RefPropDescriptor::setValue(void* object, const void* value)
{
    void* v;
    if (object) {
        v = func_0048da90(object);
    } else {
        v = 0;
    }
    void* p = field_1c;
    void* tmp = v;
    void** vtbl = *(void***)p;
    void (*fn)(void*, void**, const void*) = (void (*)(void*, void**, const void*))vtbl[2];
    fn(p, &tmp, value);
}
