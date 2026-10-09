// roc 2009-12 008744b0  unit: CXTPRibbonTheme  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008744b0
//
// 008744b0  83ec30               sub esp, 0x30
// 008744b3  53                   push ebx
// 008744b4  55                   push ebp
// 008744b5  56                   push esi
// 008744b6  57                   push edi
// 008744b7  8bf9                 mov edi, ecx
// 008744b9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008744bd  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008744c0  8d442420             lea eax, [esp + 0x20]
// 008744c4  50                   push eax
// 008744c5  52                   push edx
// 008744c6  ff1550cc9800         call dword ptr [0x98cc50]
// 008744cc  68b015a000           push 0xa015b0
// 008744d1  8bcf                 mov ecx, edi
// 008744d3  e828a80000           call 0x87ed00
// 008744d8  8bf0                 mov esi, eax
// 008744da  85f6                 test esi, esi
// 008744dc  7512                 jne 0x8744f0
// 008744de  68a015a000           push 0xa015a0
// 008744e3  8bcf                 mov ecx, edi
// 008744e5  e816a80000           call 0x87ed00
// 008744ea  8bf0                 mov esi, eax
// 008744ec  85f6                 test esi, esi
// 008744ee  745b                 je 0x87454b
// 008744f0  6a01                 push 1
// 008744f2  bd04000000           mov ebp, 4
// 008744f7  6a00                 push 0
// 008744f9  8d442438             lea eax, [esp + 0x38]
// 008744fd  50                   push eax
// 008744fe  8bce                 mov ecx, esi
// 00874500  8bfd                 mov edi, ebp
// 00874502  8bdd                 mov ebx, ebp
// 00874504  896c2428             mov dword ptr [esp + 0x28], ebp
// 00874508  e8b3c30600           call 0x8e08c0
// 0087450d  83ec10               sub esp, 0x10
// 00874510  8bcc                 mov ecx, esp
// 00874512  8939                 mov dword ptr [ecx], edi
// 00874514  895904               mov dword ptr [ecx + 4], ebx
// 00874517  896908               mov dword ptr [ecx + 8], ebp
// 0087451a  83ec10               sub esp, 0x10
// 0087451d  8bd5                 mov edx, ebp
// 0087451f  89510c               mov dword ptr [ecx + 0xc], edx
// 00874522  8b10                 mov edx, dword ptr [eax]
// 00874524  8bcc                 mov ecx, esp
// 00874526  8911                 mov dword ptr [ecx], edx
// 00874528  8b5004               mov edx, dword ptr [eax + 4]
// 0087452b  895104               mov dword ptr [ecx + 4], edx
// 0087452e  8b5008               mov edx, dword ptr [eax + 8]
// 00874531  8b400c               mov eax, dword ptr [eax + 0xc]
// 00874534  895108               mov dword ptr [ecx + 8], edx
// 00874537  8b542464             mov edx, dword ptr [esp + 0x64]
// 0087453b  89410c               mov dword ptr [ecx + 0xc], eax
// 0087453e  8d4c2440             lea ecx, [esp + 0x40]
// 00874542  51                   push ecx
// 00874543  52                   push edx
// 00874544  8bce                 mov ecx, esi
// 00874546  e845bc0600           call 0x8e0190
// 0087454b  5f                   pop edi
// 0087454c  5e                   pop esi
// 0087454d  5d                   pop ebp
// 0087454e  5b                   pop ebx
// 0087454f  83c430               add esp, 0x30
// 00874552  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillMorePopupToolBarEntry@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
