// from server: 50% by atomic.potato
extern "C" void* __stdcall func_005cd6b0();
extern "C" void* __stdcall func_005cd980();
extern "C" void __stdcall func_00705270();

extern char g_00a4a7f8;

struct UPoolData_sp_counted_impl_p {
    void* vfptr0;
    void* field4;
    void* vfptr8;
    void* fieldc;
    char field10;
    char field11;
    void* ctor(void* arg1, void* arg2);
};

void* UPoolData_sp_counted_impl_p::ctor(void* arg1, void* arg2)
{
    this->vfptr0 = (void*)0x8ad230;
    this->field4 = func_005cd6b0();
    if (g_00a4a7f8 != 0) {
        func_00705270();
    }
    this->vfptr0 = (void*)0x8c4454;
    this->vfptr8 = (void*)0x9ee508;
    this->fieldc = func_005cd980();
    this->field10 = 0;
    this->field11 = 0;
    return this;
}
