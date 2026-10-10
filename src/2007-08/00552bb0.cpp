// from server: 32% by colin
struct S {
    void* vfptr0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    S* construct(void* arg);
};

extern "C" void __stdcall sub_552A70(void* p);

extern void* g_77E4CC;
extern void* g_77E4DC;
extern void* g_77E4E0;

S* S::construct(void* arg)
{
    if (arg != 0) {
        *(void**)((char*)this + 8) = (void*)0x7A7D04;
        *(void**)((char*)this + 0x14) = g_77E4E0;
        *(void**)((char*)this + 0x14) = g_77E4DC;
    }
    *(void**)((char*)this + 4) = 0;
    *(void**)this = (void*)0x7A78B0;
    sub_552A70((char*)this + 8);
    *(void**)this = (void*)0x7A7CE0;
    void* p = *(void**)((char*)this + 8);
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 8) = (void*)0x7A7CD8;
    sub_552A70((char*)this + 0xC);
    *(void**)((char*)this + 4) = (char*)this + 0xC;
    void* r = *(void**)((char*)this + 0xC);
    *(void**)((char*)r + 0xC) = this;
    return this;
}
