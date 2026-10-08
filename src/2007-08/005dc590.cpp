// roc 2007-08 005dc590  unit: RBX::VFeature::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc590
//
// 005dc590  53                   push ebx
// 005dc591  56                   push esi
// 005dc592  57                   push edi
// 005dc593  8bd9                 mov ebx, ecx
// 005dc595  e876faffff           call 0x5dc010
// 005dc59a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005dc59e  8bf0                 mov esi, eax
// 005dc5a0  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005dc5a3  7342                 jae 0x5dc5e7
// 005dc5a5  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005dc5a8  85c9                 test ecx, ecx
// 005dc5aa  740f                 je 0x5dc5bb
// 005dc5ac  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 005dc5b2  2bc1                 sub eax, ecx
// 005dc5b4  c1f802               sar eax, 2
// 005dc5b7  3bf8                 cmp edi, eax
// 005dc5b9  7206                 jb 0x5dc5c1
// 005dc5bb  ff15d8e67700         call dword ptr [0x77e6d8]
// 005dc5c1  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005dc5c4  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 005dc5c7  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005dc5ca  8d442414             lea eax, [esp + 0x14]
// 005dc5ce  50                   push eax
// 005dc5cf  8b442414             mov eax, dword ptr [esp + 0x14]
// 005dc5d3  897c2418             mov dword ptr [esp + 0x18], edi
// 005dc5d7  8b11                 mov edx, dword ptr [ecx]
// 005dc5d9  8b5208               mov edx, dword ptr [edx + 8]
// 005dc5dc  50                   push eax
// 005dc5dd  ffd2                 call edx
// 005dc5df  5f                   pop edi
// 005dc5e0  5e                   pop esi
// 005dc5e1  b001                 mov al, 1
// 005dc5e3  5b                   pop ebx
// 005dc5e4  c20800               ret 8
// 005dc5e7  5f                   pop edi
// 005dc5e8  5e                   pop esi
// 005dc5e9  32c0                 xor al, al
// 005dc5eb  5b                   pop ebx
// 005dc5ec  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
