// roc 2007-08 006afcf0  unit: CXTPRibbonTheme  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006afcf0
//
// 006afcf0  83ec30               sub esp, 0x30
// 006afcf3  53                   push ebx
// 006afcf4  55                   push ebp
// 006afcf5  56                   push esi
// 006afcf6  57                   push edi
// 006afcf7  8bf9                 mov edi, ecx
// 006afcf9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006afcfd  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006afd00  8d442420             lea eax, [esp + 0x20]
// 006afd04  50                   push eax
// 006afd05  52                   push edx
// 006afd06  ff15f4ed7700         call dword ptr [0x77edf4]
// 006afd0c  68a05c7d00           push 0x7d5ca0
// 006afd11  8bcf                 mov ecx, edi
// 006afd13  e898aa0000           call 0x6ba7b0
// 006afd18  8bf0                 mov esi, eax
// 006afd1a  85f6                 test esi, esi
// 006afd1c  7512                 jne 0x6afd30
// 006afd1e  68905c7d00           push 0x7d5c90
// 006afd23  8bcf                 mov ecx, edi
// 006afd25  e886aa0000           call 0x6ba7b0
// 006afd2a  8bf0                 mov esi, eax
// 006afd2c  85f6                 test esi, esi
// 006afd2e  745b                 je 0x6afd8b
// 006afd30  6a01                 push 1
// 006afd32  bd04000000           mov ebp, 4
// 006afd37  6a00                 push 0
// 006afd39  8d442438             lea eax, [esp + 0x38]
// 006afd3d  50                   push eax
// 006afd3e  8bce                 mov ecx, esi
// 006afd40  8bfd                 mov edi, ebp
// 006afd42  8bdd                 mov ebx, ebp
// 006afd44  896c2428             mov dword ptr [esp + 0x28], ebp
// 006afd48  e893020600           call 0x70ffe0
// 006afd4d  83ec10               sub esp, 0x10
// 006afd50  8bcc                 mov ecx, esp
// 006afd52  8939                 mov dword ptr [ecx], edi
// 006afd54  895904               mov dword ptr [ecx + 4], ebx
// 006afd57  896908               mov dword ptr [ecx + 8], ebp
// 006afd5a  83ec10               sub esp, 0x10
// 006afd5d  8bd5                 mov edx, ebp
// 006afd5f  89510c               mov dword ptr [ecx + 0xc], edx
// 006afd62  8b10                 mov edx, dword ptr [eax]
// 006afd64  8bcc                 mov ecx, esp
// 006afd66  8911                 mov dword ptr [ecx], edx
// 006afd68  8b5004               mov edx, dword ptr [eax + 4]
// 006afd6b  895104               mov dword ptr [ecx + 4], edx
// 006afd6e  8b5008               mov edx, dword ptr [eax + 8]
// 006afd71  8b400c               mov eax, dword ptr [eax + 0xc]
// 006afd74  895108               mov dword ptr [ecx + 8], edx
// 006afd77  8b542464             mov edx, dword ptr [esp + 0x64]
// 006afd7b  89410c               mov dword ptr [ecx + 0xc], eax
// 006afd7e  8d4c2440             lea ecx, [esp + 0x40]
// 006afd82  51                   push ecx
// 006afd83  52                   push edx
// 006afd84  8bce                 mov ecx, esi
// 006afd86  e815fb0500           call 0x70f8a0
// 006afd8b  5f                   pop edi
// 006afd8c  5e                   pop esi
// 006afd8d  5d                   pop ebp
// 006afd8e  5b                   pop ebx
// 006afd8f  83c430               add esp, 0x30
// 006afd92  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillMorePopupToolBarEntry@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTheme.cpp
