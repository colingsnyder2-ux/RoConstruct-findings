// roc 2007-08 0057a230  unit: RBX::VSpecialShape::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a230
//
// 0057a230  53                   push ebx
// 0057a231  56                   push esi
// 0057a232  57                   push edi
// 0057a233  8bd9                 mov ebx, ecx
// 0057a235  e846fcffff           call 0x579e80
// 0057a23a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057a23e  8bf0                 mov esi, eax
// 0057a240  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0057a243  7342                 jae 0x57a287
// 0057a245  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0057a248  85c9                 test ecx, ecx
// 0057a24a  740f                 je 0x57a25b
// 0057a24c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0057a252  2bc1                 sub eax, ecx
// 0057a254  c1f802               sar eax, 2
// 0057a257  3bf8                 cmp edi, eax
// 0057a259  7206                 jb 0x57a261
// 0057a25b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057a261  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0057a264  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 0057a267  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0057a26a  8d442414             lea eax, [esp + 0x14]
// 0057a26e  50                   push eax
// 0057a26f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057a273  897c2418             mov dword ptr [esp + 0x18], edi
// 0057a277  8b11                 mov edx, dword ptr [ecx]
// 0057a279  8b5208               mov edx, dword ptr [edx + 8]
// 0057a27c  50                   push eax
// 0057a27d  ffd2                 call edx
// 0057a27f  5f                   pop edi
// 0057a280  5e                   pop esi
// 0057a281  b001                 mov al, 1
// 0057a283  5b                   pop ebx
// 0057a284  c20800               ret 8
// 0057a287  5f                   pop edi
// 0057a288  5e                   pop esi
// 0057a289  32c0                 xor al, al
// 0057a28b  5b                   pop ebx
// 0057a28c  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
