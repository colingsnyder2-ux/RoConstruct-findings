// from server: 60% by colin
// roc 2007-08 00417530  unit: boost::X::U?$last_value::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417530
//
// 00417530  8b442408             mov eax, dword ptr [esp + 8]
// 00417534  83f802               cmp eax, 2
// 00417537  7519                 jne 0x417552
// 00417539  56                   push esi
// 0041753a  8b742408             mov esi, dword ptr [esp + 8]
// 0041753e  56                   push esi
// 0041753f  b9e0378800           mov ecx, 0x8837e0
// 00417544  ff1508e77700         call dword ptr [0x77e708]
// 0041754a  f6d8                 neg al
// 0041754c  1bc0                 sbb eax, eax
// 0041754e  23c6                 and eax, esi
// 00417550  5e                   pop esi
// 00417551  c3                   ret 
// 00417552  8b542404             mov edx, dword ptr [esp + 4]
// 00417556  c644240800           mov byte ptr [esp + 8], 0
// 0041755b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041755f  51                   push ecx
// 00417560  50                   push eax
// 00417561  52                   push edx
// 00417562  e8b9f6ffff           call 0x416c20
// 00417567  83c40c               add esp, 0xc
// 0041756a  c3                   ret 

extern "C" int __cdecl func_00416c20(int, int, int);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_8837e0;
extern bool (__stdcall *func_ptr_77e708)(const type_info&, const type_info&);

int __cdecl func_00417530(int a, int b, int c)
{
    if (b == 2) {
        int v = a;
        if (func_ptr_77e708(type_info_8837e0, *(const type_info*)&v))
            return v;
        return 0;
    }
    return func_00416c20(a, b, c);
}
