// from server: 100% by auto
// roc 2010-06 0090cc30  unit: G3D::TextureManager::TextureArgs  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090cc30
//
// 0090cc30  6aff                 push -1
// 0090cc32  6853119c00           push 0x9c1153
// 0090cc37  64a100000000         mov eax, dword ptr fs:[0]
// 0090cc3d  50                   push eax
// 0090cc3e  64892500000000       mov dword ptr fs:[0], esp
// 0090cc45  51                   push ecx
// 0090cc46  56                   push esi
// 0090cc47  57                   push edi
// 0090cc48  8bf9                 mov edi, ecx
// 0090cc4a  897c2408             mov dword ptr [esp + 8], edi
// 0090cc4e  8d7708               lea esi, [edi + 8]
// 0090cc51  8bce                 mov ecx, esi
// 0090cc53  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0090cc5b  e850f9ffff           call 0x90c5b0
// 0090cc60  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0090cc67  8d442420             lea eax, [esp + 0x20]
// 0090cc6b  50                   push eax
// 0090cc6c  8d4e04               lea ecx, [esi + 4]
// 0090cc6f  c644241802           mov byte ptr [esp + 0x18], 2
// 0090cc74  ff1568a49e00         call dword ptr [0x9ea468]
// 0090cc7a  dd44244c             fld qword ptr [esp + 0x4c]
// 0090cc7e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0090cc82  dd5e30               fstp qword ptr [esi + 0x30]
// 0090cc85  8b542440             mov edx, dword ptr [esp + 0x40]
// 0090cc89  8b442444             mov eax, dword ptr [esp + 0x44]
// 0090cc8d  894e20               mov dword ptr [esi + 0x20], ecx
// 0090cc90  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0090cc94  895624               mov dword ptr [esi + 0x24], edx
// 0090cc97  8b542454             mov edx, dword ptr [esp + 0x54]
// 0090cc9b  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0090cc9e  8d4f40               lea ecx, [edi + 0x40]
// 0090cca1  52                   push edx
// 0090cca2  894628               mov dword ptr [esi + 0x28], eax
// 0090cca5  e876a0b7ff           call 0x486d20
// 0090ccaa  8b442458             mov eax, dword ptr [esp + 0x58]
// 0090ccae  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0090ccb2  8907                 mov dword ptr [edi], eax
// 0090ccb4  894f48               mov dword ptr [edi + 0x48], ecx
// 0090ccb7  c744241c44e8a100     mov dword ptr [esp + 0x1c], 0xa1e844
// 0090ccbf  8d4c2420             lea ecx, [esp + 0x20]
// 0090ccc3  c644241403           mov byte ptr [esp + 0x14], 3
// 0090ccc8  ff1500a49e00         call dword ptr [0x9ea400]
// 0090ccce  8b442454             mov eax, dword ptr [esp + 0x54]
// 0090ccd2  c744241c2ce8a100     mov dword ptr [esp + 0x1c], 0xa1e82c
// 0090ccda  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0090cce2  85c0                 test eax, eax
// 0090cce4  7427                 je 0x90cd0d
// 0090cce6  83c004               add eax, 4
// 0090cce9  50                   push eax
// 0090ccea  ff157ca39e00         call dword ptr [0x9ea37c]
// 0090ccf0  85c0                 test eax, eax
// 0090ccf2  7519                 jne 0x90cd0d
// 0090ccf4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0090ccf8  e8236eb7ff           call 0x483b20
// 0090ccfd  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0090cd01  85c9                 test ecx, ecx
// 0090cd03  7408                 je 0x90cd0d
// 0090cd05  8b11                 mov edx, dword ptr [ecx]
// 0090cd07  8b02                 mov eax, dword ptr [edx]
// 0090cd09  6a01                 push 1
// 0090cd0b  ffd0                 call eax
// 0090cd0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0090cd11  8bc7                 mov eax, edi
// 0090cd13  5f                   pop edi
// 0090cd14  5e                   pop esi
// 0090cd15  64890d00000000       mov dword ptr fs:[0], ecx
// 0090cd1c  83c410               add esp, 0x10
// 0090cd1f  c24400               ret 0x44
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Node@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@VTextureArgs@TextureManager@2@V?$ReferenceCountedPointer@VTexture@G3D@@@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
