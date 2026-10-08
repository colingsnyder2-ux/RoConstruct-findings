// from server: 23% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct RbxSubEntityShadowRenderable {
    DWORD* vtable;
    DWORD this_ptr;
    DWORD field_0x6c;

    DWORD* get_field_0x6c() {
        return (DWORD*)((DWORD)this_ptr + 0x6c);
    }

    DWORD get_value() {
        DWORD* ptr = get_field_0x6c();
        return *ptr;
    }

    void set_value(DWORD value) {
        DWORD* ptr = get_field_0x6c();
        *ptr = value;
    }

    int some_method();
};

extern "C" __declspec(dllimport) void some_function(DWORD, DWORD);

int RbxSubEntityShadowRenderable::some_method() {
    DWORD value = get_value();
    some_function(value, 0);
    return 0;
}
