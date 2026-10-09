// roc 2008-06 0041aa50  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041aa50
//
// 0041aa50  55                   push ebp
// 0041aa51  8bec                 mov ebp, esp
// 0041aa53  6aff                 push -1
// 0041aa55  68a1df7b00           push 0x7bdfa1
// 0041aa5a  64a100000000         mov eax, dword ptr fs:[0]
// 0041aa60  50                   push eax
// 0041aa61  64892500000000       mov dword ptr fs:[0], esp
// 0041aa68  83ec0c               sub esp, 0xc
// 0041aa6b  53                   push ebx
// 0041aa6c  56                   push esi
// 0041aa6d  8b7508               mov esi, dword ptr [ebp + 8]
// 0041aa70  57                   push edi
// 0041aa71  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0041aa74  33db                 xor ebx, ebx
// 0041aa76  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041aa79  8975ec               mov dword ptr [ebp - 0x14], esi
// 0041aa7c  895dfc               mov dword ptr [ebp - 4], ebx
// 0041aa7f  90                   nop 
// 0041aa80  3bfb                 cmp edi, ebx
// 0041aa82  7664                 jbe 0x41aae8
// 0041aa84  89750c               mov dword ptr [ebp + 0xc], esi
// 0041aa87  8975e8               mov dword ptr [ebp - 0x18], esi
// 0041aa8a  c645fc01             mov byte ptr [ebp - 4], 1
// 0041aa8e  3bf3                 cmp esi, ebx
// 0041aa90  744a                 je 0x41aadc
// 0041aa92  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0041aa95  8b08                 mov ecx, dword ptr [eax]
// 0041aa97  3bcb                 cmp ecx, ebx
// 0041aa99  743d                 je 0x41aad8
// 0041aa9b  8b11                 mov edx, dword ptr [ecx]
// 0041aa9d  8b4208               mov eax, dword ptr [edx + 8]
// 0041aaa0  ffd0                 call eax
// 0041aaa2  8906                 mov dword ptr [esi], eax
// 0041aaa4  4f                   dec edi
// 0041aaa5  83c604               add esi, 4
// 0041aaa8  885dfc               mov byte ptr [ebp - 4], bl
// 0041aaab  897508               mov dword ptr [ebp + 8], esi
// 0041aaae  ebd0                 jmp 0x41aa80
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$_Uninit_fill_n@PAVany@boost@@IV12@V?$allocator@Vany@boost@@@std@@@std@@YAXPAVany@boost@@IABV12@AAV?$allocator@Vany@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
