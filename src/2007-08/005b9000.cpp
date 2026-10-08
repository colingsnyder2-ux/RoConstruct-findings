// roc 2007-08 005b9000  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9000
//
// 005b9000  53                   push ebx
// 005b9001  56                   push esi
// 005b9002  57                   push edi
// 005b9003  8bd9                 mov ebx, ecx
// 005b9005  e8f6feffff           call 0x5b8f00
// 005b900a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005b900e  8bf0                 mov esi, eax
// 005b9010  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005b9013  7342                 jae 0x5b9057
// 005b9015  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005b9018  85c9                 test ecx, ecx
// 005b901a  740f                 je 0x5b902b
// 005b901c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 005b9022  2bc1                 sub eax, ecx
// 005b9024  c1f802               sar eax, 2
// 005b9027  3bf8                 cmp edi, eax
// 005b9029  7206                 jb 0x5b9031
// 005b902b  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b9031  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005b9034  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 005b9037  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005b903a  8d442414             lea eax, [esp + 0x14]
// 005b903e  50                   push eax
// 005b903f  8b442414             mov eax, dword ptr [esp + 0x14]
// 005b9043  897c2418             mov dword ptr [esp + 0x18], edi
// 005b9047  8b11                 mov edx, dword ptr [ecx]
// 005b9049  8b5208               mov edx, dword ptr [edx + 8]
// 005b904c  50                   push eax
// 005b904d  ffd2                 call edx
// 005b904f  5f                   pop edi
// 005b9050  5e                   pop esi
// 005b9051  b001                 mov al, 1
// 005b9053  5b                   pop ebx
// 005b9054  c20800               ret 8
// 005b9057  5f                   pop edi
// 005b9058  5e                   pop esi
// 005b9059  32c0                 xor al, al
// 005b905b  5b                   pop ebx
// 005b905c  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
