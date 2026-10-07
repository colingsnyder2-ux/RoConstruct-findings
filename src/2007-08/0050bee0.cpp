// roc 2007-08 0050bee0  unit: seg_00500000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050bee0
//
// 0050bee0  6aff                 push -1
// 0050bee2  687c397400           push 0x74397c
// 0050bee7  64a100000000         mov eax, dword ptr fs:[0]
// 0050beed  50                   push eax
// 0050beee  51                   push ecx
// 0050beef  56                   push esi
// 0050bef0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050bef5  33c4                 xor eax, esp
// 0050bef7  50                   push eax
// 0050bef8  8d44240c             lea eax, [esp + 0xc]
// 0050befc  64a300000000         mov dword ptr fs:[0], eax
// 0050bf02  8bf1                 mov esi, ecx
// 0050bf04  89742408             mov dword ptr [esp + 8], esi
// 0050bf08  c706600c7a00         mov dword ptr [esi], 0x7a0c60
// 0050bf0e  807e4800             cmp byte ptr [esi + 0x48], 0
// 0050bf12  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0050bf1a  740c                 je 0x50bf28
// 0050bf1c  8b4640               mov eax, dword ptr [esi + 0x40]
// 0050bf1f  50                   push eax
// 0050bf20  e8cb38ffff           call 0x4ff7f0
// 0050bf25  83c404               add esp, 4
// 0050bf28  8d4e08               lea ecx, [esi + 8]
// 0050bf2b  c7464000000000       mov dword ptr [esi + 0x40], 0
// 0050bf32  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0050bf3a  ff15ace67700         call dword ptr [0x77e6ac]
// 0050bf40  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050bf44  64890d00000000       mov dword ptr fs:[0], ecx
// 0050bf4b  59                   pop ecx
// 0050bf4c  5e                   pop esi
// 0050bf4d  83c410               add esp, 0x10
// 0050bf50  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??1BinaryInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
