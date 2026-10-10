// from server: 88% by colin
struct CXTPDockingPaneTabbedContainer
{
    int sub_6713D0(int*);
    int sub_671EA0(int, int, int, int*);
    int sub_6E1F80(int);
    int sub_7383C4(int);
    int func_006e2730(int, int, int, int, int*);
};

int CXTPDockingPaneTabbedContainer::func_006e2730(int a1, int a2, int a3, int a4, int* pOut)
{
    int local;
    int result;

    *pOut = 0;
    result = sub_6713D0(&local);
    if (result == 1)
    {
        int p = *(int*)((char*)this + 0x6c);
        if (p != 0)
        {
            int v = *(int*)(p + 0xb4);
            sub_671EA0(v, 0, 0x7c4e7c, pOut);
            return 0;
        }
    }
    else if (result > 1)
    {
        int limit = *(int*)((char*)this - 0x30) + 1;
        if (result <= limit)
        {
            int r = sub_6E1F80(result - 2);
            if (r != 0)
            {
                int v = sub_7383C4(1);
                *pOut = v;
            }
        }
    }
    return 0;
}
