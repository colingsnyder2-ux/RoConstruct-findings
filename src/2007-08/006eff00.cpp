// from server: 45% by colin
struct CXTPShadowsManager {
    void func_006efe30(int);
    int func_006efbc0();
    void func_006eff00();
};

extern "C" void* __stdcall GetModuleHandleA(const char*);
extern "C" void* __stdcall GetProcAddress(void*, const char*);

void CXTPShadowsManager::func_006eff00()
{
    func_006efe30(0xa);
    *(int*)((char*)this + 4) = 0x7db17c;
    *(int*)this = 0;
    void* h = GetModuleHandleA((const char*)0x7c6580);
    if (h != 0)
    {
        void* p = GetProcAddress(h, (const char*)0x7db190);
        *(int*)this = (int)p;
    }
    *(int*)((char*)this + 0x20) = func_006efbc0();
}
