// from server: 65% by colin
struct InsertDecal {
    void* vtable;
    InsertDecal(const char* name);
};

extern "C" void __stdcall sub_55F270();
extern "C" void* __stdcall sub_77E698();

InsertDecal::InsertDecal(const char* name)
{
    char buf[0x1c];
    void* p = buf;
    (void)p;
    sub_77E698();
    sub_55F270();
    vtable = (void*)0x787ae4;
}
