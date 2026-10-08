// roc 2007-08 00577a90  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577a90
//
// 00577a90  56                   push esi
// 00577a91  8d44240c             lea eax, [esp + 0xc]
// 00577a95  8bf1                 mov esi, ecx
// 00577a97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577a9b  50                   push eax
// 00577a9c  51                   push ecx
// 00577a9d  e8fef5ffff           call 0x5770a0
// 00577aa2  8bc8                 mov ecx, eax
// 00577aa4  e827060400           call 0x5b80d0
// 00577aa9  84c0                 test al, al
// 00577aab  7422                 je 0x577acf
// 00577aad  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577ab1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00577ab4  8954240c             mov dword ptr [esp + 0xc], edx
// 00577ab8  8b01                 mov eax, dword ptr [ecx]
// 00577aba  8b4008               mov eax, dword ptr [eax + 8]
// 00577abd  8d54240c             lea edx, [esp + 0xc]
// 00577ac1  52                   push edx
// 00577ac2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577ac6  52                   push edx
// 00577ac7  ffd0                 call eax
// 00577ac9  b001                 mov al, 1
// 00577acb  5e                   pop esi
// 00577acc  c20800               ret 8
// 00577acf  32c0                 xor al, al
// 00577ad1  5e                   pop esi
// 00577ad2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
