// roc 2007-08 00544210  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544210
//
// 00544210  53                   push ebx
// 00544211  56                   push esi
// 00544212  57                   push edi
// 00544213  8bd9                 mov ebx, ecx
// 00544215  e806faffff           call 0x543c20
// 0054421a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0054421e  8bf0                 mov esi, eax
// 00544220  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 00544223  7342                 jae 0x544267
// 00544225  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00544228  85c9                 test ecx, ecx
// 0054422a  740f                 je 0x54423b
// 0054422c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00544232  2bc1                 sub eax, ecx
// 00544234  c1f802               sar eax, 2
// 00544237  3bf8                 cmp edi, eax
// 00544239  7206                 jb 0x544241
// 0054423b  ff15d8e67700         call dword ptr [0x77e6d8]
// 00544241  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00544244  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 00544247  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0054424a  8d442414             lea eax, [esp + 0x14]
// 0054424e  50                   push eax
// 0054424f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00544253  897c2418             mov dword ptr [esp + 0x18], edi
// 00544257  8b11                 mov edx, dword ptr [ecx]
// 00544259  8b5208               mov edx, dword ptr [edx + 8]
// 0054425c  50                   push eax
// 0054425d  ffd2                 call edx
// 0054425f  5f                   pop edi
// 00544260  5e                   pop esi
// 00544261  b001                 mov al, 1
// 00544263  5b                   pop ebx
// 00544264  c20800               ret 8
// 00544267  5f                   pop edi
// 00544268  5e                   pop esi
// 00544269  32c0                 xor al, al
// 0054426b  5b                   pop ebx
// 0054426c  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
