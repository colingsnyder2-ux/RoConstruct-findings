// roc 2009-06 0081ad2d  unit: CXTIconHandle  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081ad2d
//
// 0081ad2d  8bff                 mov edi, edi
// 0081ad2f  55                   push ebp
// 0081ad30  8bec                 mov ebp, esp
// 0081ad32  33c0                 xor eax, eax
// 0081ad34  394508               cmp dword ptr [ebp + 8], eax
// 0081ad37  7509                 jne 0x81ad42
// 0081ad39  ff750c               push dword ptr [ebp + 0xc]
// 0081ad3c  8b01                 mov eax, dword ptr [ecx]
// 0081ad3e  ff10                 call dword ptr [eax]
// 0081ad40  eb21                 jmp 0x81ad63
// 0081ad42  39450c               cmp dword ptr [ebp + 0xc], eax
// 0081ad45  750c                 jne 0x81ad53
// 0081ad47  ff7508               push dword ptr [ebp + 8]
// 0081ad4a  8b01                 mov eax, dword ptr [ecx]
// 0081ad4c  ff5004               call dword ptr [eax + 4]
// 0081ad4f  33c0                 xor eax, eax
// 0081ad51  eb10                 jmp 0x81ad63
// 0081ad53  ff750c               push dword ptr [ebp + 0xc]
// 0081ad56  ff7508               push dword ptr [ebp + 8]
// 0081ad59  50                   push eax
// 0081ad5a  ff7104               push dword ptr [ecx + 4]
// 0081ad5d  ff1598e38900         call dword ptr [0x89e398]
// 0081ad63  5d                   pop ebp
// 0081ad64  c20800               ret 8
// copied from an identical function in another client (function ?Reallocate@CWin32Heap@ATL@@UAEPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj