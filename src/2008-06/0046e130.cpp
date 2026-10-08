// roc 2008-06 0046e130  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046e130
//
// 0046e130  83ec08               sub esp, 8
// 0046e133  8b542414             mov edx, dword ptr [esp + 0x14]
// 0046e137  53                   push ebx
// 0046e138  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0046e13c  56                   push esi
// 0046e13d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046e141  57                   push edi
// 0046e142  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0046e146  32c0                 xor al, al
// 0046e148  88442410             mov byte ptr [esp + 0x10], al
// 0046e14c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046e150  8844240c             mov byte ptr [esp + 0xc], al
// 0046e154  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046e158  50                   push eax
// 0046e159  51                   push ecx
// 0046e15a  52                   push edx
// 0046e15b  57                   push edi
// 0046e15c  56                   push esi
// 0046e15d  53                   push ebx
// 0046e15e  e80dfeffff           call 0x46df70
// 0046e163  2bf3                 sub esi, ebx
// 0046e165  83c418               add esp, 0x18
// 0046e168  c1fe06               sar esi, 6
// 0046e16b  c1e606               shl esi, 6
// 0046e16e  8bc7                 mov eax, edi
// 0046e170  5f                   pop edi
// 0046e171  2bc6                 sub eax, esi
// 0046e173  5e                   pop esi
// 0046e174  5b                   pop ebx
// 0046e175  83c408               add esp, 8
// 0046e178  c3                   ret 
// library ogre-1.7.0/OgreTangentSpaceCalc.cpp (function ??$_Copy_backward_opt@PAUVertexInfo@TangentSpaceCalc@Ogre@@PAU123@@std@@YAPAUVertexInfo@TangentSpaceCalc@Ogre@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTangentSpaceCalc.cpp
