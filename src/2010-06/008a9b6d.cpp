// roc 2010-06 008a9b6d  unit: CXTIconHandle  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9b6d
//
// 008a9b6d  8bff                 mov edi, edi
// 008a9b6f  55                   push ebp
// 008a9b70  8bec                 mov ebp, esp
// 008a9b72  33c0                 xor eax, eax
// 008a9b74  394508               cmp dword ptr [ebp + 8], eax
// 008a9b77  7509                 jne 0x8a9b82
// 008a9b79  ff750c               push dword ptr [ebp + 0xc]
// 008a9b7c  8b01                 mov eax, dword ptr [ecx]
// 008a9b7e  ff10                 call dword ptr [eax]
// 008a9b80  eb21                 jmp 0x8a9ba3
// 008a9b82  39450c               cmp dword ptr [ebp + 0xc], eax
// 008a9b85  750c                 jne 0x8a9b93
// 008a9b87  ff7508               push dword ptr [ebp + 8]
// 008a9b8a  8b01                 mov eax, dword ptr [ecx]
// 008a9b8c  ff5004               call dword ptr [eax + 4]
// 008a9b8f  33c0                 xor eax, eax
// 008a9b91  eb10                 jmp 0x8a9ba3
// 008a9b93  ff750c               push dword ptr [ebp + 0xc]
// 008a9b96  ff7508               push dword ptr [ebp + 8]
// 008a9b99  50                   push eax
// 008a9b9a  ff7104               push dword ptr [ecx + 4]
// 008a9b9d  ff1538a29e00         call dword ptr [0x9ea238]
// 008a9ba3  5d                   pop ebp
// 008a9ba4  c20800               ret 8
// copied from an identical function in another client (function ?Reallocate@CWin32Heap@ATL@@UAEPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj