// roc 2007-08 0059dfe0  unit: RBX::VHopperBin::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059dfe0
//
// 0059dfe0  53                   push ebx
// 0059dfe1  56                   push esi
// 0059dfe2  57                   push edi
// 0059dfe3  8bd9                 mov ebx, ecx
// 0059dfe5  e8f6faffff           call 0x59dae0
// 0059dfea  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059dfee  8bf0                 mov esi, eax
// 0059dff0  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0059dff3  7342                 jae 0x59e037
// 0059dff5  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0059dff8  85c9                 test ecx, ecx
// 0059dffa  740f                 je 0x59e00b
// 0059dffc  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0059e002  2bc1                 sub eax, ecx
// 0059e004  c1f802               sar eax, 2
// 0059e007  3bf8                 cmp edi, eax
// 0059e009  7206                 jb 0x59e011
// 0059e00b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0059e011  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0059e014  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 0059e017  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0059e01a  8d442414             lea eax, [esp + 0x14]
// 0059e01e  50                   push eax
// 0059e01f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059e023  897c2418             mov dword ptr [esp + 0x18], edi
// 0059e027  8b11                 mov edx, dword ptr [ecx]
// 0059e029  8b5208               mov edx, dword ptr [edx + 8]
// 0059e02c  50                   push eax
// 0059e02d  ffd2                 call edx
// 0059e02f  5f                   pop edi
// 0059e030  5e                   pop esi
// 0059e031  b001                 mov al, 1
// 0059e033  5b                   pop ebx
// 0059e034  c20800               ret 8
// 0059e037  5f                   pop edi
// 0059e038  5e                   pop esi
// 0059e039  32c0                 xor al, al
// 0059e03b  5b                   pop ebx
// 0059e03c  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
