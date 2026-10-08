// roc 2007-08 005dc860  unit: RBX::VFeature::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc860
//
// 005dc860  53                   push ebx
// 005dc861  56                   push esi
// 005dc862  57                   push edi
// 005dc863  8bd9                 mov ebx, ecx
// 005dc865  e806f8ffff           call 0x5dc070
// 005dc86a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005dc86e  8bf0                 mov esi, eax
// 005dc870  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005dc873  7342                 jae 0x5dc8b7
// 005dc875  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005dc878  85c9                 test ecx, ecx
// 005dc87a  740f                 je 0x5dc88b
// 005dc87c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 005dc882  2bc1                 sub eax, ecx
// 005dc884  c1f802               sar eax, 2
// 005dc887  3bf8                 cmp edi, eax
// 005dc889  7206                 jb 0x5dc891
// 005dc88b  ff15d8e67700         call dword ptr [0x77e6d8]
// 005dc891  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005dc894  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 005dc897  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005dc89a  8d442414             lea eax, [esp + 0x14]
// 005dc89e  50                   push eax
// 005dc89f  8b442414             mov eax, dword ptr [esp + 0x14]
// 005dc8a3  897c2418             mov dword ptr [esp + 0x18], edi
// 005dc8a7  8b11                 mov edx, dword ptr [ecx]
// 005dc8a9  8b5208               mov edx, dword ptr [edx + 8]
// 005dc8ac  50                   push eax
// 005dc8ad  ffd2                 call edx
// 005dc8af  5f                   pop edi
// 005dc8b0  5e                   pop esi
// 005dc8b1  b001                 mov al, 1
// 005dc8b3  5b                   pop ebx
// 005dc8b4  c20800               ret 8
// 005dc8b7  5f                   pop edi
// 005dc8b8  5e                   pop esi
// 005dc8b9  32c0                 xor al, al
// 005dc8bb  5b                   pop ebx
// 005dc8bc  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
