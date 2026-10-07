// roc 2009-06 00517510  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00517510
//
// 00517510  56                   push esi
// 00517511  8bf1                 mov esi, ecx
// 00517513  8b4610               mov eax, dword ptr [esi + 0x10]
// 00517516  85c0                 test eax, eax
// 00517518  742c                 je 0x517546
// 0051751a  83c004               add eax, 4
// 0051751d  50                   push eax
// 0051751e  ff15a4e18900         call dword ptr [0x89e1a4]
// 00517524  85c0                 test eax, eax
// 00517526  7517                 jne 0x51753f
// 00517528  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0051752b  e850d8f2ff           call 0x444d80
// 00517530  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00517533  85c9                 test ecx, ecx
// 00517535  7408                 je 0x51753f
// 00517537  8b01                 mov eax, dword ptr [ecx]
// 00517539  8b10                 mov edx, dword ptr [eax]
// 0051753b  6a01                 push 1
// 0051753d  ffd2                 call edx
// 0051753f  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00517546  5e                   pop esi
// 00517547  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
