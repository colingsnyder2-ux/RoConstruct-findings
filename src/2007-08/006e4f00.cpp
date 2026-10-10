// from server: 82% by colin
struct CXTPDockingPaneSplitterContainer
{
    char pad[0x20];
    int field_20;
    void func_006e4f00(int, int);
};

extern int __fastcall func_0065e560(void*);
extern int __fastcall func_0071fa60(void*, void*);
extern void __fastcall func_006e4770(void*, void*);

void CXTPDockingPaneSplitterContainer::func_006e4f00(int a, int b)
{
    int v = func_0065e560(&field_20);
    if (v != 0)
    {
        int* p = &v;
        do
        {
            int item = func_0071fa60(&field_20, p);
            if (*(int*)(item + 0x18) == a)
            {
                int (*fn)(void*) = *(int (**)(void*))item;
                fn = *(int (**)(void*))((char*)fn + 0x14);
                if (fn((void*)item) == 0)
                {
                    func_006e4770((void*)b, (void*)item);
                }
            }
        } while (v != 0);
    }
}
