// roc 2007-08 00446f70  unit: VCRenderSettings::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00446f70
//
// 00446f70  53                   push ebx
// 00446f71  56                   push esi
// 00446f72  57                   push edi
// 00446f73  8bd9                 mov ebx, ecx
// 00446f75  e836f8ffff           call 0x4467b0
// 00446f7a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00446f7e  8bf0                 mov esi, eax
// 00446f80  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 00446f83  7342                 jae 0x446fc7
// 00446f85  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00446f88  85c9                 test ecx, ecx
// 00446f8a  740f                 je 0x446f9b
// 00446f8c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00446f92  2bc1                 sub eax, ecx
// 00446f94  c1f802               sar eax, 2
// 00446f97  3bf8                 cmp edi, eax
// 00446f99  7206                 jb 0x446fa1
// 00446f9b  ff15d8e67700         call dword ptr [0x77e6d8]
// 00446fa1  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00446fa4  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 00446fa7  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00446faa  8d442414             lea eax, [esp + 0x14]
// 00446fae  50                   push eax
// 00446faf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00446fb3  897c2418             mov dword ptr [esp + 0x18], edi
// 00446fb7  8b11                 mov edx, dword ptr [ecx]
// 00446fb9  8b5208               mov edx, dword ptr [edx + 8]
// 00446fbc  50                   push eax
// 00446fbd  ffd2                 call edx
// 00446fbf  5f                   pop edi
// 00446fc0  5e                   pop esi
// 00446fc1  b001                 mov al, 1
// 00446fc3  5b                   pop ebx
// 00446fc4  c20800               ret 8
// 00446fc7  5f                   pop edi
// 00446fc8  5e                   pop esi
// 00446fc9  32c0                 xor al, al
// 00446fcb  5b                   pop ebx
// 00446fcc  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
