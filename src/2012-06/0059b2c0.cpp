// roc 2012-06 0059b2c0  unit: VAuthoringSettings::?$FactoryProduct  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b2c0
//
// 0059b2c0  8b4104               mov eax, dword ptr [ecx + 4]
// 0059b2c3  56                   push esi
// 0059b2c4  8b742408             mov esi, dword ptr [esp + 8]
// 0059b2c8  3bf0                 cmp esi, eax
// 0059b2ca  7337                 jae 0x59b303
// 0059b2cc  48                   dec eax
// 0059b2cd  8bd6                 mov edx, esi
// 0059b2cf  3bf0                 cmp esi, eax
// 0059b2d1  732d                 jae 0x59b300
// 0059b2d3  c1e604               shl esi, 4
// 0059b2d6  57                   push edi
// 0059b2d7  8b01                 mov eax, dword ptr [ecx]
// 0059b2d9  8b7c3010             mov edi, dword ptr [eax + esi + 0x10]
// 0059b2dd  03c6                 add eax, esi
// 0059b2df  8938                 mov dword ptr [eax], edi
// 0059b2e1  8b7814               mov edi, dword ptr [eax + 0x14]
// 0059b2e4  897804               mov dword ptr [eax + 4], edi
// 0059b2e7  8b7818               mov edi, dword ptr [eax + 0x18]
// 0059b2ea  897808               mov dword ptr [eax + 8], edi
// 0059b2ed  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0059b2f0  89780c               mov dword ptr [eax + 0xc], edi
// 0059b2f3  8b4104               mov eax, dword ptr [ecx + 4]
// 0059b2f6  42                   inc edx
// 0059b2f7  48                   dec eax
// 0059b2f8  83c610               add esi, 0x10
// 0059b2fb  3bd0                 cmp edx, eax
// 0059b2fd  72d8                 jb 0x59b2d7
// 0059b2ff  5f                   pop edi
// 0059b300  ff4904               dec dword ptr [ecx + 4]
// 0059b303  5e                   pop esi
// 0059b304  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?RemoveAtIndex@?$List@UUnreliableWithAckReceiptNode@ReliabilityLayer@RakNet@@@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
