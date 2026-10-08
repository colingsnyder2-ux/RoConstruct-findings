// roc 2007-08 005bc080  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc080
//
// 005bc080  53                   push ebx
// 005bc081  56                   push esi
// 005bc082  57                   push edi
// 005bc083  8bd9                 mov ebx, ecx
// 005bc085  e8c6fbffff           call 0x5bbc50
// 005bc08a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bc08e  8bf0                 mov esi, eax
// 005bc090  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005bc093  7342                 jae 0x5bc0d7
// 005bc095  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005bc098  85c9                 test ecx, ecx
// 005bc09a  740f                 je 0x5bc0ab
// 005bc09c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 005bc0a2  2bc1                 sub eax, ecx
// 005bc0a4  c1f802               sar eax, 2
// 005bc0a7  3bf8                 cmp edi, eax
// 005bc0a9  7206                 jb 0x5bc0b1
// 005bc0ab  ff15d8e67700         call dword ptr [0x77e6d8]
// 005bc0b1  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005bc0b4  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 005bc0b7  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005bc0ba  8d442414             lea eax, [esp + 0x14]
// 005bc0be  50                   push eax
// 005bc0bf  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bc0c3  897c2418             mov dword ptr [esp + 0x18], edi
// 005bc0c7  8b11                 mov edx, dword ptr [ecx]
// 005bc0c9  8b5208               mov edx, dword ptr [edx + 8]
// 005bc0cc  50                   push eax
// 005bc0cd  ffd2                 call edx
// 005bc0cf  5f                   pop edi
// 005bc0d0  5e                   pop esi
// 005bc0d1  b001                 mov al, 1
// 005bc0d3  5b                   pop ebx
// 005bc0d4  c20800               ret 8
// 005bc0d7  5f                   pop edi
// 005bc0d8  5e                   pop esi
// 005bc0d9  32c0                 xor al, al
// 005bc0db  5b                   pop ebx
// 005bc0dc  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
