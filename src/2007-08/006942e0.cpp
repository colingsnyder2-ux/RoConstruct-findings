// roc 2007-08 006942e0  unit: CXTPStatusBar  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006942e0
//
// 006942e0  83ec18               sub esp, 0x18
// 006942e3  56                   push esi
// 006942e4  8d44240c             lea eax, [esp + 0xc]
// 006942e8  57                   push edi
// 006942e9  50                   push eax
// 006942ea  e8c1defdff           call 0x6721b0
// 006942ef  8bc8                 mov ecx, eax
// 006942f1  e88adafdff           call 0x671d80
// 006942f6  8b742424             mov esi, dword ptr [esp + 0x24]
// 006942fa  8b442418             mov eax, dword ptr [esp + 0x18]
// 006942fe  8b4e08               mov ecx, dword ptr [esi + 8]
// 00694301  8b3dd8ed7700         mov edi, dword ptr [0x77edd8]
// 00694307  8d50fc               lea edx, [eax - 4]
// 0069430a  3bd1                 cmp edx, ecx
// 0069430c  7d0b                 jge 0x694319
// 0069430e  2bc1                 sub eax, ecx
// 00694310  6a00                 push 0
// 00694312  83e804               sub eax, 4
// 00694315  50                   push eax
// 00694316  56                   push esi
// 00694317  ffd7                 call edi
// 00694319  8b0e                 mov ecx, dword ptr [esi]
// 0069431b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069431f  3bc1                 cmp eax, ecx
// 00694321  7e08                 jle 0x69432b
// 00694323  6a00                 push 0
// 00694325  2bc1                 sub eax, ecx
// 00694327  50                   push eax
// 00694328  56                   push esi
// 00694329  ffd7                 call edi
// 0069432b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0069432f  83c0fc               add eax, -4
// 00694332  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00694335  7d1b                 jge 0x694352
// 00694337  8d4c2408             lea ecx, [esp + 8]
// 0069433b  51                   push ecx
// 0069433c  ff1554ec7700         call dword ptr [0x77ec54]
// 00694342  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00694346  2b560c               sub edx, dword ptr [esi + 0xc]
// 00694349  83ea03               sub edx, 3
// 0069434c  52                   push edx
// 0069434d  6a00                 push 0
// 0069434f  56                   push esi
// 00694350  ffd7                 call edi
// 00694352  5f                   pop edi
// 00694353  5e                   pop esi
// 00694354  83c418               add esp, 0x18
// 00694357  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?EnsureVisible@CXTPToolTipContextToolTip@@IAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
