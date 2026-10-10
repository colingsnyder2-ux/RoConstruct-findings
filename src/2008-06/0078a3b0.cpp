// roc 2008-06 0078a3b0  unit: CXTColorBase  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a3b0
//
// 0078a3b0  56                   push esi
// 0078a3b1  8bf1                 mov esi, ecx
// 0078a3b3  e8b068f1ff           call 0x6a0c68
// 0078a3b8  f644240801           test byte ptr [esp + 8], 1
// 0078a3bd  742d                 je 0x78a3ec
// 0078a3bf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078a3c3  8b06                 mov eax, dword ptr [esi]
// 0078a3c5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078a3c9  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0078a3cf  51                   push ecx
// 0078a3d0  52                   push edx
// 0078a3d1  8bce                 mov ecx, esi
// 0078a3d3  ffd0                 call eax
// 0078a3d5  ff15102e8000         call dword ptr [0x802e10]
// 0078a3db  50                   push eax
// 0078a3dc  e8fd67f1ff           call 0x6a0bde
// 0078a3e1  3bc6                 cmp eax, esi
// 0078a3e3  7407                 je 0x78a3ec
// 0078a3e5  8bce                 mov ecx, esi
// 0078a3e7  e83c66f1ff           call 0x6a0a28
// 0078a3ec  5e                   pop esi
// 0078a3ed  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPageCustom.cpp (function ?OnMouseMove@CXTColorBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPageCustom.cpp
