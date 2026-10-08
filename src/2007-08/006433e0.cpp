// from server: 100% by auto
// roc 2007-08 006433e0  unit: CXTPPaintManagerFont  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006433e0
//
// 006433e0  55                   push ebp
// 006433e1  8bec                 mov ebp, esp
// 006433e3  83e4c0               and esp, 0xffffffc0
// 006433e6  83ec34               sub esp, 0x34
// 006433e9  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006433ec  8b5518               mov edx, dword ptr [ebp + 0x18]
// 006433ef  53                   push ebx
// 006433f0  56                   push esi
// 006433f1  8b7510               mov esi, dword ptr [ebp + 0x10]
// 006433f4  57                   push edi
// 006433f5  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 006433f8  8d4c38ff             lea ecx, [eax + edi - 1]
// 006433fc  894c2418             mov dword ptr [esp + 0x18], ecx
// 00643400  db442418             fild dword ptr [esp + 0x18]
// 00643404  8d4c32ff             lea ecx, [edx + esi - 1]
// 00643408  dd05485b7900         fld qword ptr [0x795b48]
// 0064340e  894c2418             mov dword ptr [esp + 0x18], ecx
// 00643412  8bd0                 mov edx, eax
// 00643414  dcc9                 fmul st(1), st(0)
// 00643416  2bd7                 sub edx, edi
// 00643418  d9c9                 fxch st(1)
// 0064341a  83ea01               sub edx, 1
// 0064341d  3bf8                 cmp edi, eax
// 0064341f  dd5c2428             fstp qword ptr [esp + 0x28]
// 00643423  db442418             fild dword ptr [esp + 0x18]
// 00643427  89542418             mov dword ptr [esp + 0x18], edx
// 0064342b  d8c9                 fmul st(1)
// 0064342d  dd5c2430             fstp qword ptr [esp + 0x30]
// 00643431  db442418             fild dword ptr [esp + 0x18]
// 00643435  897c2418             mov dword ptr [esp + 0x18], edi
// 00643439  dec9                 fmulp st(1)
// 0064343b  dc2548f37900         fsub qword ptr [0x79f348]
// 00643441  dd5c2420             fstp qword ptr [esp + 0x20]
// 00643445  0f8df5000000         jge 0x643540
// 0064344b  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0064344e  d9e8                 fld1 
// 00643450  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 00643453  89742414             mov dword ptr [esp + 0x14], esi
// 00643457  0f8dd2000000         jge 0x64352f
// 0064345d  db442418             fild dword ptr [esp + 0x18]
// 00643461  dc6c2428             fsubr qword ptr [esp + 0x28]
// 00643465  dd5c2418             fstp qword ptr [esp + 0x18]
// 00643469  dd442420             fld qword ptr [esp + 0x20]
// 0064346d  d8e1                 fsub st(1)
// 0064346f  dd5c2438             fstp qword ptr [esp + 0x38]
// 00643473  dd442418             fld qword ptr [esp + 0x18]
// 00643477  b802000000           mov eax, 2
// 0064347c  d9c1                 fld st(1)
// 0064347e  a801                 test al, 1
// 00643480  7402                 je 0x643484
// 00643482  d8c9                 fmul st(1)
// 00643484  d1e8                 shr eax, 1
// 00643486  7406                 je 0x64348e
// 00643488  d9c1                 fld st(1)
// 0064348a  deca                 fmulp st(2)
// 0064348c  ebf0                 jmp 0x64347e
// 0064348e  ddd9                 fstp st(1)
// 00643490  b802000000           mov eax, 2
// 00643495  db442414             fild dword ptr [esp + 0x14]
// 00643499  dc6c2430             fsubr qword ptr [esp + 0x30]
// 0064349d  a801                 test al, 1
// 0064349f  7402                 je 0x6434a3
// 006434a1  dcca                 fmul st(2), st(0)
// 006434a3  d1e8                 shr eax, 1
// 006434a5  7404                 je 0x6434ab
// 006434a7  dcc8                 fmul st(0), st(0)
// 006434a9  ebf2                 jmp 0x64349d
// 006434ab  ddd8                 fstp st(0)
// 006434ad  dec1                 faddp st(1)
// 006434af  e858d9feff           call 0x630e0c
// 006434b4  dd442438             fld qword ptr [esp + 0x38]
// 006434b8  d8d1                 fcom st(1)
// 006434ba  dfe0                 fnstsw ax
// 006434bc  f6c441               test ah, 0x41
// 006434bf  7a3d                 jp 0x6434fe
// 006434c1  dd442420             fld qword ptr [esp + 0x20]
// 006434c5  dd0598317900         fld qword ptr [0x793198]
// 006434cb  d8c1                 fadd st(1)
// 006434cd  d8db                 fcomp st(3)
// 006434cf  dfe0                 fnstsw ax
// 006434d1  f6c401               test ah, 1
// 006434d4  7526                 jne 0x6434fc
// 006434d6  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006434d9  ddd9                 fstp st(1)
// 006434db  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 006434de  dee9                 fsubp st(1)
// 006434e0  83ec08               sub esp, 8
// 006434e3  dd1c24               fstp qword ptr [esp]
// 006434e6  50                   push eax
// 006434e7  51                   push ecx
// 006434e8  56                   push esi
// 006434e9  57                   push edi
// 006434ea  53                   push ebx
// 006434eb  e8b0a9ffff           call 0x63dea0
// 006434f0  8b5304               mov edx, dword ptr [ebx + 4]
// 006434f3  83c41c               add esp, 0x1c
// 006434f6  50                   push eax
// 006434f7  56                   push esi
// 006434f8  57                   push edi
// 006434f9  52                   push edx
// 006434fa  eb15                 jmp 0x643511
// 006434fc  ddd8                 fstp st(0)
// 006434fe  ded9                 fcompp 
// 00643500  dfe0                 fnstsw ax
// 00643502  f6c441               test ah, 0x41
// 00643505  7510                 jne 0x643517
// 00643507  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0064350a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0064350d  50                   push eax
// 0064350e  56                   push esi
// 0064350f  57                   push edi
// 00643510  51                   push ecx
// 00643511  ff1530d17700         call dword ptr [0x77d130]
// 00643517  d9e8                 fld1 
// 00643519  83c601               add esi, 1
// 0064351c  3b7518               cmp esi, dword ptr [ebp + 0x18]
// 0064351f  89742414             mov dword ptr [esp + 0x14], esi
// 00643523  0f8c4affffff         jl 0x643473
// 00643529  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0064352c  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0064352f  83c701               add edi, 1
// 00643532  3bf8                 cmp edi, eax
// 00643534  897c2418             mov dword ptr [esp + 0x18], edi
// 00643538  0f8c12ffffff         jl 0x643450
// 0064353e  ddd8                 fstp st(0)
// 00643540  5f                   pop edi
// 00643541  5e                   pop esi
// 00643542  5b                   pop ebx
// 00643543  8be5                 mov esp, ebp
// 00643545  5d                   pop ebp
// 00643546  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?AlphaEllipse@CXTPPaintManager@@QAEXPAVCDC@@VCRect@@KK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
