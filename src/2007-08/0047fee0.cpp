// roc 2007-08 0047fee0  unit: G3D::Win32Window  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047fee0
//
// 0047fee0  6aff                 push -1
// 0047fee2  68bb5d7400           push 0x745dbb
// 0047fee7  64a100000000         mov eax, dword ptr fs:[0]
// 0047feed  50                   push eax
// 0047feee  51                   push ecx
// 0047feef  53                   push ebx
// 0047fef0  55                   push ebp
// 0047fef1  56                   push esi
// 0047fef2  57                   push edi
// 0047fef3  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047fef8  33c4                 xor eax, esp
// 0047fefa  50                   push eax
// 0047fefb  8d442418             lea eax, [esp + 0x18]
// 0047feff  64a300000000         mov dword ptr fs:[0], eax
// 0047ff05  8bf1                 mov esi, ecx
// 0047ff07  89742414             mov dword ptr [esp + 0x14], esi
// 0047ff0b  33ed                 xor ebp, ebp
// 0047ff0d  896e08               mov dword ptr [esi + 8], ebp
// 0047ff10  896e0c               mov dword ptr [esi + 0xc], ebp
// 0047ff13  896e04               mov dword ptr [esi + 4], ebp
// 0047ff16  8b442428             mov eax, dword ptr [esp + 0x28]
// 0047ff1a  68388e7900           push 0x798e38
// 0047ff1f  896c2424             mov dword ptr [esp + 0x24], ebp
// 0047ff23  894610               mov dword ptr [esi + 0x10], eax
// 0047ff26  ff157cd27700         call dword ptr [0x77d27c]
// 0047ff2c  8bf8                 mov edi, eax
// 0047ff2e  3bfd                 cmp edi, ebp
// 0047ff30  7447                 je 0x47ff79
// 0047ff32  68248e7900           push 0x798e24
// 0047ff37  57                   push edi
// 0047ff38  ff1588d27700         call dword ptr [0x77d288]
// 0047ff3e  8bd8                 mov ebx, eax
// 0047ff40  3bdd                 cmp ebx, ebp
// 0047ff42  742e                 je 0x47ff72
// 0047ff44  55                   push ebp
// 0047ff45  56                   push esi
// 0047ff46  6810887900           push 0x798810
// 0047ff4b  6800080000           push 0x800
// 0047ff50  55                   push ebp
// 0047ff51  ff15c8d27700         call dword ptr [0x77d2c8]
// 0047ff57  50                   push eax
// 0047ff58  ffd3                 call ebx
// 0047ff5a  85c0                 test eax, eax
// 0047ff5c  7514                 jne 0x47ff72
// 0047ff5e  8b06                 mov eax, dword ptr [esi]
// 0047ff60  8b08                 mov ecx, dword ptr [eax]
// 0047ff62  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0047ff65  6a01                 push 1
// 0047ff67  56                   push esi
// 0047ff68  6820fd4700           push 0x47fd20
// 0047ff6d  6a04                 push 4
// 0047ff6f  50                   push eax
// 0047ff70  ffd2                 call edx
// 0047ff72  57                   push edi
// 0047ff73  ff15dcd27700         call dword ptr [0x77d2dc]
// 0047ff79  8bc6                 mov eax, esi
// 0047ff7b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047ff7f  64890d00000000       mov dword ptr fs:[0], ecx
// 0047ff86  59                   pop ecx
// 0047ff87  5f                   pop edi
// 0047ff88  5e                   pop esi
// 0047ff89  5d                   pop ebp
// 0047ff8a  5b                   pop ebx
// 0047ff8b  83c410               add esp, 0x10
// 0047ff8e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0_DirectInput@_internal@G3D@@QAE@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
