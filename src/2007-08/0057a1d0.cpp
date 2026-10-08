// roc 2007-08 0057a1d0  unit: RBX::VSpecialShape::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a1d0
//
// 0057a1d0  56                   push esi
// 0057a1d1  57                   push edi
// 0057a1d2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057a1d6  57                   push edi
// 0057a1d7  8bf1                 mov esi, ecx
// 0057a1d9  e8a2fcffff           call 0x579e80
// 0057a1de  8bc8                 mov ecx, eax
// 0057a1e0  e8dbcaecff           call 0x446cc0
// 0057a1e5  84c0                 test al, al
// 0057a1e7  741f                 je 0x57a208
// 0057a1e9  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057a1ec  8d542410             lea edx, [esp + 0x10]
// 0057a1f0  52                   push edx
// 0057a1f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057a1f5  897c2414             mov dword ptr [esp + 0x14], edi
// 0057a1f9  8b01                 mov eax, dword ptr [ecx]
// 0057a1fb  8b4008               mov eax, dword ptr [eax + 8]
// 0057a1fe  52                   push edx
// 0057a1ff  ffd0                 call eax
// 0057a201  5f                   pop edi
// 0057a202  b001                 mov al, 1
// 0057a204  5e                   pop esi
// 0057a205  c20800               ret 8
// 0057a208  5f                   pop edi
// 0057a209  32c0                 xor al, al
// 0057a20b  5e                   pop esi
// 0057a20c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
