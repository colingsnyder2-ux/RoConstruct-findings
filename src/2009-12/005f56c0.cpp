// roc 2009-12 005f56c0  unit: G3D::BinaryInput  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f56c0
//
// 005f56c0  56                   push esi
// 005f56c1  8bf1                 mov esi, ecx
// 005f56c3  8b4644               mov eax, dword ptr [esi + 0x44]
// 005f56c6  57                   push edi
// 005f56c7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005f56cb  8d0c38               lea ecx, [eax + edi]
// 005f56ce  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005f56d1  7e0e                 jle 0x5f56e1
// 005f56d3  8b5634               mov edx, dword ptr [esi + 0x34]
// 005f56d6  57                   push edi
// 005f56d7  03d0                 add edx, eax
// 005f56d9  52                   push edx
// 005f56da  8bce                 mov ecx, esi
// 005f56dc  e8dffaffff           call 0x5f51c0
// 005f56e1  8b4640               mov eax, dword ptr [esi + 0x40]
// 005f56e4  034644               add eax, dword ptr [esi + 0x44]
// 005f56e7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f56eb  57                   push edi
// 005f56ec  50                   push eax
// 005f56ed  51                   push ecx
// 005f56ee  e8f3f51f00           call 0x7f4ce6
// 005f56f3  017e44               add dword ptr [esi + 0x44], edi
// 005f56f6  83c40c               add esp, 0xc
// 005f56f9  5f                   pop edi
// 005f56fa  5e                   pop esi
// 005f56fb  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readBytes@BinaryInput@G3D@@QAEXHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
