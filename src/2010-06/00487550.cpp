// roc 2010-06 00487550  unit: G3D::VARArea  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487550
//
// 00487550  6aff                 push -1
// 00487552  68245f9800           push 0x985f24
// 00487557  64a100000000         mov eax, dword ptr fs:[0]
// 0048755d  50                   push eax
// 0048755e  64892500000000       mov dword ptr fs:[0], esp
// 00487565  83ec08               sub esp, 8
// 00487568  53                   push ebx
// 00487569  33db                 xor ebx, ebx
// 0048756b  56                   push esi
// 0048756c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00487570  895c2408             mov dword ptr [esp + 8], ebx
// 00487574  e877feffff           call 0x4873f0
// 00487579  6a38                 push 0x38
// 0048757b  e820043200           call 0x7a79a0
// 00487580  83c404               add esp, 4
// 00487583  8944240c             mov dword ptr [esp + 0xc], eax
// 00487587  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0048758f  3bc3                 cmp eax, ebx
// 00487591  7413                 je 0x4875a6
// 00487593  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00487597  8b542424             mov edx, dword ptr [esp + 0x24]
// 0048759b  51                   push ecx
// 0048759c  52                   push edx
// 0048759d  8bc8                 mov ecx, eax
// 0048759f  e8ccf7ffff           call 0x486d70
// 004875a4  eb02                 jmp 0x4875a8
// 004875a6  33c0                 xor eax, eax
// 004875a8  8b742420             mov esi, dword ptr [esp + 0x20]
// 004875ac  50                   push eax
// 004875ad  8bce                 mov ecx, esi
// 004875af  885c241c             mov byte ptr [esp + 0x1c], bl
// 004875b3  891e                 mov dword ptr [esi], ebx
// 004875b5  e866f7ffff           call 0x486d20
// 004875ba  56                   push esi
// 004875bb  b92031c000           mov ecx, 0xc03120
// 004875c0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004875c4  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004875cc  e8fffcffff           call 0x4872d0
// 004875d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004875d5  8bc6                 mov eax, esi
// 004875d7  5e                   pop esi
// 004875d8  5b                   pop ebx
// 004875d9  64890d00000000       mov dword ptr fs:[0], ecx
// 004875e0  83c414               add esp, 0x14
// 004875e3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?create@VARArea@G3D@@SA?AV?$ReferenceCountedPointer@VVARArea@G3D@@@2@IW4UsageHint@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
