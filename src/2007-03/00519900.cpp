// roc 2007-03 00519900  unit: seg_00510000  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519900
//
// 00519900  53                   push ebx
// 00519901  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00519905  c1e307               shl ebx, 7
// 00519908  33d2                 xor edx, edx
// 0051990a  b8f0c99a3b           mov eax, 0x3b9ac9f0
// 0051990f  f7f3                 div ebx
// 00519911  55                   push ebp
// 00519912  56                   push esi
// 00519913  8b742410             mov esi, dword ptr [esp + 0x10]
// 00519917  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051991a  57                   push edi
// 0051991b  8bf8                 mov edi, eax
// 0051991d  85ff                 test edi, edi
// 0051991f  7f13                 jg 0x519934
// 00519921  8b06                 mov eax, dword ptr [esi]
// 00519923  c7401446000000       mov dword ptr [eax + 0x14], 0x46
// 0051992a  8b0e                 mov ecx, dword ptr [esi]
// 0051992c  8b11                 mov edx, dword ptr [ecx]
// 0051992e  56                   push esi
// 0051992f  ffd2                 call edx
// 00519931  83c404               add esp, 4
// 00519934  8b442420             mov eax, dword ptr [esp + 0x20]
// 00519938  3bf8                 cmp edi, eax
// 0051993a  7c02                 jl 0x51993e
// 0051993c  8bf8                 mov edi, eax
// 0051993e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00519942  03c0                 add eax, eax
// 00519944  03c0                 add eax, eax
// 00519946  50                   push eax
// 00519947  51                   push ecx
// 00519948  56                   push esi
// 00519949  897d50               mov dword ptr [ebp + 0x50], edi
// 0051994c  e82ffdffff           call 0x519680
// 00519951  33f6                 xor esi, esi
// 00519953  83c40c               add esp, 0xc
// 00519956  39742420             cmp dword ptr [esp + 0x20], esi
// 0051995a  8be8                 mov ebp, eax
// 0051995c  7646                 jbe 0x5199a4
// 0051995e  8bff                 mov edi, edi
// 00519960  8b442420             mov eax, dword ptr [esp + 0x20]
// 00519964  2bc6                 sub eax, esi
// 00519966  3bf8                 cmp edi, eax
// 00519968  7202                 jb 0x51996c
// 0051996a  8bf8                 mov edi, eax
// 0051996c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00519970  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00519974  8bd7                 mov edx, edi
// 00519976  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 0051997b  c1e207               shl edx, 7
// 0051997e  52                   push edx
// 0051997f  50                   push eax
// 00519980  51                   push ecx
// 00519981  e82afeffff           call 0x5197b0
// 00519986  83c40c               add esp, 0xc
// 00519989  85ff                 test edi, edi
// 0051998b  8bcf                 mov ecx, edi
// 0051998d  760f                 jbe 0x51999e
// 0051998f  90                   nop 
// 00519990  8944b500             mov dword ptr [ebp + esi*4], eax
// 00519994  83c601               add esi, 1
// 00519997  03c3                 add eax, ebx
// 00519999  83e901               sub ecx, 1
// 0051999c  75f2                 jne 0x519990
// 0051999e  3b742420             cmp esi, dword ptr [esp + 0x20]
// 005199a2  72bc                 jb 0x519960
// 005199a4  5f                   pop edi
// 005199a5  5e                   pop esi
// 005199a6  8bc5                 mov eax, ebp
// 005199a8  5d                   pop ebp
// 005199a9  5b                   pop ebx
// 005199aa  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_barray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
