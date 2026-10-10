// from server: 88% by colin
struct RefPropDescriptor {
    char pad[0x18];
    void* getset;
    void setValue(void* object, void* value, void* extra);
};

void RefPropDescriptor::setValue(void* object, void* value, void* extra) {
    void* p = this ? (char*)this + 0x18 : 0;
    void* q = object ? (char*)object + 0xc : 0;
    void* vtable = *(void**)extra;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vtable + 4);
    fn(q, p, extra);
}
