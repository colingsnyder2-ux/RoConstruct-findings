// from server: 28% by colin
extern "C" void* __stdcall malloc(unsigned int size);
extern "C" void __fastcall sub_573350(void* p);
extern "C" void __fastcall sub_41c260(void* self, void* a, void* b);

struct VDHTMLWindow_SignalDesc {
    void construct(void* a, void* b);
};

void VDHTMLWindow_SignalDesc::construct(void* a, void* b)
{
    void* mem = malloc(0x114);
    void* obj;
    if (mem != 0) {
        sub_573350(mem);
        obj = mem;
    } else {
        obj = 0;
    }
    sub_41c260(this, obj, a);
}
