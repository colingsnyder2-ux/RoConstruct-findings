// from server: 43% by colin
extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall DeleteCriticalSection(void*);
extern "C" __declspec(dllimport) void* __stdcall GetCurrentThread(void);
extern "C" __declspec(dllimport) void __stdcall SetEvent(void*);

extern unsigned int dword_8B5188;

struct CScriptEditor {
    void sub_45D230(int);
    void sub_45CD50();
    void sub_460230(int);
};

void CScriptEditor::sub_460230(int arg) {
    char buf[8];
    InitializeCriticalSection(buf);
    sub_45D230(1);
    sub_45CD50();
    if (GetCurrentThread()) {
        SetEvent(buf);
    }
    DeleteCriticalSection(buf);
}
