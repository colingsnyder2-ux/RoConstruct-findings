// roc 2007-08 005779a0  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005779a0
//
// 005779a0  53                   push ebx
// 005779a1  56                   push esi
// 005779a2  57                   push edi
// 005779a3  8bd9                 mov ebx, ecx
// 005779a5  e8f6f6ffff           call 0x5770a0
// 005779aa  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005779ae  8bf0                 mov esi, eax
// 005779b0  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005779b3  7342                 jae 0x5779f7
// 005779b5  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005779b8  85c9                 test ecx, ecx
// 005779ba  740f                 je 0x5779cb
// 005779bc  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 005779c2  2bc1                 sub eax, ecx
// 005779c4  c1f802               sar eax, 2
// 005779c7  3bf8                 cmp edi, eax
// 005779c9  7206                 jb 0x5779d1
// 005779cb  ff15d8e67700         call dword ptr [0x77e6d8]
// 005779d1  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005779d4  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 005779d7  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005779da  8d442414             lea eax, [esp + 0x14]
// 005779de  50                   push eax
// 005779df  8b442414             mov eax, dword ptr [esp + 0x14]
// 005779e3  897c2418             mov dword ptr [esp + 0x18], edi
// 005779e7  8b11                 mov edx, dword ptr [ecx]
// 005779e9  8b5208               mov edx, dword ptr [edx + 8]
// 005779ec  50                   push eax
// 005779ed  ffd2                 call edx
// 005779ef  5f                   pop edi
// 005779f0  5e                   pop esi
// 005779f1  b001                 mov al, 1
// 005779f3  5b                   pop ebx
// 005779f4  c20800               ret 8
// 005779f7  5f                   pop edi
// 005779f8  5e                   pop esi
// 005779f9  32c0                 xor al, al
// 005779fb  5b                   pop ebx
// 005779fc  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
