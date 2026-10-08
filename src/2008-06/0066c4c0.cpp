// roc 2008-06 0066c4c0  unit: RBX::GroupDragTool  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066c4c0
//
// 0066c4c0  56                   push esi
// 0066c4c1  8b742408             mov esi, dword ptr [esp + 8]
// 0066c4c5  57                   push edi
// 0066c4c6  8bce                 mov ecx, esi
// 0066c4c8  e803b7f7ff           call 0x5e7bd0
// 0066c4cd  85c0                 test eax, eax
// 0066c4cf  741e                 je 0x66c4ef
// 0066c4d1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066c4d5  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0066c4d8  3bf1                 cmp esi, ecx
// 0066c4da  7503                 jne 0x66c4df
// 0066c4dc  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0066c4df  3bcf                 cmp ecx, edi
// 0066c4e1  7413                 je 0x66c4f6
// 0066c4e3  50                   push eax
// 0066c4e4  8bce                 mov ecx, esi
// 0066c4e6  e8f5b6f7ff           call 0x5e7be0
// 0066c4eb  85c0                 test eax, eax
// 0066c4ed  75e6                 jne 0x66c4d5
// 0066c4ef  5f                   pop edi
// 0066c4f0  32c0                 xor al, al
// 0066c4f2  5e                   pop esi
// 0066c4f3  c20800               ret 8
// 0066c4f6  d9058c748200         fld dword ptr [0x82748c]
// 0066c4fc  51                   push ecx
// 0066c4fd  8bc8                 mov ecx, eax
// 0066c4ff  d91c24               fstp dword ptr [esp]
// 0066c502  e899a7f9ff           call 0x606ca0
// 0066c507  5f                   pop edi
// 0066c508  5e                   pop esi
// 0066c509  c20800               ret 8
// library rbxgs/tool\RunDragger.cpp (function ?adjacent@RunDragger@RBX@@AAE_NPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
