// from server: 58% by atomic.potato
struct CXTMemDC {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    CXTMemDC(int);
    ~CXTMemDC();
};

struct CString {
    void* data;
    CString();
    CString(const CString&);
    ~CString();
    void Set(const char*);
};

struct CXTPControls {
    int field0;
    int field4;
    int field8;
    int IsChanged();
    int func_7386ca(CXTPControls*);
    int func_66dbe0(int, int, int);
};

extern "C" int __stdcall IsWindow(void*);
extern "C" void* __stdcall func_77ddac();
extern "C" void __stdcall func_77dd6c(void*, const char*);
extern "C" void __stdcall func_77dd98(void*, int);
extern "C" void __stdcall func_77ddbc(void*);
extern "C" void __stdcall func_6d78c0(void*, void*, void*);

extern char str_78b110;
extern char str_7cb14c;

int CXTPControls::func_66dbe0(int a, int b, int c)
{
    if (!IsWindow(*(void**)(b + 0x20)))
        return 0;
    if (!func_7386ca((CXTPControls*)b))
        return 0;

    CString s1;
    s1.Set(&str_78b110);
    CString s2;
    s2.Set(&str_7cb14c);

    if (field8 != 3)
        field8 = 1;

    CXTMemDC dc(0x80000001);
    func_77dd98(&dc, 0x2c);
    func_77dd98(&dc, (int)this);
    func_6d78c0(&dc, &s2, &s1);
    dc.~CXTMemDC();

    func_77ddbc(&s2);
    func_77ddbc(&s1);
    return 1;
}
