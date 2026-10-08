// from server: 93% by colin
// roc 2007-08 00535420  unit: std::logic_error  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535420
//
// 00535420  a18cbe8a00           mov eax, dword ptr [0x8abe8c]
// 00535425  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00535429  50                   push eax
// 0053542a  6a01                 push 1
// 0053542c  51                   push ecx
// 0053542d  e80e9e0800           call 0x5bf240
// 00535432  83c40c               add esp, 0xc
// 00535435  8bc8                 mov ecx, eax
// 00535437  e824301f00           call 0x728460
// 0053543c  33c0                 xor eax, eax
// 0053543e  c3                   ret 

extern "C" int __cdecl sub_005BF240(int, int, int);
extern "C" void __cdecl sub_00728460();

int __cdecl sub_00535420(int a1)
{
    int v1 = *(int*)0x8ABE8C;
    int v2 = sub_005BF240(a1, 1, v1);
    sub_00728460();
    return 0;
}
