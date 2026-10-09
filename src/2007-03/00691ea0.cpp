// roc 2007-03 00691ea0  unit: seg_00690000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00691ea0
//
// 00691ea0  83ec10               sub esp, 0x10
// 00691ea3  53                   push ebx
// 00691ea4  55                   push ebp
// 00691ea5  56                   push esi
// 00691ea6  57                   push edi
// 00691ea7  6850097d00           push 0x7d0950
// 00691eac  e87f430100           call 0x6a6230
// 00691eb1  8bf0                 mov esi, eax
// 00691eb3  85f6                 test esi, esi
// 00691eb5  7479                 je 0x691f30
// 00691eb7  8bce                 mov ecx, esi
// 00691eb9  e8a2f40600           call 0x701360
// 00691ebe  8bce                 mov ecx, esi
// 00691ec0  8bf8                 mov edi, eax
// 00691ec2  33db                 xor ebx, ebx
// 00691ec4  33ed                 xor ebp, ebp
// 00691ec6  e815110600           call 0x6f2fe0
// 00691ecb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00691ecf  8bd1                 mov edx, ecx
// 00691ed1  2bd0                 sub edx, eax
// 00691ed3  89542410             mov dword ptr [esp + 0x10], edx
// 00691ed7  8b542434             mov edx, dword ptr [esp + 0x34]
// 00691edb  894c2418             mov dword ptr [esp + 0x18], ecx
// 00691edf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00691ee3  2bd7                 sub edx, edi
// 00691ee5  83ea04               sub edx, 4
// 00691ee8  83c1fc               add ecx, -4
// 00691eeb  68ff00ff00           push 0xff00ff
// 00691ef0  89542418             mov dword ptr [esp + 0x18], edx
// 00691ef4  894c2420             mov dword ptr [esp + 0x20], ecx
// 00691ef8  33c9                 xor ecx, ecx
// 00691efa  8d54242c             lea edx, [esp + 0x2c]
// 00691efe  52                   push edx
// 00691eff  83ec10               sub esp, 0x10
// 00691f02  894c2440             mov dword ptr [esp + 0x40], ecx
// 00691f06  894c2444             mov dword ptr [esp + 0x44], ecx
// 00691f0a  894c2448             mov dword ptr [esp + 0x48], ecx
// 00691f0e  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00691f12  8bcc                 mov ecx, esp
// 00691f14  8919                 mov dword ptr [ecx], ebx
// 00691f16  896904               mov dword ptr [ecx + 4], ebp
// 00691f19  894108               mov dword ptr [ecx + 8], eax
// 00691f1c  89790c               mov dword ptr [ecx + 0xc], edi
// 00691f1f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00691f23  8d442428             lea eax, [esp + 0x28]
// 00691f27  50                   push eax
// 00691f28  51                   push ecx
// 00691f29  8bce                 mov ecx, esi
// 00691f2b  e850150600           call 0x6f3480
// 00691f30  5f                   pop edi
// 00691f31  5e                   pop esi
// 00691f32  5d                   pop ebp
// 00691f33  5b                   pop ebx
// 00691f34  83c410               add esp, 0x10
// 00691f37  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTheme.cpp
