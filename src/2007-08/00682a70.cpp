// from server: 100% by colin
// roc 2007-08 00682a70  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682a70
//
// 00682a70  8b442404             mov eax, dword ptr [esp + 4]
// 00682a74  56                   push esi
// 00682a75  50                   push eax
// 00682a76  8bf1                 mov esi, ecx
// 00682a78  e875d2faff           call 0x62fcf2
// 00682a7d  85c0                 test eax, eax
// 00682a7f  7504                 jne 0x682a85
// 00682a81  5e                   pop esi
// 00682a82  c20400               ret 4
// 00682a85  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 00682a8f  b801000000           mov eax, 1
// 00682a94  5e                   pop esi
// 00682a95  c20400               ret 4

struct CXTPPropertyGrid {
    char pad[0x154];
    int field_154;
    int sub_00682a70(int);
};

extern "C" int __stdcall func_0062fcf2(int);

int CXTPPropertyGrid::sub_00682a70(int arg)
{
    if (func_0062fcf2(arg) == 0)
        return 0;
    field_154 = 0;
    return 1;
}
