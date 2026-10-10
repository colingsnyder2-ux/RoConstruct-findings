// from server: 95% by colin
struct Workspace {
    char pad[0x374];
    void* field_374;
    void* field_378;
    void sub_57C7D0();
    Workspace* sub_57D170(int flag);
};

extern "C" void __cdecl free(void*);

Workspace* Workspace::sub_57D170(int flag)
{
    sub_57C7D0();
    void* p = field_378;
    field_374 = (void*)0x7a4cac;
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 0x378) = (void*)0x7a4ca4;
    if (flag & 1) {
        free(this);
    }
    return this;
}
