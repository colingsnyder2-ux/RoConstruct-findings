// from server: 100% by auto
// roc 2008-06 00515d10  unit: G3D::BinaryInput  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00515d10
//
// 00515d10  56                   push esi
// 00515d11  8bf1                 mov esi, ecx
// 00515d13  8b4644               mov eax, dword ptr [esi + 0x44]
// 00515d16  57                   push edi
// 00515d17  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00515d1b  8d0c38               lea ecx, [eax + edi]
// 00515d1e  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00515d21  7e0e                 jle 0x515d31
// 00515d23  8b5634               mov edx, dword ptr [esi + 0x34]
// 00515d26  57                   push edi
// 00515d27  03d0                 add edx, eax
// 00515d29  52                   push edx
// 00515d2a  8bce                 mov ecx, esi
// 00515d2c  e89ffaffff           call 0x5157d0
// 00515d31  8b4640               mov eax, dword ptr [esi + 0x40]
// 00515d34  034644               add eax, dword ptr [esi + 0x44]
// 00515d37  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00515d3b  57                   push edi
// 00515d3c  50                   push eax
// 00515d3d  51                   push ecx
// 00515d3e  e89dba1800           call 0x6a17e0
// 00515d43  017e44               add dword ptr [esi + 0x44], edi
// 00515d46  83c40c               add esp, 0xc
// 00515d49  5f                   pop edi
// 00515d4a  5e                   pop esi
// 00515d4b  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readBytes@BinaryInput@G3D@@QAEXHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
