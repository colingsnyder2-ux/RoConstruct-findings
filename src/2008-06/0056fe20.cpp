// from server: 44% by colin
// roc-repair: fixed-width shims for MSVC2005/2008
typedef unsigned char uint8_t;
struct EnumDesc {
    char name[19];
    uint8_t dim;
    uint8_t argc;
    bool array;
    bool cube;
    bool shadow;
};

extern "C" __declspec(dllimport) void EnumDesc_func_0056fe20();

void func_0056fe20() {
    EnumDesc_func_0056fe20();
}
