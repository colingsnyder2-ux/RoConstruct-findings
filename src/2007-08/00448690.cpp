// from server: 60% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall sub_77E69C();
    __declspec(dllimport) void __stdcall sub_77E6AC(void*);
}

struct CString {
    void* data;
    CString();
    CString(const CString&);
    ~CString();
};

struct CIDEDocManager {
    void* vtable;
    char pad[0x24];
    void* field28;
    void sub_448690(void* arg0, void* arg1, void* arg2, void* arg3, void* arg4, void* arg5, void* arg6, void* arg7);
};

void sub_447C20(void* dst, void* src);
void sub_412DC0(void* arg);

void CIDEDocManager::sub_448690(void* arg0, void* arg1, void* arg2, void* arg3, void* arg4, void* arg5, void* arg6, void* arg7)
{
    CString local1;
    void* tmp;

    sub_77E69C();
    sub_447C20(&local1, arg0);
    sub_412DC0(&local1);
    sub_77E6AC(&local1);
    this->vtable = (void*)0x7905D0;
    this->field28 = arg0;
    sub_77E6AC(&local1);
}
