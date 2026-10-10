// from server: 59% by colin
struct CXTPToolTipContextToolTip_PAUTOOLITEM_CArray
{
    int Add(void* pItem);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __stdcall sub_77DDAC();
extern "C" void __stdcall sub_77DD6C(void* p);
extern "C" void __stdcall sub_77EDE0(void* dst, const void* src);
extern "C" void __stdcall sub_77EE14(void* p);
extern "C" int __cdecl sub_6D2910(void* p, int n, void* item);

int CXTPToolTipContextToolTip_PAUTOOLITEM_CArray::Add(void* pItem)
{
    if (pItem == 0)
        return 0;

    char* pNew = (char*)operator_new(0x38);
    if (pNew != 0)
        sub_77DDAC();
    else
        pNew = 0;

    *(int*)(pNew + 0x20) = *(int*)((char*)pItem + 8);
    *(int*)(pNew + 8) = *(int*)((char*)pItem + 4);
    *(int*)(pNew + 0x24) = *(int*)((char*)pItem + 0xc);

    sub_77EDE0(pNew + 0xc, (char*)pItem + 0x10);

    int flag = (*(int*)((char*)pItem + 0x24) == -1) ? 1 : 0;
    *(int*)(pNew + 4) = flag;

    int arg;
    if (flag != 0)
        arg = 0x785954;
    else
        arg = *(int*)((char*)pItem + 0x24);

    sub_77DD6C((void*)arg);

    *(int*)(pNew + 0x1c) = *(int*)((char*)pItem + 0x20);

    sub_77EE14(pNew + 0x28);

    if (*(int*)pItem == 0x2c)
    {
        sub_77EDE0(pNew + 0x28, (char*)(*(int*)((char*)pItem + 0x28)) + 0xc);
    }

    sub_6D2910((char*)this + 0x54, *(int*)((char*)this + 0x5c), pNew);

    return 1;
}
