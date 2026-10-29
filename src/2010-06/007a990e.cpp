// roc 2010-06 007a990e  unit: ActiveDocView  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a990e
//
// 007a990e  8bff                 mov edi, edi
// 007a9910  55                   push ebp
// 007a9911  8bec                 mov ebp, esp
// 007a9913  81ec28030000         sub esp, 0x328
// 007a9919  a39052c200           mov dword ptr [0xc25290], eax
// 007a991e  890d8c52c200         mov dword ptr [0xc2528c], ecx
// 007a9924  89158852c200         mov dword ptr [0xc25288], edx
// 007a992a  891d8452c200         mov dword ptr [0xc25284], ebx
// 007a9930  89358052c200         mov dword ptr [0xc25280], esi
// 007a9936  893d7c52c200         mov dword ptr [0xc2527c], edi
// 007a993c  668c15a852c200       mov word ptr [0xc252a8], ss
// 007a9943  668c0d9c52c200       mov word ptr [0xc2529c], cs
// 007a994a  668c1d7852c200       mov word ptr [0xc25278], ds
// 007a9951  668c057452c200       mov word ptr [0xc25274], es
// 007a9958  668c257052c200       mov word ptr [0xc25270], fs
// 007a995f  668c2d6c52c200       mov word ptr [0xc2526c], gs
// 007a9966  9c                   pushfd 
// 007a9967  8f05a052c200         pop dword ptr [0xc252a0]
// 007a996d  8b4500               mov eax, dword ptr [ebp]
// 007a9970  a39452c200           mov dword ptr [0xc25294], eax
// 007a9975  8b4504               mov eax, dword ptr [ebp + 4]
// 007a9978  a39852c200           mov dword ptr [0xc25298], eax
// 007a997d  8d4508               lea eax, [ebp + 8]
// 007a9980  a3a452c200           mov dword ptr [0xc252a4], eax
// 007a9985  8b85e0fcffff         mov eax, dword ptr [ebp - 0x320]
// 007a998b  c705e051c20001000100 mov dword ptr [0xc251e0], 0x10001
// 007a9995  a19852c200           mov eax, dword ptr [0xc25298]
// 007a999a  a39451c200           mov dword ptr [0xc25194], eax
// 007a999f  c7058851c200090400c0 mov dword ptr [0xc25188], 0xc0000409
// 007a99a9  c7058c51c20001000000 mov dword ptr [0xc2518c], 1
// 007a99b3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007a99b8  8985d8fcffff         mov dword ptr [ebp - 0x328], eax
// 007a99be  a1b45fbe00           mov eax, dword ptr [0xbe5fb4]
// 007a99c3  8985dcfcffff         mov dword ptr [ebp - 0x324], eax
// 007a99c9  ff15cca19e00         call dword ptr [0x9ea1cc]
// 007a99cf  a3d851c200           mov dword ptr [0xc251d8], eax
// 007a99d4  6a01                 push 1
// 007a99d6  e851000000           call 0x7a9a2c
// 007a99db  59                   pop ecx
// 007a99dc  6a00                 push 0
// 007a99de  ff15a4a29e00         call dword ptr [0x9ea2a4]
// 007a99e4  689059a500           push 0xa55990
// 007a99e9  ff15d0a19e00         call dword ptr [0x9ea1d0]
// 007a99ef  833dd851c20000       cmp dword ptr [0xc251d8], 0
// 007a99f6  7508                 jne 0x7a9a00
// 007a99f8  6a01                 push 1
// 007a99fa  e82d000000           call 0x7a9a2c
// 007a99ff  59                   pop ecx
// 007a9a00  68090400c0           push 0xc0000409
// 007a9a05  ff15b4a29e00         call dword ptr [0x9ea2b4]
// 007a9a0b  50                   push eax
// 007a9a0c  ff15d4a19e00         call dword ptr [0x9ea1d4]
// 007a9a12  c9                   leave 
// 007a9a13  c3                   ret 
// copied from an identical function in another client (function ___report_gsfailure)

// roc-flags: /O2 /GS- /EHsc /MD
// roc-lang: cpp
// roc-cl: 21022
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/gs_report.obj