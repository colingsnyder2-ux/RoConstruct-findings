// roc 2009-12 00798320  unit: lua_exception  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00798320
//
// 00798320  56                   push esi
// 00798321  8b742408             mov esi, dword ptr [esp + 8]
// 00798325  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 00798329  7470                 je 0x79839b
// 0079832b  53                   push ebx
// 0079832c  55                   push ebp
// 0079832d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00798331  57                   push edi
// 00798332  8b4500               mov eax, dword ptr [ebp]
// 00798335  8906                 mov dword ptr [esi], eax
// 00798337  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0079833a  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0079833d  7444                 je 0x798383
// 0079833f  85db                 test ebx, ebx
// 00798341  740c                 je 0x79834f
// 00798343  8d4b04               lea ecx, [ebx + 4]
// 00798346  ba01000000           mov edx, 1
// 0079834b  f00fc111             lock xadd dword ptr [ecx], edx
// 0079834f  8b7e04               mov edi, dword ptr [esi + 4]
// 00798352  85ff                 test edi, edi
// 00798354  742a                 je 0x798380
// 00798356  8d4704               lea eax, [edi + 4]
// 00798359  83c9ff               or ecx, 0xffffffff
// 0079835c  f00fc108             lock xadd dword ptr [eax], ecx
// 00798360  751e                 jne 0x798380
// 00798362  8b17                 mov edx, dword ptr [edi]
// 00798364  8b4204               mov eax, dword ptr [edx + 4]
// 00798367  8bcf                 mov ecx, edi
// 00798369  ffd0                 call eax
// 0079836b  8d4f08               lea ecx, [edi + 8]
// 0079836e  83caff               or edx, 0xffffffff
// 00798371  f00fc111             lock xadd dword ptr [ecx], edx
// 00798375  7509                 jne 0x798380
// 00798377  8b07                 mov eax, dword ptr [edi]
// 00798379  8b5008               mov edx, dword ptr [eax + 8]
// 0079837c  8bcf                 mov ecx, edi
// 0079837e  ffd2                 call edx
// 00798380  895e04               mov dword ptr [esi + 4], ebx
// 00798383  dd4508               fld qword ptr [ebp + 8]
// 00798386  83c618               add esi, 0x18
// 00798389  dd5ef0               fstp qword ptr [esi - 0x10]
// 0079838c  dd4510               fld qword ptr [ebp + 0x10]
// 0079838f  dd5ef8               fstp qword ptr [esi - 8]
// 00798392  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00798396  759a                 jne 0x798332
// 00798398  5f                   pop edi
// 00798399  5d                   pop ebp
// 0079839a  5b                   pop ebx
// 0079839b  5e                   pop esi
// 0079839c  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Fill@PAUWaitingThread@YieldingThreads@Lua@RBX@@U1234@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
