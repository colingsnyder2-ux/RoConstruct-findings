// roc 2008-06 00620ba0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620ba0
//
// 00620ba0  56                   push esi
// 00620ba1  8b742408             mov esi, dword ptr [esp + 8]
// 00620ba5  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 00620ba9  7470                 je 0x620c1b
// 00620bab  53                   push ebx
// 00620bac  55                   push ebp
// 00620bad  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00620bb1  57                   push edi
// 00620bb2  8b4500               mov eax, dword ptr [ebp]
// 00620bb5  8906                 mov dword ptr [esi], eax
// 00620bb7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00620bba  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00620bbd  7444                 je 0x620c03
// 00620bbf  85db                 test ebx, ebx
// 00620bc1  740c                 je 0x620bcf
// 00620bc3  8d4b04               lea ecx, [ebx + 4]
// 00620bc6  ba01000000           mov edx, 1
// 00620bcb  f00fc111             lock xadd dword ptr [ecx], edx
// 00620bcf  8b7e04               mov edi, dword ptr [esi + 4]
// 00620bd2  85ff                 test edi, edi
// 00620bd4  742a                 je 0x620c00
// 00620bd6  8d4704               lea eax, [edi + 4]
// 00620bd9  83c9ff               or ecx, 0xffffffff
// 00620bdc  f00fc108             lock xadd dword ptr [eax], ecx
// 00620be0  751e                 jne 0x620c00
// 00620be2  8b17                 mov edx, dword ptr [edi]
// 00620be4  8b4204               mov eax, dword ptr [edx + 4]
// 00620be7  8bcf                 mov ecx, edi
// 00620be9  ffd0                 call eax
// 00620beb  8d4f08               lea ecx, [edi + 8]
// 00620bee  83caff               or edx, 0xffffffff
// 00620bf1  f00fc111             lock xadd dword ptr [ecx], edx
// 00620bf5  7509                 jne 0x620c00
// 00620bf7  8b07                 mov eax, dword ptr [edi]
// 00620bf9  8b5008               mov edx, dword ptr [eax + 8]
// 00620bfc  8bcf                 mov ecx, edi
// 00620bfe  ffd2                 call edx
// 00620c00  895e04               mov dword ptr [esi + 4], ebx
// 00620c03  dd4508               fld qword ptr [ebp + 8]
// 00620c06  83c618               add esi, 0x18
// 00620c09  dd5ef0               fstp qword ptr [esi - 0x10]
// 00620c0c  dd4510               fld qword ptr [ebp + 0x10]
// 00620c0f  dd5ef8               fstp qword ptr [esi - 8]
// 00620c12  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00620c16  759a                 jne 0x620bb2
// 00620c18  5f                   pop edi
// 00620c19  5d                   pop ebp
// 00620c1a  5b                   pop ebx
// 00620c1b  5e                   pop esi
// 00620c1c  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Fill@PAUWaitingThread@YieldingThreads@Lua@RBX@@U1234@@std@@YAXPAUWaitingThread@YieldingThreads@Lua@RBX@@0ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
