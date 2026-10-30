// roc 2010-06 008a9c77  unit: CXTIconHandle  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9c77
//
// 008a9c77  8bff                 mov edi, edi
// 008a9c79  55                   push ebp
// 008a9c7a  8bec                 mov ebp, esp
// 008a9c7c  56                   push esi
// 008a9c7d  8b7508               mov esi, dword ptr [ebp + 8]
// 008a9c80  57                   push edi
// 008a9c81  ff750c               push dword ptr [ebp + 0xc]
// 008a9c84  83c608               add esi, 8
// 008a9c87  83e6f8               and esi, 0xfffffff8
// 008a9c8a  8d4508               lea eax, [ebp + 8]
// 008a9c8d  56                   push esi
// 008a9c8e  50                   push eax
// 008a9c8f  8bf9                 mov edi, ecx
// 008a9c91  e86a8eb5ff           call 0x402b00
// 008a9c96  83c40c               add esp, 0xc
// 008a9c99  85c0                 test eax, eax
// 008a9c9b  7c36                 jl 0x8a9cd3
// 008a9c9d  ff7508               push dword ptr [ebp + 8]
// 008a9ca0  8d4508               lea eax, [ebp + 8]
// 008a9ca3  6a10                 push 0x10
// 008a9ca5  50                   push eax
// 008a9ca6  e8a6ffffff           call 0x8a9c51
// 008a9cab  83c40c               add esp, 0xc
// 008a9cae  85c0                 test eax, eax
// 008a9cb0  7c21                 jl 0x8a9cd3
// 008a9cb2  8b4f04               mov ecx, dword ptr [edi + 4]
// 008a9cb5  ff7508               push dword ptr [ebp + 8]
// 008a9cb8  8b01                 mov eax, dword ptr [ecx]
// 008a9cba  ff10                 call dword ptr [eax]
// 008a9cbc  85c0                 test eax, eax
// 008a9cbe  7413                 je 0x8a9cd3
// 008a9cc0  4e                   dec esi
// 008a9cc1  83600400             and dword ptr [eax + 4], 0
// 008a9cc5  8938                 mov dword ptr [eax], edi
// 008a9cc7  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 008a9cce  897008               mov dword ptr [eax + 8], esi
// 008a9cd1  eb02                 jmp 0x8a9cd5
// 008a9cd3  33c0                 xor eax, eax
// 008a9cd5  5f                   pop edi
// 008a9cd6  5e                   pop esi
// 008a9cd7  5d                   pop ebp
// 008a9cd8  c20800               ret 8
// copied from an identical function in another client (function ?Allocate@CAtlStringMgr@ATL@@UAEPAUCStringData@2@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj