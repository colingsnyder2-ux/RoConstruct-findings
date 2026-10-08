// from server: 66% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct VCContent {
    struct CComObject {
        void IncrementRef() {
            DWORD* refCount = reinterpret_cast<DWORD*>(reinterpret_cast<DWORD>(this) + 8);
            (*refCount)++;
            return;
        }
    };
};

extern "C" __declspec(dllimport) void G1_func_005cf5c0();

void func_00417e70(VCContent::CComObject* obj) {
    obj->IncrementRef();
}
