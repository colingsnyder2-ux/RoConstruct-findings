// roc 2009-12 008f5a0d  unit: CXTIconHandle  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5a0d
//
// 008f5a0d  8bff                 mov edi, edi
// 008f5a0f  55                   push ebp
// 008f5a10  8bec                 mov ebp, esp
// 008f5a12  33c0                 xor eax, eax
// 008f5a14  394508               cmp dword ptr [ebp + 8], eax
// 008f5a17  7509                 jne 0x8f5a22
// 008f5a19  ff750c               push dword ptr [ebp + 0xc]
// 008f5a1c  8b01                 mov eax, dword ptr [ecx]
// 008f5a1e  ff10                 call dword ptr [eax]
// 008f5a20  eb21                 jmp 0x8f5a43
// 008f5a22  39450c               cmp dword ptr [ebp + 0xc], eax
// 008f5a25  750c                 jne 0x8f5a33
// 008f5a27  ff7508               push dword ptr [ebp + 8]
// 008f5a2a  8b01                 mov eax, dword ptr [ecx]
// 008f5a2c  ff5004               call dword ptr [eax + 4]
// 008f5a2f  33c0                 xor eax, eax
// 008f5a31  eb10                 jmp 0x8f5a43
// 008f5a33  ff750c               push dword ptr [ebp + 0xc]
// 008f5a36  ff7508               push dword ptr [ebp + 8]
// 008f5a39  50                   push eax
// 008f5a3a  ff7104               push dword ptr [ecx + 4]
// 008f5a3d  ff1554b39800         call dword ptr [0x98b354]
// 008f5a43  5d                   pop ebp
// 008f5a44  c20800               ret 8
// copied from an identical function in another client (function ?Reallocate@CWin32Heap@ATL@@UAEPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj