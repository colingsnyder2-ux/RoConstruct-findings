// from server: 65% by colin
extern "C" void* __stdcall sub_0077E698();

struct RBX_Instance
{
    void method_00560600();
};

struct RBX_FilteredSelection : RBX_Instance
{
    void method_00560AE0(const char* name);
};

void RBX_FilteredSelection::method_00560AE0(const char* name)
{
    char buffer[28];
    void* p = buffer;
    sub_0077E698();
    method_00560600();
    *(void**)this = (void*)0x7a9544;
}
