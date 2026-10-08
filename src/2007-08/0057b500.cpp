// roc 2007-08 0057b500  unit: RBX::RootInstance  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b500
//
// 0057b500  53                   push ebx
// 0057b501  57                   push edi
// 0057b502  8bf9                 mov edi, ecx
// 0057b504  33db                 xor ebx, ebx
// 0057b506  395f04               cmp dword ptr [edi + 4], ebx
// 0057b509  7e46                 jle 0x57b551
// 0057b50b  56                   push esi
// 0057b50c  8d642400             lea esp, [esp]
// 0057b510  8b07                 mov eax, dword ptr [edi]
// 0057b512  8b74d804             mov esi, dword ptr [eax + ebx*8 + 4]
// 0057b516  85f6                 test esi, esi
// 0057b518  8d44d804             lea eax, [eax + ebx*8 + 4]
// 0057b51c  742a                 je 0x57b548
// 0057b51e  8d4e04               lea ecx, [esi + 4]
// 0057b521  83caff               or edx, 0xffffffff
// 0057b524  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b528  751e                 jne 0x57b548
// 0057b52a  8b06                 mov eax, dword ptr [esi]
// 0057b52c  8b5004               mov edx, dword ptr [eax + 4]
// 0057b52f  8bce                 mov ecx, esi
// 0057b531  ffd2                 call edx
// 0057b533  8d4608               lea eax, [esi + 8]
// 0057b536  83c9ff               or ecx, 0xffffffff
// 0057b539  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b53d  7509                 jne 0x57b548
// 0057b53f  8b16                 mov edx, dword ptr [esi]
// 0057b541  8b4208               mov eax, dword ptr [edx + 8]
// 0057b544  8bce                 mov ecx, esi
// 0057b546  ffd0                 call eax
// 0057b548  83c301               add ebx, 1
// 0057b54b  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0057b54e  7cc0                 jl 0x57b510
// 0057b550  5e                   pop esi
// 0057b551  8b0f                 mov ecx, dword ptr [edi]
// 0057b553  51                   push ecx
// 0057b554  e8b742f8ff           call 0x4ff810
// 0057b559  83c404               add esp, 4
// 0057b55c  c70700000000         mov dword ptr [edi], 0
// 0057b562  c7470400000000       mov dword ptr [edi + 4], 0
// 0057b569  c7470800000000       mov dword ptr [edi + 8], 0
// 0057b570  5f                   pop edi
// 0057b571  5b                   pop ebx
// 0057b572  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??1?$Array@V?$shared_ptr@VPartInstance@RBX@@@boost@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
