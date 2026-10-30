// roc 2009-12 008203b0  unit: CXTPReportControl  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008203b0
//
// 008203b0  6aff                 push -1
// 008203b2  6828af9500           push 0x95af28
// 008203b7  64a100000000         mov eax, dword ptr fs:[0]
// 008203bd  50                   push eax
// 008203be  83ec14               sub esp, 0x14
// 008203c1  53                   push ebx
// 008203c2  55                   push ebp
// 008203c3  56                   push esi
// 008203c4  57                   push edi
// 008203c5  a10052b600           mov eax, dword ptr [0xb65200]
// 008203ca  33c4                 xor eax, esp
// 008203cc  50                   push eax
// 008203cd  8d442428             lea eax, [esp + 0x28]
// 008203d1  64a300000000         mov dword ptr fs:[0], eax
// 008203d7  8bf1                 mov esi, ecx
// 008203d9  8a44243c             mov al, byte ptr [esp + 0x3c]
// 008203dd  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008203e1  8886c0020000         mov byte ptr [esi + 0x2c0], al
// 008203e7  8bc5                 mov eax, ebp
// 008203e9  8d5001               lea edx, [eax + 1]
// 008203ec  33db                 xor ebx, ebx
// 008203ee  8bff                 mov edi, edi
// 008203f0  8a08                 mov cl, byte ptr [eax]
// 008203f2  40                   inc eax
// 008203f3  3acb                 cmp cl, bl
// 008203f5  75f9                 jne 0x8203f0
// 008203f7  2bc2                 sub eax, edx
// 008203f9  7518                 jne 0x820413
// 008203fb  8b8ebc020000         mov ecx, dword ptr [esi + 0x2bc]
// 00820401  51                   push ecx
// 00820402  ff153cb19800         call dword ptr [0x98b13c]
// 00820408  899ebc020000         mov dword ptr [esi + 0x2bc], ebx
// 0082040e  e9d5000000           jmp 0x8204e8
// 00820413  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 00820419  8b3d3cb19800         mov edi, dword ptr [0x98b13c]
// 0082041f  3bc3                 cmp eax, ebx
// 00820421  7409                 je 0x82042c
// 00820423  50                   push eax
// 00820424  ffd7                 call edi
// 00820426  899ebc020000         mov dword ptr [esi + 0x2bc], ebx
// 0082042c  8d54243c             lea edx, [esp + 0x3c]
// 00820430  52                   push edx
// 00820431  55                   push ebp
// 00820432  895c2444             mov dword ptr [esp + 0x44], ebx
// 00820436  e845b5feff           call 0x80b980
// 0082043b  83c408               add esp, 8
// 0082043e  8986bc020000         mov dword ptr [esi + 0x2bc], eax
// 00820444  3bc3                 cmp eax, ebx
// 00820446  742c                 je 0x820474
// 00820448  50                   push eax
// 00820449  e8163ffdff           call 0x7f4364
// 0082044e  8b5004               mov edx, dword ptr [eax + 4]
// 00820451  8d8ec4020000         lea ecx, [esi + 0x2c4]
// 00820457  51                   push ecx
// 00820458  6a18                 push 0x18
// 0082045a  52                   push edx
// 0082045b  ff155cb19800         call dword ptr [0x98b15c]
// 00820461  85c0                 test eax, eax
// 00820463  7513                 jne 0x820478
// 00820465  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 0082046b  50                   push eax
// 0082046c  ffd7                 call edi
// 0082046e  899ebc020000         mov dword ptr [esi + 0x2bc], ebx
// 00820474  33c0                 xor eax, eax
// 00820476  eb75                 jmp 0x8204ed
// 00820478  395c243c             cmp dword ptr [esp + 0x3c], ebx
// 0082047c  756a                 jne 0x8204e8
// 0082047e  8b8ebc020000         mov ecx, dword ptr [esi + 0x2bc]
// 00820484  51                   push ecx
// 00820485  53                   push ebx
// 00820486  8d4c241c             lea ecx, [esp + 0x1c]
// 0082048a  e881b40200           call 0x84b910
// 0082048f  83ec08               sub esp, 8
// 00820492  8bc4                 mov eax, esp
// 00820494  89642440             mov dword ptr [esp + 0x40], esp
// 00820498  83ec08               sub esp, 8
// 0082049b  8918                 mov dword ptr [eax], ebx
// 0082049d  895804               mov dword ptr [eax + 4], ebx
// 008204a0  8bc4                 mov eax, esp
// 008204a2  8918                 mov dword ptr [eax], ebx
// 008204a4  895804               mov dword ptr [eax + 4], ebx
// 008204a7  8b86cc020000         mov eax, dword ptr [esi + 0x2cc]
// 008204ad  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 008204b3  89642448             mov dword ptr [esp + 0x48], esp
// 008204b7  50                   push eax
// 008204b8  51                   push ecx
// 008204b9  33d2                 xor edx, edx
// 008204bb  33ff                 xor edi, edi
// 008204bd  57                   push edi
// 008204be  52                   push edx
// 008204bf  8b96bc020000         mov edx, dword ptr [esi + 0x2bc]
// 008204c5  52                   push edx
// 008204c6  8d442438             lea eax, [esp + 0x38]
// 008204ca  50                   push eax
// 008204cb  895c2458             mov dword ptr [esp + 0x58], ebx
// 008204cf  e8dc05ffff           call 0x810ab0
// 008204d4  83c428               add esp, 0x28
// 008204d7  8d4c2414             lea ecx, [esp + 0x14]
// 008204db  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008204e3  e8a8b40200           call 0x84b990
// 008204e8  b801000000           mov eax, 1
// 008204ed  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008204f1  64890d00000000       mov dword ptr fs:[0], ecx
// 008204f8  59                   pop ecx
// 008204f9  5f                   pop edi
// 008204fa  5e                   pop esi
// 008204fb  5d                   pop ebp
// 008204fc  5b                   pop ebx
// 008204fd  83c420               add esp, 0x20
// 00820500  c20800               ret 8
// copied from an identical function in another client (function ?SetWatermarkBitmap@CXTPReportControl@@MAEHPBDE@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp