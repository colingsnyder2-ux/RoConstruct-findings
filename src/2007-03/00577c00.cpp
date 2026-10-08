// roc 2007-03 00577c00  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577c00
//
// 00577c00  56                   push esi
// 00577c01  57                   push edi
// 00577c02  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00577c06  57                   push edi
// 00577c07  8bf1                 mov esi, ecx
// 00577c09  e8b2f7ffff           call 0x5773c0
// 00577c0e  8bc8                 mov ecx, eax
// 00577c10  e8fbe5ecff           call 0x446210
// 00577c15  84c0                 test al, al
// 00577c17  741f                 je 0x577c38
// 00577c19  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00577c1c  8d542410             lea edx, [esp + 0x10]
// 00577c20  52                   push edx
// 00577c21  8b542410             mov edx, dword ptr [esp + 0x10]
// 00577c25  897c2414             mov dword ptr [esp + 0x14], edi
// 00577c29  8b01                 mov eax, dword ptr [ecx]
// 00577c2b  8b4008               mov eax, dword ptr [eax + 8]
// 00577c2e  52                   push edx
// 00577c2f  ffd0                 call eax
// 00577c31  5f                   pop edi
// 00577c32  b001                 mov al, 1
// 00577c34  5e                   pop esi
// 00577c35  c20800               ret 8
// 00577c38  5f                   pop edi
// 00577c39  32c0                 xor al, al
// 00577c3b  5e                   pop esi
// 00577c3c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
