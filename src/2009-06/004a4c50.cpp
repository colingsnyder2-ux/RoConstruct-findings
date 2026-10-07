// roc 2009-06 004a4c50  unit: G3D::TextureManager::TextureArgs  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4c50
//
// 004a4c50  6aff                 push -1
// 004a4c52  6858238500           push 0x852358
// 004a4c57  64a100000000         mov eax, dword ptr fs:[0]
// 004a4c5d  50                   push eax
// 004a4c5e  64892500000000       mov dword ptr fs:[0], esp
// 004a4c65  51                   push ecx
// 004a4c66  56                   push esi
// 004a4c67  8bf1                 mov esi, ecx
// 004a4c69  57                   push edi
// 004a4c6a  89742408             mov dword ptr [esp + 8], esi
// 004a4c6e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004a4c72  8d4704               lea eax, [edi + 4]
// 004a4c75  50                   push eax
// 004a4c76  8d4e04               lea ecx, [esi + 4]
// 004a4c79  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004a4c81  c70628a18b00         mov dword ptr [esi], 0x8ba128
// 004a4c87  ff15b8e48900         call dword ptr [0x89e4b8]
// 004a4c8d  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004a4c90  894e20               mov dword ptr [esi + 0x20], ecx
// 004a4c93  8b5724               mov edx, dword ptr [edi + 0x24]
// 004a4c96  895624               mov dword ptr [esi + 0x24], edx
// 004a4c99  8b4728               mov eax, dword ptr [edi + 0x28]
// 004a4c9c  894628               mov dword ptr [esi + 0x28], eax
// 004a4c9f  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 004a4ca2  894e2c               mov dword ptr [esi + 0x2c], ecx
// 004a4ca5  dd4730               fld qword ptr [edi + 0x30]
// 004a4ca8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a4cac  dd5e30               fstp qword ptr [esi + 0x30]
// 004a4caf  5f                   pop edi
// 004a4cb0  8bc6                 mov eax, esi
// 004a4cb2  5e                   pop esi
// 004a4cb3  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4cba  83c410               add esp, 0x10
// 004a4cbd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
