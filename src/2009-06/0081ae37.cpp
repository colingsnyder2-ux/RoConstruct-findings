// roc 2009-06 0081ae37  unit: CXTIconHandle  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081ae37
//
// 0081ae37  8bff                 mov edi, edi
// 0081ae39  55                   push ebp
// 0081ae3a  8bec                 mov ebp, esp
// 0081ae3c  56                   push esi
// 0081ae3d  8b7508               mov esi, dword ptr [ebp + 8]
// 0081ae40  57                   push edi
// 0081ae41  ff750c               push dword ptr [ebp + 0xc]
// 0081ae44  83c608               add esi, 8
// 0081ae47  83e6f8               and esi, 0xfffffff8
// 0081ae4a  8d4508               lea eax, [ebp + 8]
// 0081ae4d  56                   push esi
// 0081ae4e  50                   push eax
// 0081ae4f  8bf9                 mov edi, ecx
// 0081ae51  e88a7fbeff           call 0x402de0
// 0081ae56  83c40c               add esp, 0xc
// 0081ae59  85c0                 test eax, eax
// 0081ae5b  7c36                 jl 0x81ae93
// 0081ae5d  ff7508               push dword ptr [ebp + 8]
// 0081ae60  8d4508               lea eax, [ebp + 8]
// 0081ae63  6a10                 push 0x10
// 0081ae65  50                   push eax
// 0081ae66  e8a6ffffff           call 0x81ae11
// 0081ae6b  83c40c               add esp, 0xc
// 0081ae6e  85c0                 test eax, eax
// 0081ae70  7c21                 jl 0x81ae93
// 0081ae72  8b4f04               mov ecx, dword ptr [edi + 4]
// 0081ae75  ff7508               push dword ptr [ebp + 8]
// 0081ae78  8b01                 mov eax, dword ptr [ecx]
// 0081ae7a  ff10                 call dword ptr [eax]
// 0081ae7c  85c0                 test eax, eax
// 0081ae7e  7413                 je 0x81ae93
// 0081ae80  4e                   dec esi
// 0081ae81  83600400             and dword ptr [eax + 4], 0
// 0081ae85  8938                 mov dword ptr [eax], edi
// 0081ae87  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0081ae8e  897008               mov dword ptr [eax + 8], esi
// 0081ae91  eb02                 jmp 0x81ae95
// 0081ae93  33c0                 xor eax, eax
// 0081ae95  5f                   pop edi
// 0081ae96  5e                   pop esi
// 0081ae97  5d                   pop ebp
// 0081ae98  c20800               ret 8
// copied from an identical function in another client (function ?Allocate@CAtlStringMgr@ATL@@UAEPAUCStringData@2@HH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj