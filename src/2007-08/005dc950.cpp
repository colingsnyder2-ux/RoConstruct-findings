// roc 2007-08 005dc950  unit: RBX::VFeature::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc950
//
// 005dc950  56                   push esi
// 005dc951  8d44240c             lea eax, [esp + 0xc]
// 005dc955  8bf1                 mov esi, ecx
// 005dc957  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dc95b  50                   push eax
// 005dc95c  51                   push ecx
// 005dc95d  e80ef7ffff           call 0x5dc070
// 005dc962  8bc8                 mov ecx, eax
// 005dc964  e867b7fdff           call 0x5b80d0
// 005dc969  84c0                 test al, al
// 005dc96b  7422                 je 0x5dc98f
// 005dc96d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc971  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dc974  8954240c             mov dword ptr [esp + 0xc], edx
// 005dc978  8b01                 mov eax, dword ptr [ecx]
// 005dc97a  8b4008               mov eax, dword ptr [eax + 8]
// 005dc97d  8d54240c             lea edx, [esp + 0xc]
// 005dc981  52                   push edx
// 005dc982  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc986  52                   push edx
// 005dc987  ffd0                 call eax
// 005dc989  b001                 mov al, 1
// 005dc98b  5e                   pop esi
// 005dc98c  c20800               ret 8
// 005dc98f  32c0                 xor al, al
// 005dc991  5e                   pop esi
// 005dc992  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
