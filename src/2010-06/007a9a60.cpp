// roc 2010-06 007a9a60  unit: ActiveDocView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9a60
//
// 007a9a60  8bff                 mov edi, edi
// 007a9a62  56                   push esi
// 007a9a63  8bf1                 mov esi, ecx
// 007a9a65  8b4608               mov eax, dword ptr [esi + 8]
// 007a9a68  c706685aa500         mov dword ptr [esi], 0xa55a68
// 007a9a6e  85c0                 test eax, eax
// 007a9a70  7408                 je 0x7a9a7a
// 007a9a72  8b08                 mov ecx, dword ptr [eax]
// 007a9a74  8b5108               mov edx, dword ptr [ecx + 8]
// 007a9a77  50                   push eax
// 007a9a78  ffd2                 call edx
// 007a9a7a  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007a9a7e  7417                 je 0x7a9a97
// 007a9a80  ff1504a39e00         call dword ptr [0x9ea304]
// 007a9a86  85c0                 test eax, eax
// 007a9a88  740d                 je 0x7a9a97
// 007a9a8a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007a9a8d  51                   push ecx
// 007a9a8e  6a00                 push 0
// 007a9a90  50                   push eax
// 007a9a91  ff150ca39e00         call dword ptr [0x9ea30c]
// 007a9a97  5e                   pop esi
// 007a9a98  c3                   ret 
// copied from an identical function in another client (function ??1_com_error@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-comsupp-rtm comsupp.lib/f:/dd/vctools/compiler/cxxfe/sl/vccom/ANSI/objr/i386/comraise.obj