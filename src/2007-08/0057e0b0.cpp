// from server: 45% by colin
// roc 2007-08 0057e0b0  unit: seg_0057e000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057e0b0

struct RefPropDescriptor {
    char pad[0x1c];
    void* getset;
    void setValue(void* object, const void* value);
};

extern "C" void* __cdecl sub_0057e060(void* p);

void RefPropDescriptor::setValue(void* object, const void* value)
{
    void* gs;
    if (object) {
        gs = sub_0057e060(object);
    } else {
        gs = 0;
    }
    void** vtbl = *(void***)this->getset;
    typedef void (__thiscall *SetFn)(void*, void*, const void*);
    SetFn fn = (SetFn)vtbl[2];
    fn(this->getset, gs, value);
}
