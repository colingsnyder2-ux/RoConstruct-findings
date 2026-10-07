// roc 2010-06 00558db0  unit: G3D::BinaryInput  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558db0
//
// 00558db0  56                   push esi
// 00558db1  8bf1                 mov esi, ecx
// 00558db3  8b4644               mov eax, dword ptr [esi + 0x44]
// 00558db6  57                   push edi
// 00558db7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00558dbb  8d0c38               lea ecx, [eax + edi]
// 00558dbe  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00558dc1  7e0e                 jle 0x558dd1
// 00558dc3  8b5634               mov edx, dword ptr [esi + 0x34]
// 00558dc6  57                   push edi
// 00558dc7  03d0                 add edx, eax
// 00558dc9  52                   push edx
// 00558dca  8bce                 mov ecx, esi
// 00558dcc  e87ffaffff           call 0x558850
// 00558dd1  8b4640               mov eax, dword ptr [esi + 0x40]
// 00558dd4  034644               add eax, dword ptr [esi + 0x44]
// 00558dd7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00558ddb  57                   push edi
// 00558ddc  50                   push eax
// 00558ddd  51                   push ecx
// 00558dde  e843002500           call 0x7a8e26
// 00558de3  017e44               add dword ptr [esi + 0x44], edi
// 00558de6  83c40c               add esp, 0xc
// 00558de9  5f                   pop edi
// 00558dea  5e                   pop esi
// 00558deb  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readBytes@BinaryInput@G3D@@QAEXHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
