// from server: 27% by colin
struct CXTPShadowsManager {
    void func_006eff00();
};

extern "C" void __stdcall func_00630d23(void*);

void CXTPShadowsManager::func_006eff00()
{
    if ((*(unsigned char*)0x8c9644 & 1) == 0)
    {
        *(unsigned int*)0x8c9644 |= 1;
        CXTPShadowsManager* p = (CXTPShadowsManager*)0x8c9620;
        p->func_006eff00();
        func_00630d23((void*)0x77cd00);
    }
}
