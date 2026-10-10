// from server: 83% by colin
struct CXTPBitmapDC {
    void* vtable;
    void* field_0x4;
    void* field_0x8;
    void* field_0xc;
    void* field_0x10;
    void destruct();
};

extern "C" void* __stdcall SelectObject(void*, void*);

void CXTPBitmapDC::destruct() {
    void* a = this->field_0x10;
    void* b = this->field_0xc;
    this->vtable = (void*)0x7cece8;
    SelectObject(b, a);
    void** p = &this->field_0x4;
    *p = (void*)0x7864e0;
    ((void (__thiscall*)(void*))0x41f680)(p);
}
