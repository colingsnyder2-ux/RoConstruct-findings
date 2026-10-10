// from server: 59% by colin
struct CObjectBrowser {
    void method(int);
};

struct CString {
    char* c_str() const;
};

struct CException {
    void* vtable;
    int code;
    CString message;
};

extern "C" __declspec(dllimport) void* __stdcall sub_77ddac();
extern "C" __declspec(dllimport) void* __stdcall sub_77e6a8();
extern "C" __declspec(dllimport) void* __stdcall sub_77dd94(void*, const char*, void*);
extern "C" __declspec(dllimport) void* __stdcall sub_77dd98(void*);
extern "C" __declspec(dllimport) void* __stdcall sub_77ddbc(void*);

void __stdcall sub_630634(int, int, int, int, int, int, int, int, int);
void __stdcall sub_63063a(int, int, int, int, int, int, int, int, int);

void CObjectBrowser::method(int arg)
{
    CException ex;
    ex.vtable = 0;
    ex.code = 0;
    sub_77ddac();
    sub_77e6a8();
    sub_77dd94(&ex, (const char*)0x78a05c, 0);
    sub_77dd98(&ex);
    sub_630634(0x23, 9, 9, 0, 0, 0, 0xffff0000, 0xffff0002, 0);
    sub_63063a(4, 0, 0, 0, 0, 0, 0, arg, 0);
    sub_77ddbc(&ex);
}
