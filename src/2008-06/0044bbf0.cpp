// from server: 47% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct CRobloxModule {
    DWORD field_24;
    DWORD field_58;

    DWORD get_field_24() {
        return field_24;
    }

    DWORD get_field_58() {
        return field_58;
    }

    void some_method();
};

extern "C" __declspec(dllimport) void some_function();

void CRobloxModule::some_method() {
    DWORD value1 = get_field_24();
    DWORD value2 = get_field_58();
    some_function();
}
