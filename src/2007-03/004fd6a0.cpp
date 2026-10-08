// roc 2007-03 004fd6a0  unit: seg_004f0000  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd6a0
//
// 004fd6a0  56                   push esi
// 004fd6a1  8bf1                 mov esi, ecx
// 004fd6a3  68e8fe7900           push 0x79fee8
// 004fd6a8  56                   push esi
// 004fd6a9  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fd6af  83c408               add esp, 8
// 004fd6b2  84c0                 test al, al
// 004fd6b4  7417                 je 0x4fd6cd
// 004fd6b6  6840bf8400           push 0x84bf40
// 004fd6bb  8d44240c             lea eax, [esp + 0xc]
// 004fd6bf  50                   push eax
// 004fd6c0  c7442410a0fe7900     mov dword ptr [esp + 0x10], 0x79fea0
// 004fd6c8  e861191200           call 0x61f02e
// 004fd6cd  55                   push ebp
// 004fd6ce  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004fd6d2  3b6e38               cmp ebp, dword ptr [esi + 0x38]
// 004fd6d5  7e17                 jle 0x4fd6ee
// 004fd6d7  6840bf8400           push 0x84bf40
// 004fd6dc  8d4c2410             lea ecx, [esp + 0x10]
// 004fd6e0  51                   push ecx
// 004fd6e1  c744241440fe7900     mov dword ptr [esp + 0x14], 0x79fe40
// 004fd6e9  e840191200           call 0x61f02e
// 004fd6ee  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004fd6f1  b856555555           mov eax, 0x55555556
// 004fd6f6  f7e9                 imul ecx
// 004fd6f8  53                   push ebx
// 004fd6f9  57                   push edi
// 004fd6fa  8b7e34               mov edi, dword ptr [esi + 0x34]
// 004fd6fd  8bc2                 mov eax, edx
// 004fd6ff  c1e81f               shr eax, 0x1f
// 004fd702  81ef0000a000         sub edi, 0xa00000
// 004fd708  03c2                 add eax, edx
// 004fd70a  3bf8                 cmp edi, eax
// 004fd70c  7d02                 jge 0x4fd710
// 004fd70e  8bf9                 mov edi, ecx
// 004fd710  837e4400             cmp dword ptr [esi + 0x44], 0
// 004fd714  b938fe7900           mov ecx, 0x79fe38
// 004fd719  7705                 ja 0x4fd720
// 004fd71b  b978bb7900           mov ecx, 0x79bb78
// 004fd720  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 004fd724  7205                 jb 0x4fd72b
// 004fd726  8b4604               mov eax, dword ptr [esi + 4]
// 004fd729  eb03                 jmp 0x4fd72e
// 004fd72b  8d4604               lea eax, [esi + 4]
// 004fd72e  51                   push ecx
// 004fd72f  50                   push eax
// 004fd730  ff155cea7700         call dword ptr [0x77ea5c]
// 004fd736  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004fd739  8bd8                 mov ebx, eax
// 004fd73b  53                   push ebx
// 004fd73c  57                   push edi
// 004fd73d  6a01                 push 1
// 004fd73f  51                   push ecx
// 004fd740  ff1560ea7700         call dword ptr [0x77ea60]
// 004fd746  53                   push ebx
// 004fd747  ff1580ea7700         call dword ptr [0x77ea80]
// 004fd74d  297e34               sub dword ptr [esi + 0x34], edi
// 004fd750  8b4630               mov eax, dword ptr [esi + 0x30]
// 004fd753  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004fd756  017e44               add dword ptr [esi + 0x44], edi
// 004fd759  297e3c               sub dword ptr [esi + 0x3c], edi
// 004fd75c  51                   push ecx
// 004fd75d  8d1438               lea edx, [eax + edi]
// 004fd760  52                   push edx
// 004fd761  50                   push eax
// 004fd762  e84969ffff           call 0x4f40b0
// 004fd767  83c428               add esp, 0x28
// 004fd76a  55                   push ebp
// 004fd76b  8bce                 mov ecx, esi
// 004fd76d  e86e8effff           call 0x4f65e0
// 004fd772  5f                   pop edi
// 004fd773  5b                   pop ebx
// 004fd774  5d                   pop ebp
// 004fd775  5e                   pop esi
// 004fd776  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryOutput.cpp (function ?reserveBytesWhenOutOfMemory@BinaryOutput@G3D@@AAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/BinaryOutput.cpp
