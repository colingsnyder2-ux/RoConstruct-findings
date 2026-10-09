// roc 2009-12 004f9950  unit: RBX::VBrickColor::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f9950
//
// 004f9950  55                   push ebp
// 004f9951  8bec                 mov ebp, esp
// 004f9953  6aff                 push -1
// 004f9955  68615c9300           push 0x935c61
// 004f995a  64a100000000         mov eax, dword ptr fs:[0]
// 004f9960  50                   push eax
// 004f9961  64892500000000       mov dword ptr fs:[0], esp
// 004f9968  83ec0c               sub esp, 0xc
// 004f996b  53                   push ebx
// 004f996c  56                   push esi
// 004f996d  8b7508               mov esi, dword ptr [ebp + 8]
// 004f9970  57                   push edi
// 004f9971  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004f9974  33db                 xor ebx, ebx
// 004f9976  8965f0               mov dword ptr [ebp - 0x10], esp
// 004f9979  8975ec               mov dword ptr [ebp - 0x14], esi
// 004f997c  895dfc               mov dword ptr [ebp - 4], ebx
// 004f997f  90                   nop 
// 004f9980  3bfb                 cmp edi, ebx
// 004f9982  7664                 jbe 0x4f99e8
// 004f9984  89750c               mov dword ptr [ebp + 0xc], esi
// 004f9987  8975e8               mov dword ptr [ebp - 0x18], esi
// 004f998a  c645fc01             mov byte ptr [ebp - 4], 1
// 004f998e  3bf3                 cmp esi, ebx
// 004f9990  744a                 je 0x4f99dc
// 004f9992  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004f9995  8b08                 mov ecx, dword ptr [eax]
// 004f9997  3bcb                 cmp ecx, ebx
// 004f9999  743d                 je 0x4f99d8
// 004f999b  8b11                 mov edx, dword ptr [ecx]
// 004f999d  8b4208               mov eax, dword ptr [edx + 8]
// 004f99a0  ffd0                 call eax
// 004f99a2  8906                 mov dword ptr [esi], eax
// 004f99a4  4f                   dec edi
// 004f99a5  83c604               add esi, 4
// 004f99a8  885dfc               mov byte ptr [ebp - 4], bl
// 004f99ab  897508               mov dword ptr [ebp + 8], esi
// 004f99ae  ebd0                 jmp 0x4f9980
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$_Uninit_fill_n@PAVany@boost@@IV12@V?$allocator@Vany@boost@@@std@@@std@@YAXPAVany@boost@@IABV12@AAV?$allocator@Vany@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
