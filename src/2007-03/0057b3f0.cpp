// roc 2007-03 0057b3f0  unit: seg_00570000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057b3f0
//
// 0057b3f0  53                   push ebx
// 0057b3f1  57                   push edi
// 0057b3f2  8bf9                 mov edi, ecx
// 0057b3f4  33db                 xor ebx, ebx
// 0057b3f6  395f04               cmp dword ptr [edi + 4], ebx
// 0057b3f9  7e46                 jle 0x57b441
// 0057b3fb  56                   push esi
// 0057b3fc  8d642400             lea esp, [esp]
// 0057b400  8b07                 mov eax, dword ptr [edi]
// 0057b402  8b74d804             mov esi, dword ptr [eax + ebx*8 + 4]
// 0057b406  85f6                 test esi, esi
// 0057b408  8d44d804             lea eax, [eax + ebx*8 + 4]
// 0057b40c  742a                 je 0x57b438
// 0057b40e  8d4e04               lea ecx, [esi + 4]
// 0057b411  83caff               or edx, 0xffffffff
// 0057b414  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b418  751e                 jne 0x57b438
// 0057b41a  8b06                 mov eax, dword ptr [esi]
// 0057b41c  8b5004               mov edx, dword ptr [eax + 4]
// 0057b41f  8bce                 mov ecx, esi
// 0057b421  ffd2                 call edx
// 0057b423  8d4608               lea eax, [esi + 8]
// 0057b426  83c9ff               or ecx, 0xffffffff
// 0057b429  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b42d  7509                 jne 0x57b438
// 0057b42f  8b16                 mov edx, dword ptr [esi]
// 0057b431  8b4208               mov eax, dword ptr [edx + 8]
// 0057b434  8bce                 mov ecx, esi
// 0057b436  ffd0                 call eax
// 0057b438  83c301               add ebx, 1
// 0057b43b  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0057b43e  7cc0                 jl 0x57b400
// 0057b440  5e                   pop esi
// 0057b441  8b0f                 mov ecx, dword ptr [edi]
// 0057b443  51                   push ecx
// 0057b444  e8377ff7ff           call 0x4f3380
// 0057b449  83c404               add esp, 4
// 0057b44c  c70700000000         mov dword ptr [edi], 0
// 0057b452  c7470400000000       mov dword ptr [edi + 4], 0
// 0057b459  c7470800000000       mov dword ptr [edi + 8], 0
// 0057b460  5f                   pop edi
// 0057b461  5b                   pop ebx
// 0057b462  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??1?$Array@V?$shared_ptr@VPartInstance@RBX@@@boost@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
