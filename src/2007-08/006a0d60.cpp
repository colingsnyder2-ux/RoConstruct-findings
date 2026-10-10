// from server: 39% by colin
struct CXTPNewToolbarDlg
{
    char pad[0x78];
    void* field_78;
    void* field_7c;
    int method_6a0d60();
};

extern "C" void __stdcall func_0063041e();
extern "C" void __stdcall func_00631ad0();
extern "C" void __stdcall func_0062feea();
extern "C" void __stdcall func_00630016();
extern "C" void __stdcall func_006a0570();
extern "C" void* __stdcall func_006b3010();

extern "C" void* __stdcall imp_77d434();
extern "C" void* __stdcall imp_77ddbc();
extern "C" void* __stdcall imp_77ddac();
extern "C" void* __stdcall imp_77dd98();

int CXTPNewToolbarDlg::method_6a0d60()
{
    func_0063041e();
    if (field_7c != 0)
    {
        void* v = imp_77d434();
        imp_77ddbc();
        func_0062feea();
        imp_77ddac();
        void* obj = func_006b3010();
        void* vt = *(void**)obj;
        void* fn = *(void**)((char*)vt + 4);
        ((void (__stdcall*)(void*, int))fn)(obj, 0x23cf);
        void* v2 = imp_77dd98();
        func_00630016();
        imp_77ddbc();
    }
    else
    {
        func_006a0570();
    }
    return 1;
}
