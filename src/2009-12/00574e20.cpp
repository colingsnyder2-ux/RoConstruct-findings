// roc 2009-12 00574e20  unit: RBX::RbxParticleEmitter  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00574e20
//
// 00574e20  53                   push ebx
// 00574e21  55                   push ebp
// 00574e22  56                   push esi
// 00574e23  8bf1                 mov esi, ecx
// 00574e25  57                   push edi
// 00574e26  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00574e2a  d907                 fld dword ptr [edi]
// 00574e2c  8d9f88000000         lea ebx, [edi + 0x88]
// 00574e32  d91e                 fstp dword ptr [esi]
// 00574e34  8dae88000000         lea ebp, [esi + 0x88]
// 00574e3a  d94704               fld dword ptr [edi + 4]
// 00574e3d  53                   push ebx
// 00574e3e  d95e04               fstp dword ptr [esi + 4]
// 00574e41  d94708               fld dword ptr [edi + 8]
// 00574e44  d95e08               fstp dword ptr [esi + 8]
// 00574e47  d9470c               fld dword ptr [edi + 0xc]
// 00574e4a  d95e0c               fstp dword ptr [esi + 0xc]
// 00574e4d  d94710               fld dword ptr [edi + 0x10]
// 00574e50  d95e10               fstp dword ptr [esi + 0x10]
// 00574e53  d94714               fld dword ptr [edi + 0x14]
// 00574e56  d95e14               fstp dword ptr [esi + 0x14]
// 00574e59  d94718               fld dword ptr [edi + 0x18]
// 00574e5c  d95e18               fstp dword ptr [esi + 0x18]
// 00574e5f  d9471c               fld dword ptr [edi + 0x1c]
// 00574e62  d95e1c               fstp dword ptr [esi + 0x1c]
// 00574e65  d94720               fld dword ptr [edi + 0x20]
// 00574e68  d95e20               fstp dword ptr [esi + 0x20]
// 00574e6b  d94724               fld dword ptr [edi + 0x24]
// 00574e6e  d95e24               fstp dword ptr [esi + 0x24]
// 00574e71  d94728               fld dword ptr [edi + 0x28]
// 00574e74  d95e28               fstp dword ptr [esi + 0x28]
// 00574e77  d9472c               fld dword ptr [edi + 0x2c]
// 00574e7a  d95e2c               fstp dword ptr [esi + 0x2c]
// 00574e7d  d94730               fld dword ptr [edi + 0x30]
// 00574e80  d95e30               fstp dword ptr [esi + 0x30]
// 00574e83  d94734               fld dword ptr [edi + 0x34]
// 00574e86  d95e34               fstp dword ptr [esi + 0x34]
// 00574e89  d94738               fld dword ptr [edi + 0x38]
// 00574e8c  d95e38               fstp dword ptr [esi + 0x38]
// 00574e8f  d9473c               fld dword ptr [edi + 0x3c]
// 00574e92  d95e3c               fstp dword ptr [esi + 0x3c]
// 00574e95  d94740               fld dword ptr [edi + 0x40]
// 00574e98  d95e40               fstp dword ptr [esi + 0x40]
// 00574e9b  d94744               fld dword ptr [edi + 0x44]
// 00574e9e  d95e44               fstp dword ptr [esi + 0x44]
// 00574ea1  8b4748               mov eax, dword ptr [edi + 0x48]
// 00574ea4  894648               mov dword ptr [esi + 0x48], eax
// 00574ea7  8a4f4c               mov cl, byte ptr [edi + 0x4c]
// 00574eaa  884e4c               mov byte ptr [esi + 0x4c], cl
// 00574ead  d94750               fld dword ptr [edi + 0x50]
// 00574eb0  d95e50               fstp dword ptr [esi + 0x50]
// 00574eb3  8bcd                 mov ecx, ebp
// 00574eb5  d94754               fld dword ptr [edi + 0x54]
// 00574eb8  d95e54               fstp dword ptr [esi + 0x54]
// 00574ebb  d94758               fld dword ptr [edi + 0x58]
// 00574ebe  d95e58               fstp dword ptr [esi + 0x58]
// 00574ec1  d9475c               fld dword ptr [edi + 0x5c]
// 00574ec4  d95e5c               fstp dword ptr [esi + 0x5c]
// 00574ec7  d94760               fld dword ptr [edi + 0x60]
// 00574eca  d95e60               fstp dword ptr [esi + 0x60]
// 00574ecd  d94764               fld dword ptr [edi + 0x64]
// 00574ed0  d95e64               fstp dword ptr [esi + 0x64]
// 00574ed3  d94768               fld dword ptr [edi + 0x68]
// 00574ed6  d95e68               fstp dword ptr [esi + 0x68]
// 00574ed9  d9476c               fld dword ptr [edi + 0x6c]
// 00574edc  d95e6c               fstp dword ptr [esi + 0x6c]
// 00574edf  d94770               fld dword ptr [edi + 0x70]
// 00574ee2  d95e70               fstp dword ptr [esi + 0x70]
// 00574ee5  d94774               fld dword ptr [edi + 0x74]
// 00574ee8  d95e74               fstp dword ptr [esi + 0x74]
// 00574eeb  d94778               fld dword ptr [edi + 0x78]
// 00574eee  d95e78               fstp dword ptr [esi + 0x78]
// 00574ef1  d9477c               fld dword ptr [edi + 0x7c]
// 00574ef4  d95e7c               fstp dword ptr [esi + 0x7c]
// 00574ef7  dd8780000000         fld qword ptr [edi + 0x80]
// 00574efd  dd9e80000000         fstp qword ptr [esi + 0x80]
// 00574f03  e8f8e90700           call 0x5f3900
// 00574f08  d94324               fld dword ptr [ebx + 0x24]
// 00574f0b  d95d24               fstp dword ptr [ebp + 0x24]
// 00574f0e  d94328               fld dword ptr [ebx + 0x28]
// 00574f11  d95d28               fstp dword ptr [ebp + 0x28]
// 00574f14  d9432c               fld dword ptr [ebx + 0x2c]
// 00574f17  8d9fb8000000         lea ebx, [edi + 0xb8]
// 00574f1d  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00574f20  8daeb8000000         lea ebp, [esi + 0xb8]
// 00574f26  53                   push ebx
// 00574f27  8bcd                 mov ecx, ebp
// 00574f29  e8d2e90700           call 0x5f3900
// 00574f2e  d94324               fld dword ptr [ebx + 0x24]
// 00574f31  d95d24               fstp dword ptr [ebp + 0x24]
// 00574f34  8bc6                 mov eax, esi
// 00574f36  d94328               fld dword ptr [ebx + 0x28]
// 00574f39  d95d28               fstp dword ptr [ebp + 0x28]
// 00574f3c  d9432c               fld dword ptr [ebx + 0x2c]
// 00574f3f  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00574f42  d987e8000000         fld dword ptr [edi + 0xe8]
// 00574f48  d99ee8000000         fstp dword ptr [esi + 0xe8]
// 00574f4e  d987ec000000         fld dword ptr [edi + 0xec]
// 00574f54  d99eec000000         fstp dword ptr [esi + 0xec]
// 00574f5a  d987f0000000         fld dword ptr [edi + 0xf0]
// 00574f60  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 00574f66  d987f4000000         fld dword ptr [edi + 0xf4]
// 00574f6c  5f                   pop edi
// 00574f6d  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 00574f73  5e                   pop esi
// 00574f74  5d                   pop ebp
// 00574f75  5b                   pop ebx
// 00574f76  c20400               ret 4
// library rbxgs-view/View.cpp (function ??0LightingParameters@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
