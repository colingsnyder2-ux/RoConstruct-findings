// roc 2009-06 004af100  unit: G3D::Win32Window  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af100
//
// 004af100  6aff                 push -1
// 004af102  68b47f8500           push 0x857fb4
// 004af107  64a100000000         mov eax, dword ptr fs:[0]
// 004af10d  50                   push eax
// 004af10e  64892500000000       mov dword ptr fs:[0], esp
// 004af115  51                   push ecx
// 004af116  53                   push ebx
// 004af117  56                   push esi
// 004af118  8bf1                 mov esi, ecx
// 004af11a  33db                 xor ebx, ebx
// 004af11c  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 004af122  895e04               mov dword ptr [esi + 4], ebx
// 004af125  89742408             mov dword ptr [esp + 8], esi
// 004af129  895e08               mov dword ptr [esi + 8], ebx
// 004af12c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004af130  50                   push eax
// 004af131  8d4e10               lea ecx, [esi + 0x10]
// 004af134  895c2418             mov dword ptr [esp + 0x18], ebx
// 004af138  c706043d8c00         mov dword ptr [esi], 0x8c3d04
// 004af13e  ff15b8e48900         call dword ptr [0x89e4b8]
// 004af144  885e2c               mov byte ptr [esi + 0x2c], bl
// 004af147  c644241401           mov byte ptr [esp + 0x14], 1
// 004af14c  391d94d1a300         cmp dword ptr [0xa3d194], ebx
// 004af152  7446                 je 0x4af19a
// 004af154  a138d4a300           mov eax, dword ptr [0xa3d438]
// 004af159  3bc3                 cmp eax, ebx
// 004af15b  7521                 jne 0x4af17e
// 004af15d  53                   push ebx
// 004af15e  6a0a                 push 0xa
// 004af160  b934d4a300           mov ecx, 0xa3d434
// 004af165  e866b3ffff           call 0x4aa4d0
// 004af16a  8b0d34d4a300         mov ecx, dword ptr [0xa3d434]
// 004af170  51                   push ecx
// 004af171  6a0a                 push 0xa
// 004af173  ff1594d1a300         call dword ptr [0xa3d194]
// 004af179  a138d4a300           mov eax, dword ptr [0xa3d438]
// 004af17e  8b1534d4a300         mov edx, dword ptr [0xa3d434]
// 004af184  57                   push edi
// 004af185  8b7c82fc             mov edi, dword ptr [edx + eax*4 - 4]
// 004af189  53                   push ebx
// 004af18a  48                   dec eax
// 004af18b  50                   push eax
// 004af18c  b934d4a300           mov ecx, 0xa3d434
// 004af191  e83ab3ffff           call 0x4aa4d0
// 004af196  897e0c               mov dword ptr [esi + 0xc], edi
// 004af199  5f                   pop edi
// 004af19a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004af19e  8bc6                 mov eax, esi
// 004af1a0  5e                   pop esi
// 004af1a1  5b                   pop ebx
// 004af1a2  64890d00000000       mov dword ptr fs:[0], ecx
// 004af1a9  83c410               add esp, 0x10
// 004af1ac  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??0Milestone@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
