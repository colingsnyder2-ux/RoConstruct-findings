// roc 2009-12 004d1da0  unit: G3D::TextureManager::TextureArgs  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d1da0
//
// 004d1da0  6aff                 push -1
// 004d1da2  6853349300           push 0x933453
// 004d1da7  64a100000000         mov eax, dword ptr fs:[0]
// 004d1dad  50                   push eax
// 004d1dae  64892500000000       mov dword ptr fs:[0], esp
// 004d1db5  51                   push ecx
// 004d1db6  56                   push esi
// 004d1db7  57                   push edi
// 004d1db8  8bf9                 mov edi, ecx
// 004d1dba  897c2408             mov dword ptr [esp + 8], edi
// 004d1dbe  8d7708               lea esi, [edi + 8]
// 004d1dc1  8bce                 mov ecx, esi
// 004d1dc3  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004d1dcb  e850f9ffff           call 0x4d1720
// 004d1dd0  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004d1dd7  8d442420             lea eax, [esp + 0x20]
// 004d1ddb  50                   push eax
// 004d1ddc  8d4e04               lea ecx, [esi + 4]
// 004d1ddf  c644241802           mov byte ptr [esp + 0x18], 2
// 004d1de4  ff159cb69800         call dword ptr [0x98b69c]
// 004d1dea  dd44244c             fld qword ptr [esp + 0x4c]
// 004d1dee  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004d1df2  dd5e30               fstp qword ptr [esi + 0x30]
// 004d1df5  8b542440             mov edx, dword ptr [esp + 0x40]
// 004d1df9  8b442444             mov eax, dword ptr [esp + 0x44]
// 004d1dfd  894e20               mov dword ptr [esi + 0x20], ecx
// 004d1e00  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004d1e04  895624               mov dword ptr [esi + 0x24], edx
// 004d1e07  8b542454             mov edx, dword ptr [esp + 0x54]
// 004d1e0b  894e2c               mov dword ptr [esi + 0x2c], ecx
// 004d1e0e  8d4f40               lea ecx, [edi + 0x40]
// 004d1e11  52                   push edx
// 004d1e12  894628               mov dword ptr [esi + 0x28], eax
// 004d1e15  e8569df7ff           call 0x44bb70
// 004d1e1a  8b442458             mov eax, dword ptr [esp + 0x58]
// 004d1e1e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004d1e22  8907                 mov dword ptr [edi], eax
// 004d1e24  894f48               mov dword ptr [edi + 0x48], ecx
// 004d1e27  c744241c20e69a00     mov dword ptr [esp + 0x1c], 0x9ae620
// 004d1e2f  8d4c2420             lea ecx, [esp + 0x20]
// 004d1e33  c644241403           mov byte ptr [esp + 0x14], 3
// 004d1e38  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d1e3e  8b442454             mov eax, dword ptr [esp + 0x54]
// 004d1e42  c744241c08e69a00     mov dword ptr [esp + 0x1c], 0x9ae608
// 004d1e4a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004d1e52  85c0                 test eax, eax
// 004d1e54  7427                 je 0x4d1e7d
// 004d1e56  83c004               add eax, 4
// 004d1e59  50                   push eax
// 004d1e5a  ff1508b29800         call dword ptr [0x98b208]
// 004d1e60  85c0                 test eax, eax
// 004d1e62  7519                 jne 0x4d1e7d
// 004d1e64  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004d1e68  e8b391f7ff           call 0x44b020
// 004d1e6d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004d1e71  85c9                 test ecx, ecx
// 004d1e73  7408                 je 0x4d1e7d
// 004d1e75  8b11                 mov edx, dword ptr [ecx]
// 004d1e77  8b02                 mov eax, dword ptr [edx]
// 004d1e79  6a01                 push 1
// 004d1e7b  ffd0                 call eax
// 004d1e7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d1e81  8bc7                 mov eax, edi
// 004d1e83  5f                   pop edi
// 004d1e84  5e                   pop esi
// 004d1e85  64890d00000000       mov dword ptr fs:[0], ecx
// 004d1e8c  83c410               add esp, 0x10
// 004d1e8f  c24400               ret 0x44
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Node@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@VTextureArgs@TextureManager@2@V?$ReferenceCountedPointer@VTexture@G3D@@@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
