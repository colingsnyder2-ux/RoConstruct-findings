// roc 2007-08 0059b0b0  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b0b0
//
// 0059b0b0  51                   push ecx
// 0059b0b1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059b0b5  56                   push esi
// 0059b0b6  57                   push edi
// 0059b0b7  8b38                 mov edi, dword ptr [eax]
// 0059b0b9  85ff                 test edi, edi
// 0059b0bb  c744240800000000     mov dword ptr [esp + 8], 0
// 0059b0c3  7d19                 jge 0x59b0de
// 0059b0c5  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059b0c9  6854597800           push 0x785954
// 0059b0ce  8bce                 mov ecx, esi
// 0059b0d0  ff1598e67700         call dword ptr [0x77e698]
// 0059b0d6  5f                   pop edi
// 0059b0d7  8bc6                 mov eax, esi
// 0059b0d9  5e                   pop esi
// 0059b0da  59                   pop ecx
// 0059b0db  c20800               ret 8
// 0059b0de  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0059b0e1  83c168               add ecx, 0x68
// 0059b0e4  85c0                 test eax, eax
// 0059b0e6  74dd                 je 0x59b0c5
// 0059b0e8  8b7108               mov esi, dword ptr [ecx + 8]
// 0059b0eb  2bf0                 sub esi, eax
// 0059b0ed  b893244992           mov eax, 0x92492493
// 0059b0f2  f7ee                 imul esi
// 0059b0f4  03d6                 add edx, esi
// 0059b0f6  c1fa04               sar edx, 4
// 0059b0f9  8bc2                 mov eax, edx
// 0059b0fb  c1e81f               shr eax, 0x1f
// 0059b0fe  03c2                 add eax, edx
// 0059b100  3bf8                 cmp edi, eax
// 0059b102  73c1                 jae 0x59b0c5
// 0059b104  57                   push edi
// 0059b105  e826bbeaff           call 0x446c30
// 0059b10a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059b10e  50                   push eax
// 0059b10f  8bce                 mov ecx, esi
// 0059b111  ff159ce67700         call dword ptr [0x77e69c]
// 0059b117  5f                   pop edi
// 0059b118  8bc6                 mov eax, esi
// 0059b11a  5e                   pop esi
// 0059b11b  59                   pop ecx
// 0059b11c  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?convertToString@?$EnumDesc@W4CameraType@Camera@RBX@@@Reflection@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABW4CameraType@Camera@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
