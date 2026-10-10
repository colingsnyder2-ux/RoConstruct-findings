// from server: 76% by colin
struct PersistentDataStore {
    char pad0[4];
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    char pad14[4];
    void* field18;
    void* field1C;
    void save();
};

extern "C" void* __stdcall sub_52C940(void*);
extern "C" void* __stdcall sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_491500(void*);
extern "C" void __stdcall sub_77E69C(void*, void*);

void PersistentDataStore::save()
{
    void* esi;
    void* eax;
    void* ecx;
    void* edi;
    void* ebx;
    void* esp_save;

    esi = sub_52C940((void*)0x79B6DC);
    eax = sub_62FEF6(0x20);
    if (eax != 0) {
        *(void**)eax = 0;
        *(void**)((char*)eax + 4) = 0;
        *(void**)((char*)eax + 8) = 0;
        *(void**)((char*)eax + 0xC) = esi;
        *(void**)((char*)eax + 0x10) = 0;
        *(void**)((char*)eax + 0x18) = 0;
        *(void**)((char*)eax + 0x1C) = 0;
        esi = eax;
    } else {
        esi = 0;
    }

    eax = *(void**)((char*)this + 8);
    if (eax == 0) {
        *(void**)((char*)this + 4) = esi;
    } else {
        *(void**)eax = esi;
    }

    edi = *(void**)((char*)this + 4);
    *(void**)((char*)this + 8) = esi;

    esp_save = (void*)((char*)this + 4);
    sub_77E69C(esp_save, (void*)((char*)edi + 4));

    sub_491500((char*)esi + 0xC);

    edi = *(void**)edi;

    ebx = sub_52C940((void*)0x79B888);
    eax = sub_62FEF6(0x10);
    if (eax != 0) {
        *(void**)eax = 0;
        *(void**)((char*)eax + 4) = ebx;
        *(void**)((char*)eax + 8) = (void*)5;
        *(void**)((char*)eax + 0xC) = edi;
    } else {
        eax = 0;
    }

    ecx = *(void**)((char*)esi + 0x1C);
    if (ecx == 0) {
        *(void**)((char*)esi + 0x18) = eax;
        *(void**)((char*)esi + 0x1C) = eax;
    } else {
        *(void**)ecx = eax;
        *(void**)((char*)esi + 0x1C) = eax;
    }
}
