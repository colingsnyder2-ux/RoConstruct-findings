// from server: 62% by atomic.potato
extern "C" void __cdecl func_006a0c68();
extern "C" void func_006a0a28(void*);

struct CWebToolbox
{
    void f();
    int padding_f4;
    int field_f8;
};

void CWebToolbox::f()
{
    func_006a0c68();
    if (field_f8)
        func_006a0a28((void*)field_f8);
}
