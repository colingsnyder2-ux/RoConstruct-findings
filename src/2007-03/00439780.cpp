// roc 2007-03 00439780  unit: seg_00430000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00439780
//
// 00439780  8b442408             mov eax, dword ptr [esp + 8]
// 00439784  8b542404             mov edx, dword ptr [esp + 4]
// 00439788  2bc2                 sub eax, edx
// 0043978a  56                   push esi
// 0043978b  c1f802               sar eax, 2
// 0043978e  85c0                 test eax, eax
// 00439790  57                   push edi
// 00439791  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00439795  8d0c8500000000       lea ecx, [eax*4]
// 0043979c  8d3439               lea esi, [ecx + edi]
// 0043979f  7e0d                 jle 0x4397ae
// 004397a1  51                   push ecx
// 004397a2  52                   push edx
// 004397a3  51                   push ecx
// 004397a4  57                   push edi
// 004397a5  ff1578e97700         call dword ptr [0x77e978]
// 004397ab  83c410               add esp, 0x10
// 004397ae  5f                   pop edi
// 004397af  8bc6                 mov eax, esi
// 004397b1  5e                   pop esi
// 004397b2  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??$_Copy_opt@PAPBVName@RBX@@PAPBV12@Urandom_access_iterator_tag@std@@@std@@YAPAPBVName@RBX@@PAPBV12@00Urandom_access_iterator_tag@0@U_Scalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
