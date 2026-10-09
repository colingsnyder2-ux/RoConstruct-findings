// roc 2010-06 007309b0  unit: lua_exception  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007309b0
//
// 007309b0  53                   push ebx
// 007309b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007309b5  395c2408             cmp dword ptr [esp + 8], ebx
// 007309b9  7477                 je 0x730a32
// 007309bb  55                   push ebp
// 007309bc  56                   push esi
// 007309bd  8b742418             mov esi, dword ptr [esp + 0x18]
// 007309c1  57                   push edi
// 007309c2  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 007309c5  83eb18               sub ebx, 0x18
// 007309c8  83ee18               sub esi, 0x18
// 007309cb  8906                 mov dword ptr [esi], eax
// 007309cd  8b6b04               mov ebp, dword ptr [ebx + 4]
// 007309d0  3b6e04               cmp ebp, dword ptr [esi + 4]
// 007309d3  7444                 je 0x730a19
// 007309d5  85ed                 test ebp, ebp
// 007309d7  740c                 je 0x7309e5
// 007309d9  8d4d04               lea ecx, [ebp + 4]
// 007309dc  ba01000000           mov edx, 1
// 007309e1  f00fc111             lock xadd dword ptr [ecx], edx
// 007309e5  8b7e04               mov edi, dword ptr [esi + 4]
// 007309e8  85ff                 test edi, edi
// 007309ea  742a                 je 0x730a16
// 007309ec  8d4704               lea eax, [edi + 4]
// 007309ef  83c9ff               or ecx, 0xffffffff
// 007309f2  f00fc108             lock xadd dword ptr [eax], ecx
// 007309f6  751e                 jne 0x730a16
// 007309f8  8b17                 mov edx, dword ptr [edi]
// 007309fa  8b4204               mov eax, dword ptr [edx + 4]
// 007309fd  8bcf                 mov ecx, edi
// 007309ff  ffd0                 call eax
// 00730a01  8d4f08               lea ecx, [edi + 8]
// 00730a04  83caff               or edx, 0xffffffff
// 00730a07  f00fc111             lock xadd dword ptr [ecx], edx
// 00730a0b  7509                 jne 0x730a16
// 00730a0d  8b07                 mov eax, dword ptr [edi]
// 00730a0f  8b5008               mov edx, dword ptr [eax + 8]
// 00730a12  8bcf                 mov ecx, edi
// 00730a14  ffd2                 call edx
// 00730a16  896e04               mov dword ptr [esi + 4], ebp
// 00730a19  dd4308               fld qword ptr [ebx + 8]
// 00730a1c  dd5e08               fstp qword ptr [esi + 8]
// 00730a1f  dd4310               fld qword ptr [ebx + 0x10]
// 00730a22  dd5e10               fstp qword ptr [esi + 0x10]
// 00730a25  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 00730a29  7597                 jne 0x7309c2
// 00730a2b  5f                   pop edi
// 00730a2c  8bc6                 mov eax, esi
// 00730a2e  5e                   pop esi
// 00730a2f  5d                   pop ebp
// 00730a30  5b                   pop ebx
// 00730a31  c3                   ret 
// 00730a32  8b442410             mov eax, dword ptr [esp + 0x10]
// 00730a36  5b                   pop ebx
// 00730a37  c3                   ret 
// library openrbx-client/App\script\ScriptEvent.cpp (function ??$_Copy_backward_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@Uforward_iterator_tag@std@@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
