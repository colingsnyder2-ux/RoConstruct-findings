// roc 2007-03 006908e0  unit: seg_00690000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006908e0
//
// 006908e0  83ec30               sub esp, 0x30
// 006908e3  53                   push ebx
// 006908e4  55                   push ebp
// 006908e5  56                   push esi
// 006908e6  57                   push edi
// 006908e7  8bf9                 mov edi, ecx
// 006908e9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006908ed  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006908f0  8d442420             lea eax, [esp + 0x20]
// 006908f4  50                   push eax
// 006908f5  52                   push edx
// 006908f6  ff153ced7700         call dword ptr [0x77ed3c]
// 006908fc  68d0077d00           push 0x7d07d0
// 00690901  8bcf                 mov ecx, edi
// 00690903  e828590100           call 0x6a6230
// 00690908  8bf0                 mov esi, eax
// 0069090a  85f6                 test esi, esi
// 0069090c  7512                 jne 0x690920
// 0069090e  68c0077d00           push 0x7d07c0
// 00690913  8bcf                 mov ecx, edi
// 00690915  e816590100           call 0x6a6230
// 0069091a  8bf0                 mov esi, eax
// 0069091c  85f6                 test esi, esi
// 0069091e  745b                 je 0x69097b
// 00690920  6a01                 push 1
// 00690922  bd04000000           mov ebp, 4
// 00690927  6a00                 push 0
// 00690929  8d442438             lea eax, [esp + 0x38]
// 0069092d  50                   push eax
// 0069092e  8bce                 mov ecx, esi
// 00690930  8bfd                 mov edi, ebp
// 00690932  8bdd                 mov ebx, ebp
// 00690934  896c2428             mov dword ptr [esp + 0x28], ebp
// 00690938  e823260600           call 0x6f2f60
// 0069093d  83ec10               sub esp, 0x10
// 00690940  8bcc                 mov ecx, esp
// 00690942  8939                 mov dword ptr [ecx], edi
// 00690944  895904               mov dword ptr [ecx + 4], ebx
// 00690947  896908               mov dword ptr [ecx + 8], ebp
// 0069094a  83ec10               sub esp, 0x10
// 0069094d  8bd5                 mov edx, ebp
// 0069094f  89510c               mov dword ptr [ecx + 0xc], edx
// 00690952  8b10                 mov edx, dword ptr [eax]
// 00690954  8bcc                 mov ecx, esp
// 00690956  8911                 mov dword ptr [ecx], edx
// 00690958  8b5004               mov edx, dword ptr [eax + 4]
// 0069095b  895104               mov dword ptr [ecx + 4], edx
// 0069095e  8b5008               mov edx, dword ptr [eax + 8]
// 00690961  8b400c               mov eax, dword ptr [eax + 0xc]
// 00690964  895108               mov dword ptr [ecx + 8], edx
// 00690967  8b542464             mov edx, dword ptr [esp + 0x64]
// 0069096b  89410c               mov dword ptr [ecx + 0xc], eax
// 0069096e  8d4c2440             lea ecx, [esp + 0x40]
// 00690972  51                   push ecx
// 00690973  52                   push edx
// 00690974  8bce                 mov ecx, esi
// 00690976  e8a51e0600           call 0x6f2820
// 0069097b  5f                   pop edi
// 0069097c  5e                   pop esi
// 0069097d  5d                   pop ebp
// 0069097e  5b                   pop ebx
// 0069097f  83c430               add esp, 0x30
// 00690982  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillMorePopupToolBarEntry@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
