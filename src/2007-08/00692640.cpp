// from server: 52% by colin
struct CXTPStatusBarPane
{
    char pad_00[0x24];
    int field_24;
    char pad_28[0x08];
    int field_30;
    char pad_34[0x1c];
    int field_50;
    char pad_54[0x14];
    int field_68;
    char pad_6c[0x04];
    int field_70;
    int method_58();
    int method_5c();
    void method_692640();
};

struct CString
{
    char pad_00[0x10];
    CString();
    CString(const CString&);
    ~CString();
    CString* operator=(const CString&);
};

struct CSize
{
    int cx;
    int cy;
};

extern "C" int __stdcall GetTextExtentPoint32A(void*, const char*, int, CSize*);
extern "C" void* __stdcall GetDC(void*);
extern "C" int __stdcall ReleaseDC(void*, void*);
extern "C" int __stdcall GetTextExtentPoint32A(void*, const char*, int, CSize*);

extern void* __stdcall sub_77DCC8(void*);
extern void* __stdcall sub_77DCD0(void*);
extern void* __stdcall sub_77DD98(void*);
extern int __stdcall sub_77D0B8(void*, void*, int);

extern void sub_630946(CString*, int);
extern void sub_630940(CString*);
extern void sub_680550(CString*, CString*, int);
extern void sub_6805D0(CString*);
extern int sub_653870(void*);

void CXTPStatusBarPane::method_692640()
{
    CString str1;
    CString str2;
    CSize size;
    void* dc;
    int len;
    int extra;

    sub_630946(&str1, field_50);

    int n = method_58();
    sub_680550(&str2, &str1, n);

    dc = sub_77DCC8((char*)this + 0x30);
    void* hdc = sub_77DD98((char*)this + 0x30);
    sub_77D0B8(hdc, dc, 0);

    field_24 = field_70 + field_68 + size.cx;

    int p = method_5c();
    if (p != 0)
    {
        void* dc2 = sub_77DCD0((char*)this + 0x30);
        int flag = (dc2 == 0) ? 2 : 0;
        extra = sub_653870((void*)p) + flag;
        field_24 += extra;
    }

    sub_6805D0(&str2);
    sub_630940(&str1);
}
