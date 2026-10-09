// roc 2010-06 00730b80  unit: lua_exception  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00730b80
//
// 00730b80  56                   push esi
// 00730b81  8b742408             mov esi, dword ptr [esp + 8]
// 00730b85  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 00730b89  7470                 je 0x730bfb
// 00730b8b  53                   push ebx
// 00730b8c  55                   push ebp
// 00730b8d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00730b91  57                   push edi
// 00730b92  8b4500               mov eax, dword ptr [ebp]
// 00730b95  8906                 mov dword ptr [esi], eax
// 00730b97  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00730b9a  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00730b9d  7444                 je 0x730be3
// 00730b9f  85db                 test ebx, ebx
// 00730ba1  740c                 je 0x730baf
// 00730ba3  8d4b04               lea ecx, [ebx + 4]
// 00730ba6  ba01000000           mov edx, 1
// 00730bab  f00fc111             lock xadd dword ptr [ecx], edx
// 00730baf  8b7e04               mov edi, dword ptr [esi + 4]
// 00730bb2  85ff                 test edi, edi
// 00730bb4  742a                 je 0x730be0
// 00730bb6  8d4704               lea eax, [edi + 4]
// 00730bb9  83c9ff               or ecx, 0xffffffff
// 00730bbc  f00fc108             lock xadd dword ptr [eax], ecx
// 00730bc0  751e                 jne 0x730be0
// 00730bc2  8b17                 mov edx, dword ptr [edi]
// 00730bc4  8b4204               mov eax, dword ptr [edx + 4]
// 00730bc7  8bcf                 mov ecx, edi
// 00730bc9  ffd0                 call eax
// 00730bcb  8d4f08               lea ecx, [edi + 8]
// 00730bce  83caff               or edx, 0xffffffff
// 00730bd1  f00fc111             lock xadd dword ptr [ecx], edx
// 00730bd5  7509                 jne 0x730be0
// 00730bd7  8b07                 mov eax, dword ptr [edi]
// 00730bd9  8b5008               mov edx, dword ptr [eax + 8]
// 00730bdc  8bcf                 mov ecx, edi
// 00730bde  ffd2                 call edx
// 00730be0  895e04               mov dword ptr [esi + 4], ebx
// 00730be3  dd4508               fld qword ptr [ebp + 8]
// 00730be6  83c618               add esi, 0x18
// 00730be9  dd5ef0               fstp qword ptr [esi - 0x10]
// 00730bec  dd4510               fld qword ptr [ebp + 0x10]
// 00730bef  dd5ef8               fstp qword ptr [esi - 8]
// 00730bf2  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00730bf6  759a                 jne 0x730b92
// 00730bf8  5f                   pop edi
// 00730bf9  5d                   pop ebp
// 00730bfa  5b                   pop ebx
// 00730bfb  5e                   pop esi
// 00730bfc  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Fill@PAUWaitingThread@YieldingThreads@Lua@RBX@@U1234@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
