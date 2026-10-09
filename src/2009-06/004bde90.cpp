// roc 2009-06 004bde90  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bde90
//
// 004bde90  55                   push ebp
// 004bde91  8bec                 mov ebp, esp
// 004bde93  6aff                 push -1
// 004bde95  6891938500           push 0x859391
// 004bde9a  64a100000000         mov eax, dword ptr fs:[0]
// 004bdea0  50                   push eax
// 004bdea1  64892500000000       mov dword ptr fs:[0], esp
// 004bdea8  83ec0c               sub esp, 0xc
// 004bdeab  53                   push ebx
// 004bdeac  56                   push esi
// 004bdead  8b7508               mov esi, dword ptr [ebp + 8]
// 004bdeb0  57                   push edi
// 004bdeb1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bdeb4  33db                 xor ebx, ebx
// 004bdeb6  8965f0               mov dword ptr [ebp - 0x10], esp
// 004bdeb9  8975ec               mov dword ptr [ebp - 0x14], esi
// 004bdebc  895dfc               mov dword ptr [ebp - 4], ebx
// 004bdebf  90                   nop 
// 004bdec0  3bfb                 cmp edi, ebx
// 004bdec2  7664                 jbe 0x4bdf28
// 004bdec4  89750c               mov dword ptr [ebp + 0xc], esi
// 004bdec7  8975e8               mov dword ptr [ebp - 0x18], esi
// 004bdeca  c645fc01             mov byte ptr [ebp - 4], 1
// 004bdece  3bf3                 cmp esi, ebx
// 004bded0  744a                 je 0x4bdf1c
// 004bded2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004bded5  8b08                 mov ecx, dword ptr [eax]
// 004bded7  3bcb                 cmp ecx, ebx
// 004bded9  743d                 je 0x4bdf18
// 004bdedb  8b11                 mov edx, dword ptr [ecx]
// 004bdedd  8b4208               mov eax, dword ptr [edx + 8]
// 004bdee0  ffd0                 call eax
// 004bdee2  8906                 mov dword ptr [esi], eax
// 004bdee4  4f                   dec edi
// 004bdee5  83c604               add esi, 4
// 004bdee8  885dfc               mov byte ptr [ebp - 4], bl
// 004bdeeb  897508               mov dword ptr [ebp + 8], esi
// 004bdeee  ebd0                 jmp 0x4bdec0
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$_Uninit_fill_n@PAVany@boost@@IV12@V?$allocator@Vany@boost@@@std@@@std@@YAXPAVany@boost@@IABV12@AAV?$allocator@Vany@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
