// roc 2009-06 004380c0  unit: Vector3ComponentItem  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004380c0
//
// 004380c0  8b8130010000         mov eax, dword ptr [ecx + 0x130]
// 004380c6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004380ca  8b542404             mov edx, dword ptr [esp + 4]
// 004380ce  03c0                 add eax, eax
// 004380d0  03c0                 add eax, eax
// 004380d2  d90408               fld dword ptr [eax + ecx]
// 004380d5  d81c10               fcomp dword ptr [eax + edx]
// 004380d8  dfe0                 fnstsw ax
// 004380da  f6c444               test ah, 0x44
// 004380dd  7a08                 jp 0x4380e7
// 004380df  b801000000           mov eax, 1
// 004380e4  c20800               ret 8
// 004380e7  33c0                 xor eax, eax
// 004380e9  c20800               ret 8
// copied from an identical function in another client (function ?f@Vector3ComponentItem@@QAEHHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vector3ComponentItem
{
    int value;
    int padding[75];
    int index;
    int f(int, int);
};
int Vector3ComponentItem::f(int a, int b)
{
    return *(float *)(a + index * 4) == *(float *)(b + index * 4);
}