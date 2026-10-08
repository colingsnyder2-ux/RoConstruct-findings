// roc 2007-08 00577940  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577940
//
// 00577940  56                   push esi
// 00577941  57                   push edi
// 00577942  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00577946  57                   push edi
// 00577947  8bf1                 mov esi, ecx
// 00577949  e852f7ffff           call 0x5770a0
// 0057794e  8bc8                 mov ecx, eax
// 00577950  e86bf3ecff           call 0x446cc0
// 00577955  84c0                 test al, al
// 00577957  741f                 je 0x577978
// 00577959  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057795c  8d542410             lea edx, [esp + 0x10]
// 00577960  52                   push edx
// 00577961  8b542410             mov edx, dword ptr [esp + 0x10]
// 00577965  897c2414             mov dword ptr [esp + 0x14], edi
// 00577969  8b01                 mov eax, dword ptr [ecx]
// 0057796b  8b4008               mov eax, dword ptr [eax + 8]
// 0057796e  52                   push edx
// 0057796f  ffd0                 call eax
// 00577971  5f                   pop edi
// 00577972  b001                 mov al, 1
// 00577974  5e                   pop esi
// 00577975  c20800               ret 8
// 00577978  5f                   pop edi
// 00577979  32c0                 xor al, al
// 0057797b  5e                   pop esi
// 0057797c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
