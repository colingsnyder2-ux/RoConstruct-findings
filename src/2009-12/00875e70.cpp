// roc 2009-12 00875e70  unit: CXTPRibbonTheme  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00875e70
//
// 00875e70  83ec10               sub esp, 0x10
// 00875e73  53                   push ebx
// 00875e74  56                   push esi
// 00875e75  8b742430             mov esi, dword ptr [esp + 0x30]
// 00875e79  8bd9                 mov ebx, ecx
// 00875e7b  57                   push edi
// 00875e7c  8bce                 mov ecx, esi
// 00875e7e  e84d040500           call 0x8c62d0
// 00875e83  8bb8c0000000         mov edi, dword ptr [eax + 0xc0]
// 00875e89  8bce                 mov ecx, esi
// 00875e8b  e8204ebaff           call 0x41acb0
// 00875e90  3bc7                 cmp eax, edi
// 00875e92  7d7d                 jge 0x875f11
// 00875e94  689817a000           push 0xa01798
// 00875e99  8bcb                 mov ecx, ebx
// 00875e9b  e8608e0000           call 0x87ed00
// 00875ea0  8bf0                 mov esi, eax
// 00875ea2  85f6                 test esi, esi
// 00875ea4  746b                 je 0x875f11
// 00875ea6  6a01                 push 1
// 00875ea8  6a00                 push 0
// 00875eaa  8d442414             lea eax, [esp + 0x14]
// 00875eae  50                   push eax
// 00875eaf  8bce                 mov ecx, esi
// 00875eb1  e80aaa0600           call 0x8e08c0
// 00875eb6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00875eba  83c1fe               add ecx, -2
// 00875ebd  83ec10               sub esp, 0x10
// 00875ec0  8bc4                 mov eax, esp
// 00875ec2  894c2434             mov dword ptr [esp + 0x34], ecx
// 00875ec6  33c9                 xor ecx, ecx
// 00875ec8  8908                 mov dword ptr [eax], ecx
// 00875eca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00875ece  bb02000000           mov ebx, 2
// 00875ed3  295c2438             sub dword ptr [esp + 0x38], ebx
// 00875ed7  8bd3                 mov edx, ebx
// 00875ed9  895004               mov dword ptr [eax + 4], edx
// 00875edc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00875ee0  33ff                 xor edi, edi
// 00875ee2  897808               mov dword ptr [eax + 8], edi
// 00875ee5  89580c               mov dword ptr [eax + 0xc], ebx
// 00875ee8  83ec10               sub esp, 0x10
// 00875eeb  8bc4                 mov eax, esp
// 00875eed  8910                 mov dword ptr [eax], edx
// 00875eef  8b542434             mov edx, dword ptr [esp + 0x34]
// 00875ef3  894804               mov dword ptr [eax + 4], ecx
// 00875ef6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00875efa  895008               mov dword ptr [eax + 8], edx
// 00875efd  89480c               mov dword ptr [eax + 0xc], ecx
// 00875f00  8b442440             mov eax, dword ptr [esp + 0x40]
// 00875f04  8d542444             lea edx, [esp + 0x44]
// 00875f08  52                   push edx
// 00875f09  50                   push eax
// 00875f0a  8bce                 mov ecx, esi
// 00875f0c  e87fa20600           call 0x8e0190
// 00875f11  5f                   pop edi
// 00875f12  5e                   pop esi
// 00875f13  5b                   pop ebx
// 00875f14  83c410               add esp, 0x10
// 00875f17  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
