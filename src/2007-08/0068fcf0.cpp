// from server: 56% by colin
// roc 2007-08 0068fcf0  unit: CXTPDockingPane  size: 220 bytes

struct CComVariant {
    unsigned short vt;
    unsigned short wReserved1;
    unsigned short wReserved2;
    unsigned short wReserved3;
    union {
        long lVal;
        void* p;
    };
    CComVariant();
    ~CComVariant();
};

struct CXTPDockingPane {
    int GetAccessibleName(void** ppv);
};

void __stdcall sub_62ff3e(CComVariant* p, int n);
void __stdcall sub_62ff38(void* p, int n);
int __stdcall sub_7383c4(void* p, int n);

int CXTPDockingPane::GetAccessibleName(void** ppv)
{
    CComVariant var;
    sub_62ff3e(&var, *(int*)((char*)this - 0x3c));
    *ppv = 0;
    int* p = *(int**)((char*)this - 0x28);
    if (p != 0) {
        *ppv = (void*)sub_7383c4((char*)p - 0x54, 1);
        return 0;
    }
    return 0x80004005;
}
