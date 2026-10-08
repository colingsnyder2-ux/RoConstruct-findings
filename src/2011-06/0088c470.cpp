// roc 2011-06 0088c470  unit: CXTPRibbonTheme  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088c470
//
// 0088c470  83ec30               sub esp, 0x30
// 0088c473  53                   push ebx
// 0088c474  55                   push ebp
// 0088c475  56                   push esi
// 0088c476  57                   push edi
// 0088c477  8bf9                 mov edi, ecx
// 0088c479  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088c47d  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0088c480  8d442420             lea eax, [esp + 0x20]
// 0088c484  50                   push eax
// 0088c485  52                   push edx
// 0088c486  ff157c1ca400         call dword ptr [0xa41c7c]
// 0088c48c  681009ad00           push 0xad0910
// 0088c491  8bcf                 mov ecx, edi
// 0088c493  e8f82d0000           call 0x88f290
// 0088c498  8bf0                 mov esi, eax
// 0088c49a  85f6                 test esi, esi
// 0088c49c  7512                 jne 0x88c4b0
// 0088c49e  680009ad00           push 0xad0900
// 0088c4a3  8bcf                 mov ecx, edi
// 0088c4a5  e8e62d0000           call 0x88f290
// 0088c4aa  8bf0                 mov esi, eax
// 0088c4ac  85f6                 test esi, esi
// 0088c4ae  745b                 je 0x88c50b
// 0088c4b0  6a01                 push 1
// 0088c4b2  bd04000000           mov ebp, 4
// 0088c4b7  6a00                 push 0
// 0088c4b9  8d442438             lea eax, [esp + 0x38]
// 0088c4bd  50                   push eax
// 0088c4be  8bce                 mov ecx, esi
// 0088c4c0  8bfd                 mov edi, ebp
// 0088c4c2  8bdd                 mov ebx, ebp
// 0088c4c4  896c2428             mov dword ptr [esp + 0x28], ebp
// 0088c4c8  e843120600           call 0x8ed710
// 0088c4cd  83ec10               sub esp, 0x10
// 0088c4d0  8bcc                 mov ecx, esp
// 0088c4d2  8939                 mov dword ptr [ecx], edi
// 0088c4d4  895904               mov dword ptr [ecx + 4], ebx
// 0088c4d7  896908               mov dword ptr [ecx + 8], ebp
// 0088c4da  83ec10               sub esp, 0x10
// 0088c4dd  8bd5                 mov edx, ebp
// 0088c4df  89510c               mov dword ptr [ecx + 0xc], edx
// 0088c4e2  8b10                 mov edx, dword ptr [eax]
// 0088c4e4  8bcc                 mov ecx, esp
// 0088c4e6  8911                 mov dword ptr [ecx], edx
// 0088c4e8  8b5004               mov edx, dword ptr [eax + 4]
// 0088c4eb  895104               mov dword ptr [ecx + 4], edx
// 0088c4ee  8b5008               mov edx, dword ptr [eax + 8]
// 0088c4f1  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088c4f4  895108               mov dword ptr [ecx + 8], edx
// 0088c4f7  8b542464             mov edx, dword ptr [esp + 0x64]
// 0088c4fb  89410c               mov dword ptr [ecx + 0xc], eax
// 0088c4fe  8d4c2440             lea ecx, [esp + 0x40]
// 0088c502  51                   push ecx
// 0088c503  52                   push edx
// 0088c504  8bce                 mov ecx, esi
// 0088c506  e8d50a0600           call 0x8ecfe0
// 0088c50b  5f                   pop edi
// 0088c50c  5e                   pop esi
// 0088c50d  5d                   pop ebp
// 0088c50e  5b                   pop ebx
// 0088c50f  83c430               add esp, 0x30
// 0088c512  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillMorePopupToolBarEntry@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
