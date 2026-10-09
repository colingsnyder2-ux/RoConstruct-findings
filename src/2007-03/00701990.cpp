// roc 2007-03 00701990  unit: seg_00700000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00701990
//
// 00701990  56                   push esi
// 00701991  68a8d17d00           push 0x7dd1a8
// 00701996  8bf1                 mov esi, ecx
// 00701998  ff1548d27700         call dword ptr [0x77d248]
// 0070199e  33c9                 xor ecx, ecx
// 007019a0  85c0                 test eax, eax
// 007019a2  0f95c1               setne cl
// 007019a5  8906                 mov dword ptr [esi], eax
// 007019a7  8bc1                 mov eax, ecx
// 007019a9  85c0                 test eax, eax
// 007019ab  894604               mov dword ptr [esi + 4], eax
// 007019ae  752a                 jne 0x7019da
// 007019b0  68b8b67d00           push 0x7db6b8
// 007019b5  ff1588d27700         call dword ptr [0x77d288]
// 007019bb  85c0                 test eax, eax
// 007019bd  741b                 je 0x7019da
// 007019bf  6870d17d00           push 0x7dd170
// 007019c4  50                   push eax
// 007019c5  ff1544d27700         call dword ptr [0x77d244]
// 007019cb  85c0                 test eax, eax
// 007019cd  8bc6                 mov eax, esi
// 007019cf  740b                 je 0x7019dc
// 007019d1  c7460401000000       mov dword ptr [esi + 4], 1
// 007019d8  5e                   pop esi
// 007019d9  c3                   ret 
// 007019da  8bc6                 mov eax, esi
// 007019dc  5e                   pop esi
// 007019dd  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManagerModuleList.cpp (function ??0CSharedData@CXTPSkinManagerModuleList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManagerModuleList.cpp
