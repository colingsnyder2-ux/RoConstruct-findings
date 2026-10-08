// from server: 68% by colin
// roc 2007-08 004915f0  unit: seg_00490000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004915f0
//
// 004915f0  56                   push esi
// 004915f1  8b742408             mov esi, dword ptr [esp + 8]
// 004915f5  56                   push esi
// 004915f6  e83552ffff           call 0x486830
// 004915fb  83c404               add esp, 4
// 004915fe  85c0                 test eax, eax
// 00491600  7419                 je 0x49161b
// 00491602  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00491606  50                   push eax
// 00491607  56                   push esi
// 00491608  e823990000           call 0x49af30
// 0049160d  83c408               add esp, 8
// 00491610  84c0                 test al, al
// 00491612  7507                 jne 0x49161b
// 00491614  b801000000           mov eax, 1
// 00491619  5e                   pop esi
// 0049161a  c3                   ret 
// 0049161b  33c0                 xor eax, eax
// 0049161d  5e                   pop esi
// 0049161e  c3                   ret 

extern "C" int __cdecl sub_486830(int);
extern "C" char __cdecl sub_49AF30(int, int);

bool __cdecl sub_4915F0(int a, int b)
{
    if (!sub_486830(a))
        return false;
    if (sub_49AF30(a, b))
        return false;
    return true;
}
