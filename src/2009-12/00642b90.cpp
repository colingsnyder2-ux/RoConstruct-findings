// from server: 78% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct VBrickColorTypedPropertyDescriptor {
    void* field0;
    void* get();
};

void* VBrickColorTypedPropertyDescriptor::get() {
    void* p = *(void**)((char*)this + 8);
    if (p == 0) {
        return 0;
    }
    void* obj = *(void**)p;
    void* ti;
    if (obj != 0) {
        ti = (*(void***)obj)[1];
        ti = ((void* (__thiscall*)(void*))ti)(obj);
    } else {
        ti = (void*)0x00b0030c;
    }
    if (((type_info*)ti)->operator==(*(type_info*)0x00b1d7fc)) {
        return (char*)p + 4;
    }
    return 0;
}
