// roc 2011-06 004a8720  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a8720
//
// 004a8720  55                   push ebp
// 004a8721  8bec                 mov ebp, esp
// 004a8723  6aff                 push -1
// 004a8725  68917f9d00           push 0x9d7f91
// 004a872a  64a100000000         mov eax, dword ptr fs:[0]
// 004a8730  50                   push eax
// 004a8731  64892500000000       mov dword ptr fs:[0], esp
// 004a8738  83ec0c               sub esp, 0xc
// 004a873b  53                   push ebx
// 004a873c  56                   push esi
// 004a873d  8b7508               mov esi, dword ptr [ebp + 8]
// 004a8740  57                   push edi
// 004a8741  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004a8744  33db                 xor ebx, ebx
// 004a8746  8965f0               mov dword ptr [ebp - 0x10], esp
// 004a8749  8975ec               mov dword ptr [ebp - 0x14], esi
// 004a874c  895dfc               mov dword ptr [ebp - 4], ebx
// 004a874f  90                   nop 
// 004a8750  3bfb                 cmp edi, ebx
// 004a8752  7664                 jbe 0x4a87b8
// 004a8754  89750c               mov dword ptr [ebp + 0xc], esi
// 004a8757  8975e8               mov dword ptr [ebp - 0x18], esi
// 004a875a  c645fc01             mov byte ptr [ebp - 4], 1
// 004a875e  3bf3                 cmp esi, ebx
// 004a8760  744a                 je 0x4a87ac
// 004a8762  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004a8765  8b08                 mov ecx, dword ptr [eax]
// 004a8767  3bcb                 cmp ecx, ebx
// 004a8769  743d                 je 0x4a87a8
// 004a876b  8b11                 mov edx, dword ptr [ecx]
// 004a876d  8b4208               mov eax, dword ptr [edx + 8]
// 004a8770  ffd0                 call eax
// 004a8772  8906                 mov dword ptr [esi], eax
// 004a8774  4f                   dec edi
// 004a8775  83c604               add esi, 4
// 004a8778  885dfc               mov byte ptr [ebp - 4], bl
// 004a877b  897508               mov dword ptr [ebp + 8], esi
// 004a877e  ebd0                 jmp 0x4a8750
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$_Uninit_fill_n@PAVany@boost@@IV12@V?$allocator@Vany@boost@@@std@@@std@@YAXPAVany@boost@@IABV12@AAV?$allocator@Vany@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
