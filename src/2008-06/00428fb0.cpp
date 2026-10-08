// from server: 100% by auto
// roc 2008-06 00428fb0  unit: MainLogManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00428fb0
//
// 00428fb0  55                   push ebp
// 00428fb1  8bec                 mov ebp, esp
// 00428fb3  6aff                 push -1
// 00428fb5  6881f27b00           push 0x7bf281
// 00428fba  64a100000000         mov eax, dword ptr fs:[0]
// 00428fc0  50                   push eax
// 00428fc1  64892500000000       mov dword ptr fs:[0], esp
// 00428fc8  83ec0c               sub esp, 0xc
// 00428fcb  53                   push ebx
// 00428fcc  56                   push esi
// 00428fcd  8b7508               mov esi, dword ptr [ebp + 8]
// 00428fd0  57                   push edi
// 00428fd1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00428fd4  33db                 xor ebx, ebx
// 00428fd6  8965f0               mov dword ptr [ebp - 0x10], esp
// 00428fd9  8975ec               mov dword ptr [ebp - 0x14], esi
// 00428fdc  895dfc               mov dword ptr [ebp - 4], ebx
// 00428fdf  90                   nop 
// 00428fe0  3bfb                 cmp edi, ebx
// 00428fe2  7648                 jbe 0x42902c
// 00428fe4  89750c               mov dword ptr [ebp + 0xc], esi
// 00428fe7  8975e8               mov dword ptr [ebp - 0x18], esi
// 00428fea  c645fc01             mov byte ptr [ebp - 4], 1
// 00428fee  3bf3                 cmp esi, ebx
// 00428ff0  740c                 je 0x428ffe
// 00428ff2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00428ff5  50                   push eax
// 00428ff6  8bce                 mov ecx, esi
// 00428ff8  ff155c248000         call dword ptr [0x80245c]
// 00428ffe  4f                   dec edi
// 00428fff  83c61c               add esi, 0x1c
// 00429002  885dfc               mov byte ptr [ebp - 4], bl
// 00429005  897508               mov dword ptr [ebp + 8], esi
// 00429008  ebd6                 jmp 0x428fe0
// standard library vector<string> (function ??$_Uninit_fill_n@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IV12@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@YAXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@IABV10@AAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// stl: vector<string>
#include <string>
typedef std::string E;
#include <vector>
template class std::vector<E>;
