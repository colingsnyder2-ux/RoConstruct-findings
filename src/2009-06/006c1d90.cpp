// roc 2009-06 006c1d90  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1d90
//
// 006c1d90  56                   push esi
// 006c1d91  8b742408             mov esi, dword ptr [esp + 8]
// 006c1d95  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 006c1d99  7470                 je 0x6c1e0b
// 006c1d9b  53                   push ebx
// 006c1d9c  55                   push ebp
// 006c1d9d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006c1da1  57                   push edi
// 006c1da2  8b4500               mov eax, dword ptr [ebp]
// 006c1da5  8906                 mov dword ptr [esi], eax
// 006c1da7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 006c1daa  3b5e04               cmp ebx, dword ptr [esi + 4]
// 006c1dad  7444                 je 0x6c1df3
// 006c1daf  85db                 test ebx, ebx
// 006c1db1  740c                 je 0x6c1dbf
// 006c1db3  8d4b04               lea ecx, [ebx + 4]
// 006c1db6  ba01000000           mov edx, 1
// 006c1dbb  f00fc111             lock xadd dword ptr [ecx], edx
// 006c1dbf  8b7e04               mov edi, dword ptr [esi + 4]
// 006c1dc2  85ff                 test edi, edi
// 006c1dc4  742a                 je 0x6c1df0
// 006c1dc6  8d4704               lea eax, [edi + 4]
// 006c1dc9  83c9ff               or ecx, 0xffffffff
// 006c1dcc  f00fc108             lock xadd dword ptr [eax], ecx
// 006c1dd0  751e                 jne 0x6c1df0
// 006c1dd2  8b17                 mov edx, dword ptr [edi]
// 006c1dd4  8b4204               mov eax, dword ptr [edx + 4]
// 006c1dd7  8bcf                 mov ecx, edi
// 006c1dd9  ffd0                 call eax
// 006c1ddb  8d4f08               lea ecx, [edi + 8]
// 006c1dde  83caff               or edx, 0xffffffff
// 006c1de1  f00fc111             lock xadd dword ptr [ecx], edx
// 006c1de5  7509                 jne 0x6c1df0
// 006c1de7  8b07                 mov eax, dword ptr [edi]
// 006c1de9  8b5008               mov edx, dword ptr [eax + 8]
// 006c1dec  8bcf                 mov ecx, edi
// 006c1dee  ffd2                 call edx
// 006c1df0  895e04               mov dword ptr [esi + 4], ebx
// 006c1df3  dd4508               fld qword ptr [ebp + 8]
// 006c1df6  83c618               add esi, 0x18
// 006c1df9  dd5ef0               fstp qword ptr [esi - 0x10]
// 006c1dfc  dd4510               fld qword ptr [ebp + 0x10]
// 006c1dff  dd5ef8               fstp qword ptr [esi - 8]
// 006c1e02  3b742418             cmp esi, dword ptr [esp + 0x18]
// 006c1e06  759a                 jne 0x6c1da2
// 006c1e08  5f                   pop edi
// 006c1e09  5d                   pop ebp
// 006c1e0a  5b                   pop ebx
// 006c1e0b  5e                   pop esi
// 006c1e0c  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Fill@PAUWaitingThread@YieldingThreads@Lua@RBX@@U1234@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
