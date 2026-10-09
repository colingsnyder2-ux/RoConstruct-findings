// roc 2010-06 004a76c0  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a76c0
//
// 004a76c0  55                   push ebp
// 004a76c1  8bec                 mov ebp, esp
// 004a76c3  6aff                 push -1
// 004a76c5  6871849800           push 0x988471
// 004a76ca  64a100000000         mov eax, dword ptr fs:[0]
// 004a76d0  50                   push eax
// 004a76d1  64892500000000       mov dword ptr fs:[0], esp
// 004a76d8  83ec0c               sub esp, 0xc
// 004a76db  53                   push ebx
// 004a76dc  56                   push esi
// 004a76dd  8b7508               mov esi, dword ptr [ebp + 8]
// 004a76e0  57                   push edi
// 004a76e1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004a76e4  33db                 xor ebx, ebx
// 004a76e6  8965f0               mov dword ptr [ebp - 0x10], esp
// 004a76e9  8975ec               mov dword ptr [ebp - 0x14], esi
// 004a76ec  895dfc               mov dword ptr [ebp - 4], ebx
// 004a76ef  90                   nop 
// 004a76f0  3bfb                 cmp edi, ebx
// 004a76f2  7664                 jbe 0x4a7758
// 004a76f4  89750c               mov dword ptr [ebp + 0xc], esi
// 004a76f7  8975e8               mov dword ptr [ebp - 0x18], esi
// 004a76fa  c645fc01             mov byte ptr [ebp - 4], 1
// 004a76fe  3bf3                 cmp esi, ebx
// 004a7700  744a                 je 0x4a774c
// 004a7702  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004a7705  8b08                 mov ecx, dword ptr [eax]
// 004a7707  3bcb                 cmp ecx, ebx
// 004a7709  743d                 je 0x4a7748
// 004a770b  8b11                 mov edx, dword ptr [ecx]
// 004a770d  8b4208               mov eax, dword ptr [edx + 8]
// 004a7710  ffd0                 call eax
// 004a7712  8906                 mov dword ptr [esi], eax
// 004a7714  4f                   dec edi
// 004a7715  83c604               add esi, 4
// 004a7718  885dfc               mov byte ptr [ebp - 4], bl
// 004a771b  897508               mov dword ptr [ebp + 8], esi
// 004a771e  ebd0                 jmp 0x4a76f0
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$_Uninit_fill_n@PAVany@boost@@IV12@V?$allocator@Vany@boost@@@std@@@std@@YAXPAVany@boost@@IABV12@AAV?$allocator@Vany@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
