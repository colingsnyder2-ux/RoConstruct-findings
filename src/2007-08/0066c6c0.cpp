// from server: 75% by colin
struct CXTPToolBar_PAVCToolBarInfo_CArray
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    void RemoveAll();
};

extern "C" void __cdecl func_0062fc62(void*);
extern "C" void __stdcall func_006ffab0(int, int);
extern "C" void __cdecl func_0062ff20();

void CXTPToolBar_PAVCToolBarInfo_CArray::RemoveAll()
{
    int i = 0;
    while (i < field_c)
    {
        if (i < 0 || i >= field_c)
        {
            func_0062ff20();
            return;
        }
        void* p = *(void**)(field_8 + i * 4);
        if (p != 0)
        {
            func_0062fc62(p);
        }
        i++;
    }
    func_006ffab0(0, -1);
}
