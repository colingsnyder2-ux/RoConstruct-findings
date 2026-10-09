// from server: 82% by colin
// roc 2007-08 00461570  unit: RBX::VRunService::?$MarshaledListener  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461570

struct MarshaledListener {
    char pad0[4];
    char pad4[0x14];
    void* field18;
    void addListener(void* a, void* b);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void* __stdcall sub_460F10(void* self, void* a, void* b);
extern "C" void __stdcall sub_464EC0(void* self, void* p);
extern "C" void __stdcall sub_433140(void* self, void* p);

void MarshaledListener::addListener(void* a, void* b)
{
    void* mem = operator_new(0x14);
    void* obj;
    if (mem != 0) {
        obj = sub_460F10(mem, a, b);
    } else {
        obj = 0;
    }
    void* tmp = obj;
    sub_464EC0((char*)this + 4, &tmp);
    sub_433140(field18, obj);
}
