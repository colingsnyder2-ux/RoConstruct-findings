// from server: 35% by colin
struct CXTPBitmapDC {
    void* vtable;
    char pad[0x0c];
    void* field_10;
    void construct(void* bitmap, void* dc);
};

extern "C" void* __stdcall CreateSolidBrush(unsigned int);
extern "C" void* __stdcall SelectObject(void* hdc, void* obj);
extern "C" void* __stdcall sub_630238(void* p);

void CXTPBitmapDC::construct(void* bitmap, void* dc)
{
    this->vtable = (void*)0x7cece8;
    *(void**)((char*)this + 8) = (void*)0x7864e0;
    *(void**)((char*)this + 4) = 0;
    this->field_10 = 0;
    *(void**)((char*)this + 0x0c) = bitmap;
    void* brush = CreateSolidBrush(0);
    sub_630238(brush);
    void* obj = *(void**)((char*)this + 8);
    if (obj != 0) {
        obj = *(void**)((char*)obj + 4);
    }
    this->field_10 = SelectObject(*(void**)((char*)this + 0x0c), obj);
}
