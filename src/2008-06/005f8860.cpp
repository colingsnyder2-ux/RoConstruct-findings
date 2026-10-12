// from server: 27% by colin
struct S {
    void* vfptr0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* construct(void* arg);
};

extern "C" void* __stdcall sub_802594(void*, void*, void*);
extern "C" void sub_5f8650(void*);

void* S::construct(void* arg)
{
    if (arg != 0) {
        field8 = (void*)0x840bf4;
        field14 = *(void**)0x802580;
        field14 = *(void**)0x802584;
    }
    field4 = 0;
    vfptr0 = (void*)0x8408c8;
    sub_802594(0, 0, 0);
    vfptr0 = (void*)0x840bec;
    *(void**)((char*)field8 + 4) = (void*)0x840be4;
    sub_5f8650(&fieldC);
    field4 = &fieldC;
    *(void**)((char*)fieldC + 0x1c) = this;

    return this;
}
