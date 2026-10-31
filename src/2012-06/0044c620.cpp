// roc 2012-06 0044c620  unit: COutputView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044c620
//
// 0044c620  8b442404             mov eax, dword ptr [esp + 4]
// 0044c624  83ec18               sub esp, 0x18
// 0044c627  56                   push esi
// 0044c628  50                   push eax
// 0044c629  687c30b500           push 0xb5307c
// 0044c62e  8d4c240c             lea ecx, [esp + 0xc]
// 0044c632  6a0b                 push 0xb
// 0044c634  51                   push ecx
// 0044c635  ff153c2ab200         call dword ptr [0xb22a3c]
// 0044c63b  6a14                 push 0x14
// 0044c63d  8d542418             lea edx, [esp + 0x18]
// 0044c641  52                   push edx
// 0044c642  8bf0                 mov esi, eax
// 0044c644  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0044c648  6a16                 push 0x16
// 0044c64a  50                   push eax
// 0044c64b  ff15fc29b200         call dword ptr [0xb229fc]
// 0044c651  50                   push eax
// 0044c652  e8c979fbff           call 0x404020
// 0044c657  83c424               add esp, 0x24
// 0044c65a  8bc6                 mov eax, esi
// 0044c65c  5e                   pop esi
// 0044c65d  83c418               add esp, 0x18
// 0044c660  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCRPair@ATL@@YAHKPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp