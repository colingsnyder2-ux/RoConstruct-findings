// roc 2009-06 0071a9ae  unit: ActiveDocView  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071a9ae
//
// 0071a9ae  8bff                 mov edi, edi
// 0071a9b0  55                   push ebp
// 0071a9b1  8bec                 mov ebp, esp
// 0071a9b3  81ec28030000         sub esp, 0x328
// 0071a9b9  a30817a500           mov dword ptr [0xa51708], eax
// 0071a9be  890d0417a500         mov dword ptr [0xa51704], ecx
// 0071a9c4  89150017a500         mov dword ptr [0xa51700], edx
// 0071a9ca  891dfc16a500         mov dword ptr [0xa516fc], ebx
// 0071a9d0  8935f816a500         mov dword ptr [0xa516f8], esi
// 0071a9d6  893df416a500         mov dword ptr [0xa516f4], edi
// 0071a9dc  668c152017a500       mov word ptr [0xa51720], ss
// 0071a9e3  668c0d1417a500       mov word ptr [0xa51714], cs
// 0071a9ea  668c1df016a500       mov word ptr [0xa516f0], ds
// 0071a9f1  668c05ec16a500       mov word ptr [0xa516ec], es
// 0071a9f8  668c25e816a500       mov word ptr [0xa516e8], fs
// 0071a9ff  668c2de416a500       mov word ptr [0xa516e4], gs
// 0071aa06  9c                   pushfd 
// 0071aa07  8f051817a500         pop dword ptr [0xa51718]
// 0071aa0d  8b4500               mov eax, dword ptr [ebp]
// 0071aa10  a30c17a500           mov dword ptr [0xa5170c], eax
// 0071aa15  8b4504               mov eax, dword ptr [ebp + 4]
// 0071aa18  a31017a500           mov dword ptr [0xa51710], eax
// 0071aa1d  8d4508               lea eax, [ebp + 8]
// 0071aa20  a31c17a500           mov dword ptr [0xa5171c], eax
// 0071aa25  8b85e0fcffff         mov eax, dword ptr [ebp - 0x320]
// 0071aa2b  c7055816a50001000100 mov dword ptr [0xa51658], 0x10001
// 0071aa35  a11017a500           mov eax, dword ptr [0xa51710]
// 0071aa3a  a30c16a500           mov dword ptr [0xa5160c], eax
// 0071aa3f  c7050016a500090400c0 mov dword ptr [0xa51600], 0xc0000409
// 0071aa49  c7050416a50001000000 mov dword ptr [0xa51604], 1
// 0071aa53  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0071aa58  8985d8fcffff         mov dword ptr [ebp - 0x328], eax
// 0071aa5e  a1344fa200           mov eax, dword ptr [0xa24f34]
// 0071aa63  8985dcfcffff         mov dword ptr [ebp - 0x324], eax
// 0071aa69  ff1534e38900         call dword ptr [0x89e334]
// 0071aa6f  a35016a500           mov dword ptr [0xa51650], eax
// 0071aa74  6a01                 push 1
// 0071aa76  e851000000           call 0x71aacc
// 0071aa7b  59                   pop ecx
// 0071aa7c  6a00                 push 0
// 0071aa7e  ff159ce28900         call dword ptr [0x89e29c]
// 0071aa84  68c8118f00           push 0x8f11c8
// 0071aa89  ff1530e38900         call dword ptr [0x89e330]
// 0071aa8f  833d5016a50000       cmp dword ptr [0xa51650], 0
// 0071aa96  7508                 jne 0x71aaa0
// 0071aa98  6a01                 push 1
// 0071aa9a  e82d000000           call 0x71aacc
// 0071aa9f  59                   pop ecx
// 0071aaa0  68090400c0           push 0xc0000409
// 0071aaa5  ff158ce28900         call dword ptr [0x89e28c]
// 0071aaab  50                   push eax
// 0071aaac  ff152ce38900         call dword ptr [0x89e32c]
// 0071aab2  c9                   leave 
// 0071aab3  c3                   ret 
// copied from an identical function in another client (function ___report_gsfailure)

// roc-flags: /O2 /GS- /EHsc /MD
// roc-lang: cpp
// roc-cl: 21022
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/gs_report.obj