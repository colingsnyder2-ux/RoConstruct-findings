// roc 2008-06 00584060  unit: RBX::VModelInstance::?$FactoryProduct  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584060
//
// 00584060  56                   push esi
// 00584061  8bf1                 mov esi, ecx
// 00584063  807e1100             cmp byte ptr [esi + 0x11], 0
// 00584067  7427                 je 0x584090
// 00584069  8b4614               mov eax, dword ptr [esi + 0x14]
// 0058406c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0058406f  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00584075  8b0c11               mov ecx, dword ptr [ecx + edx]
// 00584078  034e1c               add ecx, dword ptr [esi + 0x1c]
// 0058407b  8b5618               mov edx, dword ptr [esi + 0x18]
// 0058407e  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 00584085  ffd2                 call edx
// 00584087  884610               mov byte ptr [esi + 0x10], al
// 0058408a  c6461100             mov byte ptr [esi + 0x11], 0
// 0058408e  5e                   pop esi
// 0058408f  c3                   ret 
// 00584090  8a4610               mov al, byte ptr [esi + 0x10]
// 00584093  5e                   pop esi
// 00584094  c3                   ret 
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?isControllable@PVInstance@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
