// roc 2007-03 0052af70  unit: seg_00520000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052af70
//
// 0052af70  56                   push esi
// 0052af71  57                   push edi
// 0052af72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0052af76  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0052af7c  8b4808               mov ecx, dword ptr [eax + 8]
// 0052af7f  8bb73c010000         mov esi, dword ptr [edi + 0x13c]
// 0052af85  57                   push edi
// 0052af86  ffd1                 call ecx
// 0052af88  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052af8b  83c404               add esp, 4
// 0052af8e  83e800               sub eax, 0
// 0052af91  b901000000           mov ecx, 1
// 0052af96  742a                 je 0x52afc2
// 0052af98  2bc1                 sub eax, ecx
// 0052af9a  7419                 je 0x52afb5
// 0052af9c  2bc1                 sub eax, ecx
// 0052af9e  7535                 jne 0x52afd5
// 0052afa0  80bfb200000000       cmp byte ptr [edi + 0xb2], 0
// 0052afa7  7429                 je 0x52afd2
// 0052afa9  014e1c               add dword ptr [esi + 0x1c], ecx
// 0052afac  014e14               add dword ptr [esi + 0x14], ecx
// 0052afaf  5f                   pop edi
// 0052afb0  894e10               mov dword ptr [esi + 0x10], ecx
// 0052afb3  5e                   pop esi
// 0052afb4  c3                   ret 
// 0052afb5  014e14               add dword ptr [esi + 0x14], ecx
// 0052afb8  5f                   pop edi
// 0052afb9  c7461002000000       mov dword ptr [esi + 0x10], 2
// 0052afc0  5e                   pop esi
// 0052afc1  c3                   ret 
// 0052afc2  c7461002000000       mov dword ptr [esi + 0x10], 2
// 0052afc9  80bfb200000000       cmp byte ptr [edi + 0xb2], 0
// 0052afd0  7503                 jne 0x52afd5
// 0052afd2  014e1c               add dword ptr [esi + 0x1c], ecx
// 0052afd5  014e14               add dword ptr [esi + 0x14], ecx
// 0052afd8  5f                   pop edi
// 0052afd9  5e                   pop esi
// 0052afda  c3                   ret 
// library jpeg-6b/jcmaster.c (function _finish_pass_master)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
