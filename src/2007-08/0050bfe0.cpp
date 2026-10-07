// roc 2007-08 0050bfe0  unit: G3D::BinaryInput  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050bfe0
//
// 0050bfe0  56                   push esi
// 0050bfe1  8bf1                 mov esi, ecx
// 0050bfe3  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050bfe6  57                   push edi
// 0050bfe7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050bfeb  8d0c38               lea ecx, [eax + edi]
// 0050bfee  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050bff1  7e0e                 jle 0x50c001
// 0050bff3  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050bff6  57                   push edi
// 0050bff7  03d0                 add edx, eax
// 0050bff9  52                   push edx
// 0050bffa  8bce                 mov ecx, esi
// 0050bffc  e8bffcffff           call 0x50bcc0
// 0050c001  8b4640               mov eax, dword ptr [esi + 0x40]
// 0050c004  034644               add eax, dword ptr [esi + 0x44]
// 0050c007  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050c00b  57                   push edi
// 0050c00c  50                   push eax
// 0050c00d  51                   push ecx
// 0050c00e  e8394d1200           call 0x630d4c
// 0050c013  017e44               add dword ptr [esi + 0x44], edi
// 0050c016  83c40c               add esp, 0xc
// 0050c019  5f                   pop edi
// 0050c01a  5e                   pop esi
// 0050c01b  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readBytes@BinaryInput@G3D@@QAEXHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
