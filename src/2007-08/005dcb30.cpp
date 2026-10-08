// roc 2007-08 005dcb30  unit: RBX::VFeature::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcb30
//
// 005dcb30  53                   push ebx
// 005dcb31  56                   push esi
// 005dcb32  57                   push edi
// 005dcb33  8bd9                 mov ebx, ecx
// 005dcb35  e896f5ffff           call 0x5dc0d0
// 005dcb3a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005dcb3e  8bf0                 mov esi, eax
// 005dcb40  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005dcb43  7342                 jae 0x5dcb87
// 005dcb45  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005dcb48  85c9                 test ecx, ecx
// 005dcb4a  740f                 je 0x5dcb5b
// 005dcb4c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 005dcb52  2bc1                 sub eax, ecx
// 005dcb54  c1f802               sar eax, 2
// 005dcb57  3bf8                 cmp edi, eax
// 005dcb59  7206                 jb 0x5dcb61
// 005dcb5b  ff15d8e67700         call dword ptr [0x77e6d8]
// 005dcb61  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005dcb64  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 005dcb67  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005dcb6a  8d442414             lea eax, [esp + 0x14]
// 005dcb6e  50                   push eax
// 005dcb6f  8b442414             mov eax, dword ptr [esp + 0x14]
// 005dcb73  897c2418             mov dword ptr [esp + 0x18], edi
// 005dcb77  8b11                 mov edx, dword ptr [ecx]
// 005dcb79  8b5208               mov edx, dword ptr [edx + 8]
// 005dcb7c  50                   push eax
// 005dcb7d  ffd2                 call edx
// 005dcb7f  5f                   pop edi
// 005dcb80  5e                   pop esi
// 005dcb81  b001                 mov al, 1
// 005dcb83  5b                   pop ebx
// 005dcb84  c20800               ret 8
// 005dcb87  5f                   pop edi
// 005dcb88  5e                   pop esi
// 005dcb89  32c0                 xor al, al
// 005dcb8b  5b                   pop ebx
// 005dcb8c  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
