// from server: 100% by auto
// roc 2008-06 0072c860  unit: CXTPRibbonTheme  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072c860
//
// 0072c860  83ec10               sub esp, 0x10
// 0072c863  53                   push ebx
// 0072c864  56                   push esi
// 0072c865  8b742430             mov esi, dword ptr [esp + 0x30]
// 0072c869  8bd9                 mov ebx, ecx
// 0072c86b  57                   push edi
// 0072c86c  8bce                 mov ecx, esi
// 0072c86e  e83d40cfff           call 0x4208b0
// 0072c873  8bb8c0000000         mov edi, dword ptr [eax + 0xc0]
// 0072c879  8bce                 mov ecx, esi
// 0072c87b  e86040cfff           call 0x4208e0
// 0072c880  3bc7                 cmp eax, edi
// 0072c882  7d7d                 jge 0x72c901
// 0072c884  6878208600           push 0x862078
// 0072c889  8bcb                 mov ecx, ebx
// 0072c88b  e8608e0000           call 0x7356f0
// 0072c890  8bf0                 mov esi, eax
// 0072c892  85f6                 test esi, esi
// 0072c894  746b                 je 0x72c901
// 0072c896  6a01                 push 1
// 0072c898  6a00                 push 0
// 0072c89a  8d442414             lea eax, [esp + 0x14]
// 0072c89e  50                   push eax
// 0072c89f  8bce                 mov ecx, esi
// 0072c8a1  e88a0e0600           call 0x78d730
// 0072c8a6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0072c8aa  83c1fe               add ecx, -2
// 0072c8ad  83ec10               sub esp, 0x10
// 0072c8b0  8bc4                 mov eax, esp
// 0072c8b2  894c2434             mov dword ptr [esp + 0x34], ecx
// 0072c8b6  33c9                 xor ecx, ecx
// 0072c8b8  8908                 mov dword ptr [eax], ecx
// 0072c8ba  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0072c8be  bb02000000           mov ebx, 2
// 0072c8c3  295c2438             sub dword ptr [esp + 0x38], ebx
// 0072c8c7  8bd3                 mov edx, ebx
// 0072c8c9  895004               mov dword ptr [eax + 4], edx
// 0072c8cc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072c8d0  33ff                 xor edi, edi
// 0072c8d2  897808               mov dword ptr [eax + 8], edi
// 0072c8d5  89580c               mov dword ptr [eax + 0xc], ebx
// 0072c8d8  83ec10               sub esp, 0x10
// 0072c8db  8bc4                 mov eax, esp
// 0072c8dd  8910                 mov dword ptr [eax], edx
// 0072c8df  8b542434             mov edx, dword ptr [esp + 0x34]
// 0072c8e3  894804               mov dword ptr [eax + 4], ecx
// 0072c8e6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0072c8ea  895008               mov dword ptr [eax + 8], edx
// 0072c8ed  89480c               mov dword ptr [eax + 0xc], ecx
// 0072c8f0  8b442440             mov eax, dword ptr [esp + 0x40]
// 0072c8f4  8d542444             lea edx, [esp + 0x44]
// 0072c8f8  52                   push edx
// 0072c8f9  50                   push eax
// 0072c8fa  8bce                 mov ecx, esi
// 0072c8fc  e8ff060600           call 0x78d000
// 0072c901  5f                   pop edi
// 0072c902  5e                   pop esi
// 0072c903  5b                   pop ebx
// 0072c904  83c410               add esp, 0x10
// 0072c907  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
