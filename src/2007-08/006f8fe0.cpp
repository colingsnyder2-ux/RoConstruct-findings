// from server: 52% by colin
struct CXTPPropertyGridPaintManager {
    void* vtable;
    char pad_0x04[0x1c];
    void* field_0x20;
    void* field_0x24;
    void* field_0x28;
    void* field_0x2c;
    int field_0x30;
    char pad_0x34[0x60];
    int field_0x94;
    void* field_0x98;
    void* field_0x9c;

    CXTPPropertyGridPaintManager(void* arg);
};

extern "C" void __fastcall sub_73833a(void*);
extern "C" void __fastcall sub_6684a0(void*);

CXTPPropertyGridPaintManager::CXTPPropertyGridPaintManager(void* arg)
{
    sub_73833a(this);
    vtable = (void*)0x7dc85c;
    field_0x24 = 0;
    field_0x20 = (void*)0x794a08;
    field_0x2c = 0;
    field_0x28 = (void*)0x794a08;
    sub_6684a0((char*)this + 0x34);
    sub_6684a0((char*)this + 0x40);
    sub_6684a0((char*)this + 0x4c);
    sub_6684a0((char*)this + 0x58);
    sub_6684a0((char*)this + 0x64);
    sub_6684a0((char*)this + 0x70);
    sub_6684a0((char*)this + 0x7c);
    sub_6684a0((char*)this + 0x88);
    field_0x9c = arg;
    field_0x30 = -1;
    field_0x94 = 0x24;
    field_0x98 = 0;
}
