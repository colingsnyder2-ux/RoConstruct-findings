// roc 2009-06 00471b00  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00471b00
//
// 00471b00  83ec08               sub esp, 8
// 00471b03  8b542414             mov edx, dword ptr [esp + 0x14]
// 00471b07  53                   push ebx
// 00471b08  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00471b0c  56                   push esi
// 00471b0d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00471b11  57                   push edi
// 00471b12  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00471b16  32c0                 xor al, al
// 00471b18  88442410             mov byte ptr [esp + 0x10], al
// 00471b1c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00471b20  8844240c             mov byte ptr [esp + 0xc], al
// 00471b24  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00471b28  50                   push eax
// 00471b29  51                   push ecx
// 00471b2a  52                   push edx
// 00471b2b  57                   push edi
// 00471b2c  56                   push esi
// 00471b2d  53                   push ebx
// 00471b2e  e8edfeffff           call 0x471a20
// 00471b33  2bf3                 sub esi, ebx
// 00471b35  83c418               add esp, 0x18
// 00471b38  c1fe06               sar esi, 6
// 00471b3b  c1e606               shl esi, 6
// 00471b3e  8bc7                 mov eax, edi
// 00471b40  5f                   pop edi
// 00471b41  2bc6                 sub eax, esi
// 00471b43  5e                   pop esi
// 00471b44  5b                   pop ebx
// 00471b45  83c408               add esp, 8
// 00471b48  c3                   ret 
// library ogre-1.7.0/OgreTangentSpaceCalc.cpp (function ??$_Copy_backward_opt@PAUVertexInfo@TangentSpaceCalc@Ogre@@PAU123@@std@@YAPAUVertexInfo@TangentSpaceCalc@Ogre@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTangentSpaceCalc.cpp
