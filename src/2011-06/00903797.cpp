// roc 2011-06 00903797  unit: CXTIconHandle  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903797
//
// 00903797  8bff                 mov edi, edi
// 00903799  55                   push ebp
// 0090379a  8bec                 mov ebp, esp
// 0090379c  33c0                 xor eax, eax
// 0090379e  394508               cmp dword ptr [ebp + 8], eax
// 009037a1  7509                 jne 0x9037ac
// 009037a3  ff750c               push dword ptr [ebp + 0xc]
// 009037a6  8b01                 mov eax, dword ptr [ecx]
// 009037a8  ff10                 call dword ptr [eax]
// 009037aa  eb21                 jmp 0x9037cd
// 009037ac  39450c               cmp dword ptr [ebp + 0xc], eax
// 009037af  750c                 jne 0x9037bd
// 009037b1  ff7508               push dword ptr [ebp + 8]
// 009037b4  8b01                 mov eax, dword ptr [ecx]
// 009037b6  ff5004               call dword ptr [eax + 4]
// 009037b9  33c0                 xor eax, eax
// 009037bb  eb10                 jmp 0x9037cd
// 009037bd  ff750c               push dword ptr [ebp + 0xc]
// 009037c0  ff7508               push dword ptr [ebp + 8]
// 009037c3  50                   push eax
// 009037c4  ff7104               push dword ptr [ecx + 4]
// 009037c7  ff152002a400         call dword ptr [0xa40220]
// 009037cd  5d                   pop ebp
// 009037ce  c20800               ret 8
// copied from an identical function in another client (function ?Reallocate@CWin32Heap@ATL@@UAEPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj