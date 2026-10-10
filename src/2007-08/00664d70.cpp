// from server: 41% by colin
struct CTreeCtrl
{
    char pad0[0x60];
    char pad1[0x3c];
    unsigned char flag9c;
};

extern "C" void __stdcall sub_0073861c(int, const char*);
extern "C" void __stdcall sub_00666db0();

CTreeCtrl* __fastcall CTreeCtrl_ctor(CTreeCtrl* self, void*)
{
    sub_0073861c(0x50800000, "SysTreeView32");
    *(void**)self = (void*)0x7c9c7c;
    sub_00666db0();
    *(void**)self = (void*)0x7c9e9c;
    *(void**)((char*)self + 0x60) = (void*)0x7c9e1c;
    self->flag9c = 1;
    return self;
}
