// roc 2009-06 00800420  unit: CXTColorPageStandard  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00800420
//
// 00800420  6aff                 push -1
// 00800422  6886138800           push 0x881386
// 00800427  64a100000000         mov eax, dword ptr fs:[0]
// 0080042d  50                   push eax
// 0080042e  51                   push ecx
// 0080042f  56                   push esi
// 00800430  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00800435  33c4                 xor eax, esp
// 00800437  50                   push eax
// 00800438  8d44240c             lea eax, [esp + 0xc]
// 0080043c  64a300000000         mov dword ptr fs:[0], eax
// 00800442  8bf1                 mov esi, ecx
// 00800444  89742408             mov dword ptr [esp + 8], esi
// 00800448  6a30                 push 0x30
// 0080044a  6a00                 push 0
// 0080044c  6862240000           push 0x2462
// 00800451  e82abf0400           call 0x84c380
// 00800456  8d8e88000000         lea ecx, [esi + 0x88]
// 0080045c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00800464  c70624ac9000         mov dword ptr [esi], 0x90ac24
// 0080046a  e8e1f9ffff           call 0x7ffe50
// 0080046f  8bce                 mov ecx, esi
// 00800471  c644241401           mov byte ptr [esp + 0x14], 1
// 00800476  e815be0400           call 0x84c290
// 0080047b  83c004               add eax, 4
// 0080047e  8320df               and dword ptr [eax], 0xffffffdf
// 00800481  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00800485  898618010000         mov dword ptr [esi + 0x118], eax
// 0080048b  8bc6                 mov eax, esi
// 0080048d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00800491  64890d00000000       mov dword ptr fs:[0], ecx
// 00800498  59                   pop ecx
// 00800499  5e                   pop esi
// 0080049a  83c410               add esp, 0x10
// 0080049d  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageStandard@@QAE@PAVCXTColorDialog@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp