// roc 2007-08 005dc900  unit: RBX::VFeature::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc900
//
// 005dc900  56                   push esi
// 005dc901  8d44240c             lea eax, [esp + 0xc]
// 005dc905  8bf1                 mov esi, ecx
// 005dc907  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dc90b  50                   push eax
// 005dc90c  51                   push ecx
// 005dc90d  e85ef7ffff           call 0x5dc070
// 005dc912  8bc8                 mov ecx, eax
// 005dc914  e887f9ffff           call 0x5dc2a0
// 005dc919  84c0                 test al, al
// 005dc91b  7422                 je 0x5dc93f
// 005dc91d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc921  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dc924  8954240c             mov dword ptr [esp + 0xc], edx
// 005dc928  8b01                 mov eax, dword ptr [ecx]
// 005dc92a  8b4008               mov eax, dword ptr [eax + 8]
// 005dc92d  8d54240c             lea edx, [esp + 0xc]
// 005dc931  52                   push edx
// 005dc932  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc936  52                   push edx
// 005dc937  ffd0                 call eax
// 005dc939  b001                 mov al, 1
// 005dc93b  5e                   pop esi
// 005dc93c  c20800               ret 8
// 005dc93f  32c0                 xor al, al
// 005dc941  5e                   pop esi
// 005dc942  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
