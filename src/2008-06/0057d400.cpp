// from server: 83% by tester
struct SignalDesc {
    void* vftable;
    char pad[8];
    void* field_c;
    void* construct(void*);
};

extern "C" void* __stdcall sub_802458(const char*);
extern "C" void __stdcall sub_5833e0(void*, void*);

void* SignalDesc::construct(void* a)
{
    char* p = (char*)a;
    char* q;
    if (p != 0)
        q = p + 0x1c8;
    else
        q = 0;
    char buf[0x1c];
    sub_802458("JoinCommand");
    sub_5833e0(this, q);
    field_c = a;
    vftable = (void*)0x830694;

    return this;
}
