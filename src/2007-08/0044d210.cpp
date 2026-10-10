// from server: 47% by colin
struct DeleteSelectionVerb {
    char pad[0x74];
    void* vtable_74;
    void* vtable_0;
    DeleteSelectionVerb* ctor(void* dataModel, int);
};

extern "C" {
    void* __stdcall sub_40A730(void*);
    void* __stdcall sub_40AA00(void*, void*, void*);
    void __stdcall sub_45BC90(void*, void*, void*);
    void __stdcall sub_77DD98(void*);
    void __stdcall sub_77DDBC(void*);
}

DeleteSelectionVerb* DeleteSelectionVerb::ctor(void* dataModel, int)
{
    void* local8 = 0;
    void* localC = 0;
    void* local10 = 0;
    void* p;

    p = sub_40A730(&localC);
    p = sub_40AA00(&local10, (void*)0x791158, p);
    sub_77DD98(p);
    sub_45BC90(this, local10, p);
    sub_77DDBC(&local8);
    sub_77DDBC(&localC);
    this->vtable_0 = (void*)0x790FA4;
    this->vtable_74 = (void*)0x790F78;
    return this;
}
