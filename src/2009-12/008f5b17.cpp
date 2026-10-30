// roc 2009-12 008f5b17  unit: CXTIconHandle  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5b17
//
// 008f5b17  8bff                 mov edi, edi
// 008f5b19  55                   push ebp
// 008f5b1a  8bec                 mov ebp, esp
// 008f5b1c  56                   push esi
// 008f5b1d  8b7508               mov esi, dword ptr [ebp + 8]
// 008f5b20  57                   push edi
// 008f5b21  ff750c               push dword ptr [ebp + 0xc]
// 008f5b24  83c608               add esi, 8
// 008f5b27  83e6f8               and esi, 0xfffffff8
// 008f5b2a  8d4508               lea eax, [ebp + 8]
// 008f5b2d  56                   push esi
// 008f5b2e  50                   push eax
// 008f5b2f  8bf9                 mov edi, ecx
// 008f5b31  e87acfb0ff           call 0x402ab0
// 008f5b36  83c40c               add esp, 0xc
// 008f5b39  85c0                 test eax, eax
// 008f5b3b  7c36                 jl 0x8f5b73
// 008f5b3d  ff7508               push dword ptr [ebp + 8]
// 008f5b40  8d4508               lea eax, [ebp + 8]
// 008f5b43  6a10                 push 0x10
// 008f5b45  50                   push eax
// 008f5b46  e8a6ffffff           call 0x8f5af1
// 008f5b4b  83c40c               add esp, 0xc
// 008f5b4e  85c0                 test eax, eax
// 008f5b50  7c21                 jl 0x8f5b73
// 008f5b52  8b4f04               mov ecx, dword ptr [edi + 4]
// 008f5b55  ff7508               push dword ptr [ebp + 8]
// 008f5b58  8b01                 mov eax, dword ptr [ecx]
// 008f5b5a  ff10                 call dword ptr [eax]
// 008f5b5c  85c0                 test eax, eax
// 008f5b5e  7413                 je 0x8f5b73
// 008f5b60  4e                   dec esi
// 008f5b61  83600400             and dword ptr [eax + 4], 0
// 008f5b65  8938                 mov dword ptr [eax], edi
// 008f5b67  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 008f5b6e  897008               mov dword ptr [eax + 8], esi
// 008f5b71  eb02                 jmp 0x8f5b75
// 008f5b73  33c0                 xor eax, eax
// 008f5b75  5f                   pop edi
// 008f5b76  5e                   pop esi
// 008f5b77  5d                   pop ebp
// 008f5b78  c20800               ret 8
// copied from an identical function in another client (function ?Allocate@CAtlStringMgr@ATL@@UAEPAUCStringData@2@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj