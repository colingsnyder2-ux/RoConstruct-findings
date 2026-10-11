// from server: 89% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct VBrickColor_TypedPropertyDescriptor {
    void* field0;
};

extern "C" void* __stdcall sub_98B768(void*, void*);

void* getTypeInfo(VBrickColor_TypedPropertyDescriptor* self)
{
    if (self == 0) {
        return 0;
    }
    void* p = self->field0;
    void* ti;
    if (p != 0) {
        ti = (*(void***)p)[1];
        ti = ((void* (__thiscall*)(void*))ti)(p);
    } else {
        ti = (void*)0x00B0030C;
    }
    if (sub_98B768(ti, (void*)0x00B1CFDC)) {
        return (char*)self->field0 + 4;
    }
    return 0;
}
