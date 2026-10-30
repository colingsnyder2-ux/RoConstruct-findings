// roc 2009-12 00820260  unit: CXTPReportControl  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00820260
//
// 00820260  6aff                 push -1
// 00820262  6828af9500           push 0x95af28
// 00820267  64a100000000         mov eax, dword ptr fs:[0]
// 0082026d  50                   push eax
// 0082026e  83ec14               sub esp, 0x14
// 00820271  53                   push ebx
// 00820272  55                   push ebp
// 00820273  56                   push esi
// 00820274  57                   push edi
// 00820275  a10052b600           mov eax, dword ptr [0xb65200]
// 0082027a  33c4                 xor eax, esp
// 0082027c  50                   push eax
// 0082027d  8d442428             lea eax, [esp + 0x28]
// 00820281  64a300000000         mov dword ptr fs:[0], eax
// 00820287  8bf1                 mov esi, ecx
// 00820289  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0082028d  8a44243c             mov al, byte ptr [esp + 0x3c]
// 00820291  33ff                 xor edi, edi
// 00820293  8886c0020000         mov byte ptr [esi + 0x2c0], al
// 00820299  3bef                 cmp ebp, edi
// 0082029b  7518                 jne 0x8202b5
// 0082029d  8b8ebc020000         mov ecx, dword ptr [esi + 0x2bc]
// 008202a3  51                   push ecx
// 008202a4  ff153cb19800         call dword ptr [0x98b13c]
// 008202aa  89bebc020000         mov dword ptr [esi + 0x2bc], edi
// 008202b0  e9d6000000           jmp 0x82038b
// 008202b5  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 008202bb  8b1d3cb19800         mov ebx, dword ptr [0x98b13c]
// 008202c1  3bc7                 cmp eax, edi
// 008202c3  7409                 je 0x8202ce
// 008202c5  50                   push eax
// 008202c6  ffd3                 call ebx
// 008202c8  89bebc020000         mov dword ptr [esi + 0x2bc], edi
// 008202ce  57                   push edi
// 008202cf  55                   push ebp
// 008202d0  e84ba7feff           call 0x80aa20
// 008202d5  83c408               add esp, 8
// 008202d8  8986bc020000         mov dword ptr [esi + 0x2bc], eax
// 008202de  3bc7                 cmp eax, edi
// 008202e0  742c                 je 0x82030e
// 008202e2  50                   push eax
// 008202e3  e87c40fdff           call 0x7f4364
// 008202e8  8b4004               mov eax, dword ptr [eax + 4]
// 008202eb  8d96c4020000         lea edx, [esi + 0x2c4]
// 008202f1  52                   push edx
// 008202f2  6a18                 push 0x18
// 008202f4  50                   push eax
// 008202f5  ff155cb19800         call dword ptr [0x98b15c]
// 008202fb  85c0                 test eax, eax
// 008202fd  7513                 jne 0x820312
// 008202ff  8b8ebc020000         mov ecx, dword ptr [esi + 0x2bc]
// 00820305  51                   push ecx
// 00820306  ffd3                 call ebx
// 00820308  89bebc020000         mov dword ptr [esi + 0x2bc], edi
// 0082030e  33c0                 xor eax, eax
// 00820310  eb7e                 jmp 0x820390
// 00820312  33c0                 xor eax, eax
// 00820314  6683bed602000020     cmp word ptr [esi + 0x2d6], 0x20
// 0082031c  0f94c0               sete al
// 0082031f  3bc7                 cmp eax, edi
// 00820321  7568                 jne 0x82038b
// 00820323  8b96bc020000         mov edx, dword ptr [esi + 0x2bc]
// 00820329  52                   push edx
// 0082032a  57                   push edi
// 0082032b  8d4c241c             lea ecx, [esp + 0x1c]
// 0082032f  e8dcb50200           call 0x84b910
// 00820334  83ec08               sub esp, 8
// 00820337  8bc4                 mov eax, esp
// 00820339  89642444             mov dword ptr [esp + 0x44], esp
// 0082033d  83ec08               sub esp, 8
// 00820340  8938                 mov dword ptr [eax], edi
// 00820342  897804               mov dword ptr [eax + 4], edi
// 00820345  8bc4                 mov eax, esp
// 00820347  8964244c             mov dword ptr [esp + 0x4c], esp
// 0082034b  8938                 mov dword ptr [eax], edi
// 0082034d  897804               mov dword ptr [eax + 4], edi
// 00820350  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 00820356  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 0082035c  50                   push eax
// 0082035d  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 00820363  51                   push ecx
// 00820364  57                   push edi
// 00820365  33d2                 xor edx, edx
// 00820367  52                   push edx
// 00820368  50                   push eax
// 00820369  8d4c2438             lea ecx, [esp + 0x38]
// 0082036d  51                   push ecx
// 0082036e  897c2458             mov dword ptr [esp + 0x58], edi
// 00820372  e83907ffff           call 0x810ab0
// 00820377  83c428               add esp, 0x28
// 0082037a  8d4c2414             lea ecx, [esp + 0x14]
// 0082037e  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00820386  e805b60200           call 0x84b990
// 0082038b  b801000000           mov eax, 1
// 00820390  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00820394  64890d00000000       mov dword ptr fs:[0], ecx
// 0082039b  59                   pop ecx
// 0082039c  5f                   pop edi
// 0082039d  5e                   pop esi
// 0082039e  5d                   pop ebp
// 0082039f  5b                   pop ebx
// 008203a0  83c420               add esp, 0x20
// 008203a3  c20800               ret 8
// copied from an identical function in another client (function ?SetWatermarkBitmap@CXTPReportControl@@MAEHPAUHBITMAP__@@E@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp