// roc 2007-08 0047a660  unit: G3D::TextureManager::TextureArgs  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047a660
//
// 0047a660  6aff                 push -1
// 0047a662  688b557400           push 0x74558b
// 0047a667  64a100000000         mov eax, dword ptr fs:[0]
// 0047a66d  50                   push eax
// 0047a66e  51                   push ecx
// 0047a66f  56                   push esi
// 0047a670  57                   push edi
// 0047a671  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047a676  33c4                 xor eax, esp
// 0047a678  50                   push eax
// 0047a679  8d442410             lea eax, [esp + 0x10]
// 0047a67d  64a300000000         mov dword ptr fs:[0], eax
// 0047a683  8bf9                 mov edi, ecx
// 0047a685  897c240c             mov dword ptr [esp + 0xc], edi
// 0047a689  8d7708               lea esi, [edi + 8]
// 0047a68c  8bce                 mov ecx, esi
// 0047a68e  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0047a696  e8c5f8ffff           call 0x479f60
// 0047a69b  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0047a6a2  8d442424             lea eax, [esp + 0x24]
// 0047a6a6  50                   push eax
// 0047a6a7  8d4e04               lea ecx, [esi + 4]
// 0047a6aa  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0047a6af  ff1590e67700         call dword ptr [0x77e690]
// 0047a6b5  dd442450             fld qword ptr [esp + 0x50]
// 0047a6b9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0047a6bd  dd5e30               fstp qword ptr [esi + 0x30]
// 0047a6c0  8b542444             mov edx, dword ptr [esp + 0x44]
// 0047a6c4  8b442448             mov eax, dword ptr [esp + 0x48]
// 0047a6c8  894e20               mov dword ptr [esi + 0x20], ecx
// 0047a6cb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0047a6cf  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0047a6d2  895624               mov dword ptr [esi + 0x24], edx
// 0047a6d5  894628               mov dword ptr [esi + 0x28], eax
// 0047a6d8  8b742458             mov esi, dword ptr [esp + 0x58]
// 0047a6dc  8d4f40               lea ecx, [edi + 0x40]
// 0047a6df  56                   push esi
// 0047a6e0  e88ba8ffff           call 0x474f70
// 0047a6e5  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0047a6e9  8b442460             mov eax, dword ptr [esp + 0x60]
// 0047a6ed  8d4c2420             lea ecx, [esp + 0x20]
// 0047a6f1  8917                 mov dword ptr [edi], edx
// 0047a6f3  894748               mov dword ptr [edi + 0x48], eax
// 0047a6f6  c644241800           mov byte ptr [esp + 0x18], 0
// 0047a6fb  e800d7fdff           call 0x457e00
// 0047a700  85f6                 test esi, esi
// 0047a702  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0047a70a  741f                 je 0x47a72b
// 0047a70c  8d4e04               lea ecx, [esi + 4]
// 0047a70f  51                   push ecx
// 0047a710  ff15e8d27700         call dword ptr [0x77d2e8]
// 0047a716  85c0                 test eax, eax
// 0047a718  7511                 jne 0x47a72b
// 0047a71a  8bce                 mov ecx, esi
// 0047a71c  e8afd6fdff           call 0x457dd0
// 0047a721  8b16                 mov edx, dword ptr [esi]
// 0047a723  8b02                 mov eax, dword ptr [edx]
// 0047a725  6a01                 push 1
// 0047a727  8bce                 mov ecx, esi
// 0047a729  ffd0                 call eax
// 0047a72b  8bc7                 mov eax, edi
// 0047a72d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047a731  64890d00000000       mov dword ptr fs:[0], ecx
// 0047a738  59                   pop ecx
// 0047a739  5f                   pop edi
// 0047a73a  5e                   pop esi
// 0047a73b  83c410               add esp, 0x10
// 0047a73e  c24400               ret 0x44
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Node@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@VTextureArgs@TextureManager@2@V?$ReferenceCountedPointer@VTexture@G3D@@@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
