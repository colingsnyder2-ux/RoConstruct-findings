// from server: 95% by tester
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
extern "C" void __stdcall someFunction(DWORD param);

struct CRobloxApp {
    void someMethod() {
        someFunction(0x8007000e);
    }
};

int main() {
    CRobloxApp app;
    app.someMethod();
    return 0;
}
