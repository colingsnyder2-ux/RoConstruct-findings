// from server: 32% by colin
// roc 2007-08 00631464  unit: std::bad_alloc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631464
//
// 00631464  ff2514e87700         jmp dword ptr [0x77e814]
// 0063146a  cc                   int3 
// 0063146b  cc                   int3 
// 0063146c  68760a6300           push 0x630a76
// 00631471  64ff3500000000       push dword ptr fs:[0]
// 00631478  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063147c  896c2410             mov dword ptr [esp + 0x10], ebp
// 00631480  8d6c2410             lea ebp, [esp + 0x10]
// 00631484  2be0                 sub esp, eax
// 00631486  53                   push ebx
// 00631487  56                   push esi
// 00631488  57                   push edi
// 00631489  a188518b00           mov eax, dword ptr [0x8b5188]
// 0063148e  3145fc               xor dword ptr [ebp - 4], eax
// 00631491  33c5                 xor eax, ebp
// 00631493  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00631496  50                   push eax
// 00631497  8965e8               mov dword ptr [ebp - 0x18], esp
// 0063149a  ff75f8               push dword ptr [ebp - 8]
// 0063149d  8b45fc               mov eax, dword ptr [ebp - 4]
// 006314a0  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 006314a7  8945f8               mov dword ptr [ebp - 8], eax
// 006314aa  8d45f0               lea eax, [ebp - 0x10]
// 006314ad  64a300000000         mov dword ptr fs:[0], eax
// 006314b3  c3                   ret 
// 006314b4  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 006314b7  33cd                 xor ecx, ebp
// 006314b9  e860f5ffff           call 0x630a1e
// 006314be  e9a2010000           jmp 0x631665

extern "C" int __stdcall MSVCR80_CIfmod(int, int);
extern int G1;
extern int G2;
extern int G3;

struct S {
    void f();
};

void S::f()
{
    MSVCR80_CIfmod(G1, G2);
    G3 = 0;
}
