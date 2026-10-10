// from server: 43% by colin
struct CXTPStatusBar
{
    void sub_6939C0();
    void sub_6933D0(int, int);
    void sub_693A20(int*, int);
};

struct CXTPStatusBarPane
{
    void sub_6924B0();
    void sub_692640();
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" int __stdcall sub_6D2910(void*, void*);
extern "C" int __stdcall sub_77D59C(void*);
extern "C" int __stdcall sub_77EDB8(int);

void CXTPStatusBar::sub_693A20(int* pArray, int nCount)
{
    sub_6939C0();

    int nResult = 1;
    if (pArray != 0 && nCount > 0)
    {
        int i = 0;
        do
        {
            CXTPStatusBarPane* pPane = (CXTPStatusBarPane*)sub_62FEF6(0x78);
            if (pPane != 0)
            {
                pPane->sub_6924B0();
            }

            sub_6D2910(*(void**)((char*)this + 0x9C), pPane);
            *(CXTPStatusBar**)((char*)pPane + 0x50) = this;
            *(int*)((char*)pPane + 0x2C) |= 1;

            int nValue = *pArray;
            pArray++;
            *(int*)((char*)pPane + 0x20) = nValue;

            if (nValue != 0)
            {
                if (sub_77D59C((void*)nValue) != 0)
                {
                    pPane->sub_692640();
                }
            }
            else
            {
                int nMetric = sub_77EDB8(0);
                *(int*)((char*)pPane + 0x24) = nMetric / 4;
                if (i == 0)
                {
                    *(int*)((char*)pPane + 0x28) |= 0x8000100;
                }
            }

            i++;
        }
        while (i < nCount);
    }

    sub_6933D0(1, 1);
}
