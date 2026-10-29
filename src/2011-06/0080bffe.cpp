// roc 2011-06 0080bffe  unit: boost::exception  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080bffe
//
// 0080bffe  8bff                 mov edi, edi
// 0080c000  55                   push ebp
// 0080c001  8bec                 mov ebp, esp
// 0080c003  81ec28030000         sub esp, 0x328
// 0080c009  a3787fd100           mov dword ptr [0xd17f78], eax
// 0080c00e  890d747fd100         mov dword ptr [0xd17f74], ecx
// 0080c014  8915707fd100         mov dword ptr [0xd17f70], edx
// 0080c01a  891d6c7fd100         mov dword ptr [0xd17f6c], ebx
// 0080c020  8935687fd100         mov dword ptr [0xd17f68], esi
// 0080c026  893d647fd100         mov dword ptr [0xd17f64], edi
// 0080c02c  668c15907fd100       mov word ptr [0xd17f90], ss
// 0080c033  668c0d847fd100       mov word ptr [0xd17f84], cs
// 0080c03a  668c1d607fd100       mov word ptr [0xd17f60], ds
// 0080c041  668c055c7fd100       mov word ptr [0xd17f5c], es
// 0080c048  668c25587fd100       mov word ptr [0xd17f58], fs
// 0080c04f  668c2d547fd100       mov word ptr [0xd17f54], gs
// 0080c056  9c                   pushfd 
// 0080c057  8f05887fd100         pop dword ptr [0xd17f88]
// 0080c05d  8b4500               mov eax, dword ptr [ebp]
// 0080c060  a37c7fd100           mov dword ptr [0xd17f7c], eax
// 0080c065  8b4504               mov eax, dword ptr [ebp + 4]
// 0080c068  a3807fd100           mov dword ptr [0xd17f80], eax
// 0080c06d  8d4508               lea eax, [ebp + 8]
// 0080c070  a38c7fd100           mov dword ptr [0xd17f8c], eax
// 0080c075  8b85e0fcffff         mov eax, dword ptr [ebp - 0x320]
// 0080c07b  c705c87ed10001000100 mov dword ptr [0xd17ec8], 0x10001
// 0080c085  a1807fd100           mov eax, dword ptr [0xd17f80]
// 0080c08a  a37c7ed100           mov dword ptr [0xd17e7c], eax
// 0080c08f  c705707ed100090400c0 mov dword ptr [0xd17e70], 0xc0000409
// 0080c099  c705747ed10001000000 mov dword ptr [0xd17e74], 1
// 0080c0a3  a12058c900           mov eax, dword ptr [0xc95820]
// 0080c0a8  8985d8fcffff         mov dword ptr [ebp - 0x328], eax
// 0080c0ae  a12458c900           mov eax, dword ptr [0xc95824]
// 0080c0b3  8985dcfcffff         mov dword ptr [ebp - 0x324], eax
// 0080c0b9  ff15d402a400         call dword ptr [0xa402d4]
// 0080c0bf  a3c07ed100           mov dword ptr [0xd17ec0], eax
// 0080c0c4  6a01                 push 1
// 0080c0c6  e851000000           call 0x80c11c
// 0080c0cb  59                   pop ecx
// 0080c0cc  6a00                 push 0
// 0080c0ce  ff157002a400         call dword ptr [0xa40270]
// 0080c0d4  68e015ac00           push 0xac15e0
// 0080c0d9  ff15d002a400         call dword ptr [0xa402d0]
// 0080c0df  833dc07ed10000       cmp dword ptr [0xd17ec0], 0
// 0080c0e6  7508                 jne 0x80c0f0
// 0080c0e8  6a01                 push 1
// 0080c0ea  e82d000000           call 0x80c11c
// 0080c0ef  59                   pop ecx
// 0080c0f0  68090400c0           push 0xc0000409
// 0080c0f5  ff150802a400         call dword ptr [0xa40208]
// 0080c0fb  50                   push eax
// 0080c0fc  ff15cc02a400         call dword ptr [0xa402cc]
// 0080c102  c9                   leave 
// 0080c103  c3                   ret 
// copied from an identical function in another client (function ___report_gsfailure)

// roc-flags: /O2 /GS- /EHsc /MD
// roc-lang: cpp
// roc-cl: 21022
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/src/build/INTEL/mt_obj/gs_report.obj