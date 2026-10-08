// roc 2007-03 005e8380  unit: seg_005e0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e8380
//
// 005e8380  8b442408             mov eax, dword ptr [esp + 8]
// 005e8384  8b542404             mov edx, dword ptr [esp + 4]
// 005e8388  2bc2                 sub eax, edx
// 005e838a  c1f802               sar eax, 2
// 005e838d  56                   push esi
// 005e838e  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e8392  8d0c8500000000       lea ecx, [eax*4]
// 005e8399  2bf1                 sub esi, ecx
// 005e839b  85c0                 test eax, eax
// 005e839d  7e0d                 jle 0x5e83ac
// 005e839f  51                   push ecx
// 005e83a0  52                   push edx
// 005e83a1  51                   push ecx
// 005e83a2  56                   push esi
// 005e83a3  ff1578e97700         call dword ptr [0x77e978]
// 005e83a9  83c410               add esp, 0x10
// 005e83ac  8bc6                 mov eax, esi
// 005e83ae  5e                   pop esi
// 005e83af  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$_Copy_backward_opt@PAPBVPrimitive@RBX@@PAPBV12@Urandom_access_iterator_tag@std@@@std@@YAPAPBVPrimitive@RBX@@PAPBV12@00Urandom_access_iterator_tag@0@U_Scalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
