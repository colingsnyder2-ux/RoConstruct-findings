// roc 2007-08 005794a0  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005794a0
//
// 005794a0  53                   push ebx
// 005794a1  56                   push esi
// 005794a2  57                   push edi
// 005794a3  8bd9                 mov ebx, ecx
// 005794a5  e896f7ffff           call 0x578c40
// 005794aa  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005794ae  8bf0                 mov esi, eax
// 005794b0  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005794b3  7342                 jae 0x5794f7
// 005794b5  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005794b8  85c9                 test ecx, ecx
// 005794ba  740f                 je 0x5794cb
// 005794bc  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 005794c2  2bc1                 sub eax, ecx
// 005794c4  c1f802               sar eax, 2
// 005794c7  3bf8                 cmp edi, eax
// 005794c9  7206                 jb 0x5794d1
// 005794cb  ff15d8e67700         call dword ptr [0x77e6d8]
// 005794d1  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005794d4  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 005794d7  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005794da  8d442414             lea eax, [esp + 0x14]
// 005794de  50                   push eax
// 005794df  8b442414             mov eax, dword ptr [esp + 0x14]
// 005794e3  897c2418             mov dword ptr [esp + 0x18], edi
// 005794e7  8b11                 mov edx, dword ptr [ecx]
// 005794e9  8b5208               mov edx, dword ptr [edx + 8]
// 005794ec  50                   push eax
// 005794ed  ffd2                 call edx
// 005794ef  5f                   pop edi
// 005794f0  5e                   pop esi
// 005794f1  b001                 mov al, 1
// 005794f3  5b                   pop ebx
// 005794f4  c20800               ret 8
// 005794f7  5f                   pop edi
// 005794f8  5e                   pop esi
// 005794f9  32c0                 xor al, al
// 005794fb  5b                   pop ebx
// 005794fc  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
