// roc 2009-06 005a11f0  unit: seg_005a0000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a11f0
//
// 005a11f0  56                   push esi
// 005a11f1  57                   push edi
// 005a11f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a11f6  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 005a11fc  8b4608               mov eax, dword ptr [esi + 8]
// 005a11ff  3b87e0000000         cmp eax, dword ptr [edi + 0xe0]
// 005a1205  0f8381000000         jae 0x5a128c
// 005a120b  53                   push ebx
// 005a120c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005a1210  55                   push ebp
// 005a1211  8d6e0c               lea ebp, [esi + 0xc]
// 005a1214  837d0008             cmp dword ptr [ebp], 8
// 005a1218  7325                 jae 0x5a123f
// 005a121a  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a121e  8b8f44010000         mov ecx, dword ptr [edi + 0x144]
// 005a1224  6a08                 push 8
// 005a1226  55                   push ebp
// 005a1227  8d5618               lea edx, [esi + 0x18]
// 005a122a  52                   push edx
// 005a122b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a122f  50                   push eax
// 005a1230  8b4104               mov eax, dword ptr [ecx + 4]
// 005a1233  53                   push ebx
// 005a1234  52                   push edx
// 005a1235  57                   push edi
// 005a1236  ffd0                 call eax
// 005a1238  83c41c               add esp, 0x1c
// 005a123b  837d0008             cmp dword ptr [ebp], 8
// 005a123f  7549                 jne 0x5a128a
// 005a1241  8b8f48010000         mov ecx, dword ptr [edi + 0x148]
// 005a1247  8b4104               mov eax, dword ptr [ecx + 4]
// 005a124a  8d5618               lea edx, [esi + 0x18]
// 005a124d  52                   push edx
// 005a124e  57                   push edi
// 005a124f  ffd0                 call eax
// 005a1251  83c408               add esp, 8
// 005a1254  84c0                 test al, al
// 005a1256  7426                 je 0x5a127e
// 005a1258  807e1000             cmp byte ptr [esi + 0x10], 0
// 005a125c  7406                 je 0x5a1264
// 005a125e  ff03                 inc dword ptr [ebx]
// 005a1260  c6461000             mov byte ptr [esi + 0x10], 0
// 005a1264  ff4608               inc dword ptr [esi + 8]
// 005a1267  c7450000000000       mov dword ptr [ebp], 0
// 005a126e  8b4e08               mov ecx, dword ptr [esi + 8]
// 005a1271  3b8fe0000000         cmp ecx, dword ptr [edi + 0xe0]
// 005a1277  729b                 jb 0x5a1214
// 005a1279  5d                   pop ebp
// 005a127a  5b                   pop ebx
// 005a127b  5f                   pop edi
// 005a127c  5e                   pop esi
// 005a127d  c3                   ret 
// 005a127e  807e1000             cmp byte ptr [esi + 0x10], 0
// 005a1282  7506                 jne 0x5a128a
// 005a1284  ff0b                 dec dword ptr [ebx]
// 005a1286  c6461001             mov byte ptr [esi + 0x10], 1
// 005a128a  5d                   pop ebp
// 005a128b  5b                   pop ebx
// 005a128c  5f                   pop edi
// 005a128d  5e                   pop esi
// 005a128e  c3                   ret 
// library jpeg-6b/jcmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
