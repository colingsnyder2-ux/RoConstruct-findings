// from server: 94% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp

extern "C" void __cdecl notify();

struct DebugSettings {
    char pad[0x44];
    int errorReporting;

    void setErrorReporting(int value) {
        if (errorReporting != value) {
            errorReporting = value;
            notify();
        }
    }
};