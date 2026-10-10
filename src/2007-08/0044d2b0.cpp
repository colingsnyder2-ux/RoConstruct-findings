// from server: 42% by colin
struct DeleteSelectionVerb {
    char pad[0x74];
    void* vtable_74;
    void* vtable_0;
    DeleteSelectionVerb(void* dataModel, void* arg2);
};

extern "C" void* __stdcall sub_40A730(void*);
extern "C" void* __stdcall sub_40AA00(void*, const char*, void*);
extern "C" void __stdcall sub_45BC90(void*, void*, void*);
extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void __stdcall sub_77DDBC(void*);

DeleteSelectionVerb::DeleteSelectionVerb(void* dataModel, void* arg2)
{
    void* local8 = 0;
    void* localC = 0;
    void* local10 = 0;

    sub_40A730(&local8);
    void* p = sub_40AA00(&local10, (const char*)0x791350, &local8);
    void* q = sub_77DD98(p);
    sub_45BC90(this, q, local10);
    sub_77DDBC(&local8);
    sub_77DDBC(&localC);
    this->vtable_0 = (void*)0x79119C;
    this->vtable_74 = (void*)0x791170;
}
