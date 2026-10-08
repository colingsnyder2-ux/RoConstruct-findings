// roc 2010-06 00830da0  unit: CXTPRibbonTheme  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00830da0
//
// 00830da0  83ec10               sub esp, 0x10
// 00830da3  53                   push ebx
// 00830da4  56                   push esi
// 00830da5  8b742430             mov esi, dword ptr [esp + 0x30]
// 00830da9  8bd9                 mov ebx, ecx
// 00830dab  57                   push edi
// 00830dac  8bce                 mov ecx, esi
// 00830dae  e87dd9fdff           call 0x80e730
// 00830db3  8bb8c0000000         mov edi, dword ptr [eax + 0xc0]
// 00830db9  8bce                 mov ecx, esi
// 00830dbb  e860d9fdff           call 0x80e720
// 00830dc0  3bc7                 cmp eax, edi
// 00830dc2  7d7d                 jge 0x830e41
// 00830dc4  68d860a600           push 0xa660d8
// 00830dc9  8bcb                 mov ecx, ebx
// 00830dcb  e830140000           call 0x832200
// 00830dd0  8bf0                 mov esi, eax
// 00830dd2  85f6                 test esi, esi
// 00830dd4  746b                 je 0x830e41
// 00830dd6  6a01                 push 1
// 00830dd8  6a00                 push 0
// 00830dda  8d442414             lea eax, [esp + 0x14]
// 00830dde  50                   push eax
// 00830ddf  8bce                 mov ecx, esi
// 00830de1  e84a3d0600           call 0x894b30
// 00830de6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00830dea  83c1fe               add ecx, -2
// 00830ded  83ec10               sub esp, 0x10
// 00830df0  8bc4                 mov eax, esp
// 00830df2  894c2434             mov dword ptr [esp + 0x34], ecx
// 00830df6  33c9                 xor ecx, ecx
// 00830df8  8908                 mov dword ptr [eax], ecx
// 00830dfa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00830dfe  bb02000000           mov ebx, 2
// 00830e03  295c2438             sub dword ptr [esp + 0x38], ebx
// 00830e07  8bd3                 mov edx, ebx
// 00830e09  895004               mov dword ptr [eax + 4], edx
// 00830e0c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00830e10  33ff                 xor edi, edi
// 00830e12  897808               mov dword ptr [eax + 8], edi
// 00830e15  89580c               mov dword ptr [eax + 0xc], ebx
// 00830e18  83ec10               sub esp, 0x10
// 00830e1b  8bc4                 mov eax, esp
// 00830e1d  8910                 mov dword ptr [eax], edx
// 00830e1f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00830e23  894804               mov dword ptr [eax + 4], ecx
// 00830e26  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00830e2a  895008               mov dword ptr [eax + 8], edx
// 00830e2d  89480c               mov dword ptr [eax + 0xc], ecx
// 00830e30  8b442440             mov eax, dword ptr [esp + 0x40]
// 00830e34  8d542444             lea edx, [esp + 0x44]
// 00830e38  52                   push edx
// 00830e39  50                   push eax
// 00830e3a  8bce                 mov ecx, esi
// 00830e3c  e8bf350600           call 0x894400
// 00830e41  5f                   pop edi
// 00830e42  5e                   pop esi
// 00830e43  5b                   pop ebx
// 00830e44  83c410               add esp, 0x10
// 00830e47  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
