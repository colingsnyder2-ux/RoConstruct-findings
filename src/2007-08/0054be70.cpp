// from server: 55% by colin
// roc 2007-08 0054be70  unit: seg_00540000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054be70
//
// 0054be70  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054be74  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054be78  50                   push eax
// 0054be79  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054be7d  52                   push edx
// 0054be7e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054be82  50                   push eax
// 0054be83  8b442424             mov eax, dword ptr [esp + 0x24]
// 0054be87  52                   push edx
// 0054be88  50                   push eax
// 0054be89  51                   push ecx
// 0054be8a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054be8e  51                   push ecx
// 0054be8f  e8fcfeffff           call 0x54bd90

extern "C" int __cdecl sub_0054bd90(int, int, int, int, int, int, int, int);

struct S {
    int f(int, int, int, int, int, int, int, int);
};

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return sub_0054bd90(a1, a2, a3, a4, a5, a6, a7, a8);
}
