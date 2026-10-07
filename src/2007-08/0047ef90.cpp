// roc 2007-08 0047ef90  unit: G3D::Win32Window  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047ef90
//
// 0047ef90  6aff                 push -1
// 0047ef92  680cff7400           push 0x74ff0c
// 0047ef97  64a100000000         mov eax, dword ptr fs:[0]
// 0047ef9d  50                   push eax
// 0047ef9e  51                   push ecx
// 0047ef9f  56                   push esi
// 0047efa0  57                   push edi
// 0047efa1  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047efa6  33c4                 xor eax, esp
// 0047efa8  50                   push eax
// 0047efa9  8d442410             lea eax, [esp + 0x10]
// 0047efad  64a300000000         mov dword ptr fs:[0], eax
// 0047efb3  8bf1                 mov esi, ecx
// 0047efb5  8974240c             mov dword ptr [esp + 0xc], esi
// 0047efb9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0047efbd  8b07                 mov eax, dword ptr [edi]
// 0047efbf  8d4f04               lea ecx, [edi + 4]
// 0047efc2  51                   push ecx
// 0047efc3  8d4e04               lea ecx, [esi + 4]
// 0047efc6  8906                 mov dword ptr [esi], eax
// 0047efc8  ff159ce67700         call dword ptr [0x77e69c]
// 0047efce  8a5720               mov dl, byte ptr [edi + 0x20]
// 0047efd1  885620               mov byte ptr [esi + 0x20], dl
// 0047efd4  8b4724               mov eax, dword ptr [edi + 0x24]
// 0047efd7  894624               mov dword ptr [esi + 0x24], eax
// 0047efda  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0047efdd  83c72c               add edi, 0x2c
// 0047efe0  894e28               mov dword ptr [esi + 0x28], ecx
// 0047efe3  57                   push edi
// 0047efe4  8d4e2c               lea ecx, [esi + 0x2c]
// 0047efe7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0047efef  e87ce7ffff           call 0x47d770
// 0047eff4  8bc6                 mov eax, esi
// 0047eff6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047effa  64890d00000000       mov dword ptr fs:[0], ecx
// 0047f001  59                   pop ecx
// 0047f002  5f                   pop edi
// 0047f003  5e                   pop esi
// 0047f004  83c410               add esp, 0x10
// 0047f007  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0JoystickInfo@_DirectInput@_internal@G3D@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
