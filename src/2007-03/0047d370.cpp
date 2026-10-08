// roc 2007-03 0047d370  unit: seg_00470000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047d370
//
// 0047d370  6aff                 push -1
// 0047d372  68fc7b7400           push 0x747bfc
// 0047d377  64a100000000         mov eax, dword ptr fs:[0]
// 0047d37d  50                   push eax
// 0047d37e  51                   push ecx
// 0047d37f  56                   push esi
// 0047d380  57                   push edi
// 0047d381  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047d386  33c4                 xor eax, esp
// 0047d388  50                   push eax
// 0047d389  8d442410             lea eax, [esp + 0x10]
// 0047d38d  64a300000000         mov dword ptr fs:[0], eax
// 0047d393  8bf1                 mov esi, ecx
// 0047d395  8974240c             mov dword ptr [esp + 0xc], esi
// 0047d399  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0047d39d  8b07                 mov eax, dword ptr [edi]
// 0047d39f  8d4f04               lea ecx, [edi + 4]
// 0047d3a2  51                   push ecx
// 0047d3a3  8d4e04               lea ecx, [esi + 4]
// 0047d3a6  8906                 mov dword ptr [esi], eax
// 0047d3a8  ff157ce77700         call dword ptr [0x77e77c]
// 0047d3ae  8a5720               mov dl, byte ptr [edi + 0x20]
// 0047d3b1  885620               mov byte ptr [esi + 0x20], dl
// 0047d3b4  8b4724               mov eax, dword ptr [edi + 0x24]
// 0047d3b7  894624               mov dword ptr [esi + 0x24], eax
// 0047d3ba  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0047d3bd  83c72c               add edi, 0x2c
// 0047d3c0  894e28               mov dword ptr [esi + 0x28], ecx
// 0047d3c3  57                   push edi
// 0047d3c4  8d4e2c               lea ecx, [esi + 0x2c]
// 0047d3c7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0047d3cf  e8ace7ffff           call 0x47bb80
// 0047d3d4  8bc6                 mov eax, esi
// 0047d3d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047d3da  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d3e1  59                   pop ecx
// 0047d3e2  5f                   pop edi
// 0047d3e3  5e                   pop esi
// 0047d3e4  83c410               add esp, 0x10
// 0047d3e7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0JoystickInfo@_DirectInput@_internal@G3D@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
