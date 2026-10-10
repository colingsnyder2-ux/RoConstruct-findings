// from server: 44% by colin
extern "C" __declspec(dllimport) void __stdcall GetSystemTimeAsFileTime(void*);
extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall DeleteCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void*);

extern unsigned int dword_8B5188;

struct CScriptEditor {
    void sub_460360(int);
};

struct Inner {
    void* sub_45BF60(int);
    void* sub_45CA50(void*, int);
    void* sub_45CF20(void*, int);
};

extern Inner* sub_45D230();

void CScriptEditor::sub_460360(int arg) {
    Inner* p = sub_45D230();
    void* a = p->sub_45BF60(1);
    void* b = p->sub_45CA50(a, 1);
    void* c = p->sub_45CF20(b, 1);
    unsigned int v = ((unsigned int)c) & 0xfff;
    v -= 0x400;

    char buf[16];
    GetSystemTimeAsFileTime(buf);
    *(int*)(buf + 8) = 0;
    InitializeCriticalSection(buf + 4);
    DeleteCriticalSection(buf + 4);
    LeaveCriticalSection(buf + 4);
}
