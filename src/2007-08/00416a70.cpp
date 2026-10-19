// from server: 75% by TrollStein
struct type_info;

extern "C" {
    int __stdcall MSVCR80_type_info_equals(const type_info* self, const type_info* other);
}

extern "C" int __cdecl sub_42C0C0(int a, int b, int c);

struct VCLuaFunction {
};

int __cdecl compare(int arg1, int arg2) {
    if (arg2 == 2) {
        int result = MSVCR80_type_info_equals((const type_info*)0x883178, (const type_info*)arg1);
        return result ? arg1 : 0;
    }
    return sub_42C0C0(arg1, arg2, 0);
}
