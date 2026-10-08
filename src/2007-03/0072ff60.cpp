// roc 2007-03 0072ff60  unit: seg_00720000  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072ff60
//
// 0072ff60  6aff                 push -1
// 0072ff62  681bcd7600           push 0x76cd1b
// 0072ff67  64a100000000         mov eax, dword ptr fs:[0]
// 0072ff6d  50                   push eax
// 0072ff6e  51                   push ecx
// 0072ff6f  56                   push esi
// 0072ff70  57                   push edi
// 0072ff71  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0072ff76  33c4                 xor eax, esp
// 0072ff78  50                   push eax
// 0072ff79  8d442410             lea eax, [esp + 0x10]
// 0072ff7d  64a300000000         mov dword ptr fs:[0], eax
// 0072ff83  8bf9                 mov edi, ecx
// 0072ff85  897c240c             mov dword ptr [esp + 0xc], edi
// 0072ff89  8d7708               lea esi, [edi + 8]
// 0072ff8c  8bce                 mov ecx, esi
// 0072ff8e  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0072ff96  e8c5f8ffff           call 0x72f860
// 0072ff9b  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0072ffa2  8d442424             lea eax, [esp + 0x24]
// 0072ffa6  50                   push eax
// 0072ffa7  8d4e04               lea ecx, [esi + 4]
// 0072ffaa  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0072ffaf  ff154ce77700         call dword ptr [0x77e74c]
// 0072ffb5  dd442450             fld qword ptr [esp + 0x50]
// 0072ffb9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0072ffbd  dd5e30               fstp qword ptr [esi + 0x30]
// 0072ffc0  8b542444             mov edx, dword ptr [esp + 0x44]
// 0072ffc4  8b442448             mov eax, dword ptr [esp + 0x48]
// 0072ffc8  894e20               mov dword ptr [esi + 0x20], ecx
// 0072ffcb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072ffcf  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0072ffd2  895624               mov dword ptr [esi + 0x24], edx
// 0072ffd5  894628               mov dword ptr [esi + 0x28], eax
// 0072ffd8  8b742458             mov esi, dword ptr [esp + 0x58]
// 0072ffdc  8d4f40               lea ecx, [edi + 0x40]
// 0072ffdf  56                   push esi
// 0072ffe0  e8ab50d4ff           call 0x475090
// 0072ffe5  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0072ffe9  8b442460             mov eax, dword ptr [esp + 0x60]
// 0072ffed  8d4c2420             lea ecx, [esp + 0x20]
// 0072fff1  8917                 mov dword ptr [edi], edx
// 0072fff3  894748               mov dword ptr [edi + 0x48], eax
// 0072fff6  c644241800           mov byte ptr [esp + 0x18], 0
// 0072fffb  e8201fd9ff           call 0x4c1f20
// 00730000  85f6                 test esi, esi
// 00730002  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0073000a  741f                 je 0x73002b
// 0073000c  8d4e04               lea ecx, [esi + 4]
// 0073000f  51                   push ecx
// 00730010  ff15a8d27700         call dword ptr [0x77d2a8]
// 00730016  85c0                 test eax, eax
// 00730018  7511                 jne 0x73002b
// 0073001a  8bce                 mov ecx, esi
// 0073001c  e89f33d3ff           call 0x4633c0
// 00730021  8b16                 mov edx, dword ptr [esi]
// 00730023  8b02                 mov eax, dword ptr [edx]
// 00730025  6a01                 push 1
// 00730027  8bce                 mov ecx, esi
// 00730029  ffd0                 call eax
// 0073002b  8bc7                 mov eax, edi
// 0073002d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00730031  64890d00000000       mov dword ptr fs:[0], ecx
// 00730038  59                   pop ecx
// 00730039  5f                   pop edi
// 0073003a  5e                   pop esi
// 0073003b  83c410               add esp, 0x10
// 0073003e  c24400               ret 0x44
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Node@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@VTextureArgs@TextureManager@2@V?$ReferenceCountedPointer@VTexture@G3D@@@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
