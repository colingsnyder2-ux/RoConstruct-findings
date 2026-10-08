// from server: 69% by colin
// roc 2007-08 00416a70  unit: VCLuaFunction::?$CComObject  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416a70
//
// 00416a70  8b442408             mov eax, dword ptr [esp + 8]
// 00416a74  83f802               cmp eax, 2
// 00416a77  7519                 jne 0x416a92
// 00416a79  56                   push esi
// 00416a7a  8b742408             mov esi, dword ptr [esp + 8]
// 00416a7e  56                   push esi
// 00416a7f  b978318800           mov ecx, 0x883178
// 00416a84  ff1508e77700         call dword ptr [0x77e708]
// 00416a8a  f6d8                 neg al
// 00416a8c  1bc0                 sbb eax, eax
// 00416a8e  23c6                 and eax, esi
// 00416a90  5e                   pop esi
// 00416a91  c3                   ret 
// 00416a92  8b542404             mov edx, dword ptr [esp + 4]
// 00416a96  c644240800           mov byte ptr [esp + 8], 0
// 00416a9b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00416a9f  51                   push ecx
// 00416aa0  50                   push eax
// 00416aa1  52                   push edx
// 00416aa2  e819560100           call 0x42c0c0
// 00416aa7  83c40c               add esp, 0xc
// 00416aaa  c3                   ret 

struct type_info;

extern "C" {
    int __stdcall MSVCR80_type_info_equals(const type_info* self, const type_info* other);
}

extern "C" int __cdecl sub_42C0C0(int a, int b, int c);

struct VCLuaFunction {
    int compare(int arg1, int arg2);
};

int VCLuaFunction::compare(int arg1, int arg2) {
    if (arg2 == 2) {
        int result = MSVCR80_type_info_equals((const type_info*)0x883178, (const type_info*)arg1);
        return result ? arg1 : 0;
    }
    return sub_42C0C0(arg1, arg2, 0);
}
