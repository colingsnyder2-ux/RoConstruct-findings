// roc 2009-12 005dbfc0  unit: boost::Vbad_lexical_cast::?$error_info_injector  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005dbfc0
//
// 005dbfc0  55                   push ebp
// 005dbfc1  8bec                 mov ebp, esp
// 005dbfc3  6aff                 push -1
// 005dbfc5  6840db9300           push 0x93db40
// 005dbfca  64a100000000         mov eax, dword ptr fs:[0]
// 005dbfd0  50                   push eax
// 005dbfd1  64892500000000       mov dword ptr fs:[0], esp
// 005dbfd8  83ec08               sub esp, 8
// 005dbfdb  53                   push ebx
// 005dbfdc  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 005dbfdf  56                   push esi
// 005dbfe0  8b7508               mov esi, dword ptr [ebp + 8]
// 005dbfe3  57                   push edi
// 005dbfe4  8bc3                 mov eax, ebx
// 005dbfe6  2bc6                 sub eax, esi
// 005dbfe8  8965f0               mov dword ptr [ebp - 0x10], esp
// 005dbfeb  8bf9                 mov edi, ecx
// 005dbfed  50                   push eax
// 005dbfee  897dec               mov dword ptr [ebp - 0x14], edi
// 005dbff1  ff152cb59800         call dword ptr [0x98b52c]
// 005dbff7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005dbffe  8bff                 mov edi, edi
// 005dc000  3bf3                 cmp esi, ebx
// 005dc002  7427                 je 0x5dc02b
// 005dc004  0fb606               movzx eax, byte ptr [esi]
// 005dc007  50                   push eax
// 005dc008  6a01                 push 1
// 005dc00a  8bcf                 mov ecx, edi
// 005dc00c  ff1530b59800         call dword ptr [0x98b530]
// 005dc012  46                   inc esi
// 005dc013  ebeb                 jmp 0x5dc000
// 005dc015  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005dc018  6a00                 push 0
// 005dc01a  6a01                 push 1
// 005dc01c  ff1534b59800         call dword ptr [0x98b534]
// 005dc022  6a00                 push 0
// 005dc024  6a00                 push 0
// 005dc026  e84d882100           call 0x7f4878
// 005dc02b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005dc02e  5f                   pop edi
// 005dc02f  5e                   pop esi
// 005dc030  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc037  5b                   pop ebx
// 005dc038  8be5                 mov esp, ebp
// 005dc03a  5d                   pop ebp
// 005dc03b  c20c00               ret 0xc
// copied from an identical function in another client (function ??$_Construct@PAD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEXPAD0Uforward_iterator_tag@1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp