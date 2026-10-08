// from server: 100% by auto
// roc 2008-06 0047dcc0  unit: G3D::TextureManager::TextureArgs  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047dcc0
//
// 0047dcc0  6aff                 push -1
// 0047dcc2  68434f7c00           push 0x7c4f43
// 0047dcc7  64a100000000         mov eax, dword ptr fs:[0]
// 0047dccd  50                   push eax
// 0047dcce  64892500000000       mov dword ptr fs:[0], esp
// 0047dcd5  51                   push ecx
// 0047dcd6  56                   push esi
// 0047dcd7  57                   push edi
// 0047dcd8  8bf9                 mov edi, ecx
// 0047dcda  897c2408             mov dword ptr [esp + 8], edi
// 0047dcde  8d7708               lea esi, [edi + 8]
// 0047dce1  8bce                 mov ecx, esi
// 0047dce3  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0047dceb  e850f9ffff           call 0x47d640
// 0047dcf0  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0047dcf7  8d442420             lea eax, [esp + 0x20]
// 0047dcfb  50                   push eax
// 0047dcfc  8d4e04               lea ecx, [esi + 4]
// 0047dcff  c644241802           mov byte ptr [esp + 0x18], 2
// 0047dd04  ff150c248000         call dword ptr [0x80240c]
// 0047dd0a  dd44244c             fld qword ptr [esp + 0x4c]
// 0047dd0e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0047dd12  dd5e30               fstp qword ptr [esi + 0x30]
// 0047dd15  8b542440             mov edx, dword ptr [esp + 0x40]
// 0047dd19  8b442444             mov eax, dword ptr [esp + 0x44]
// 0047dd1d  894e20               mov dword ptr [esi + 0x20], ecx
// 0047dd20  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0047dd24  895624               mov dword ptr [esi + 0x24], edx
// 0047dd27  8b542454             mov edx, dword ptr [esp + 0x54]
// 0047dd2b  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0047dd2e  8d4f40               lea ecx, [edi + 0x40]
// 0047dd31  52                   push edx
// 0047dd32  894628               mov dword ptr [esi + 0x28], eax
// 0047dd35  e866b21100           call 0x598fa0
// 0047dd3a  8b442458             mov eax, dword ptr [esp + 0x58]
// 0047dd3e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0047dd42  8907                 mov dword ptr [edi], eax
// 0047dd44  894f48               mov dword ptr [edi + 0x48], ecx
// 0047dd47  c744241c70978100     mov dword ptr [esp + 0x1c], 0x819770
// 0047dd4f  8d4c2420             lea ecx, [esp + 0x20]
// 0047dd53  c644241403           mov byte ptr [esp + 0x14], 3
// 0047dd58  ff1568248000         call dword ptr [0x802468]
// 0047dd5e  8b442454             mov eax, dword ptr [esp + 0x54]
// 0047dd62  c744241c50978100     mov dword ptr [esp + 0x1c], 0x819750
// 0047dd6a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0047dd72  85c0                 test eax, eax
// 0047dd74  7427                 je 0x47dd9d
// 0047dd76  83c004               add eax, 4
// 0047dd79  50                   push eax
// 0047dd7a  ff15ac218000         call dword ptr [0x8021ac]
// 0047dd80  85c0                 test eax, eax
// 0047dd82  7519                 jne 0x47dd9d
// 0047dd84  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0047dd88  e803d0fdff           call 0x45ad90
// 0047dd8d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0047dd91  85c9                 test ecx, ecx
// 0047dd93  7408                 je 0x47dd9d
// 0047dd95  8b11                 mov edx, dword ptr [ecx]
// 0047dd97  8b02                 mov eax, dword ptr [edx]
// 0047dd99  6a01                 push 1
// 0047dd9b  ffd0                 call eax
// 0047dd9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047dda1  8bc7                 mov eax, edi
// 0047dda3  5f                   pop edi
// 0047dda4  5e                   pop esi
// 0047dda5  64890d00000000       mov dword ptr fs:[0], ecx
// 0047ddac  83c410               add esp, 0x10
// 0047ddaf  c24400               ret 0x44
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Node@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@VTextureArgs@TextureManager@2@V?$ReferenceCountedPointer@VTexture@G3D@@@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
