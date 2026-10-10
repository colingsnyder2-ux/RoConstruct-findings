// from server: 64% by colin
struct CXTPPropertyGrid
{
    void func_006849d0(int, int);
    int func_00699000(int);
    int func_00684730(int, int*);
    void func_00698420();
    void func_006983c0();
};

void CXTPPropertyGrid::func_006849d0(int a, int b)
{
    int i = 0;
    if (*(int*)((char*)a + 0x28) > 0)
    {
        do
        {
            int obj = func_00699000(i);
            int val = *(int*)((char*)obj + 0x88);
            if (val != 0)
            {
                int local;
                if (func_00684730(val, &local) != 0)
                {
                    if (local != 0)
                    {
                        ((CXTPPropertyGrid*)obj)->func_00698420();
                    }
                    else
                    {
                        ((CXTPPropertyGrid*)obj)->func_006983c0();
                    }
                }
            }
            int next = *(int*)((char*)obj + 0xb8);
            func_006849d0(next, b);
            i++;
        } while (i < *(int*)((char*)a + 0x28));
    }
}
