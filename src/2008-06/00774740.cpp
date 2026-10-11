// from server: 58% by colin
struct CXTPPropertyGridInplaceEdit
{
    int field0;
    void** field4;
    int field8;
    void RemoveAll();
};

extern "C" void __cdecl func_006a0944();
extern "C" void __cdecl func_006a0be4(void*);
extern "C" void __cdecl func_0070e1d0(int, int);

void CXTPPropertyGridInplaceEdit::RemoveAll()
{
    int i = 0;
    if (field8 > 0)
    {
        do
        {
            if (i < 0 || i >= field8)
            {
                func_006a0944();
            }
            func_006a0be4(field4[i]);
            i++;
        } while (i < field8);
    }
    func_0070e1d0(-1, 0);
}
