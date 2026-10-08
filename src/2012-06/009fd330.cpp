// roc 2012-06 009fd330  unit: CXTPControlGallery  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fd330
//
// 009fd330  8b442408             mov eax, dword ptr [esp + 8]
// 009fd334  83ec20               sub esp, 0x20
// 009fd337  56                   push esi
// 009fd338  8bf1                 mov esi, ecx
// 009fd33a  85c0                 test eax, eax
// 009fd33c  7c77                 jl 0x9fd3b5
// 009fd33e  3b8654020000         cmp eax, dword ptr [esi + 0x254]
// 009fd344  7d6f                 jge 0x9fd3b5
// 009fd346  8b8e50020000         mov ecx, dword ptr [esi + 0x250]
// 009fd34c  8d0440               lea eax, [eax + eax*2]
// 009fd34f  8d14c1               lea edx, [ecx + eax*8]
// 009fd352  52                   push edx
// 009fd353  8d442408             lea eax, [esp + 8]
// 009fd357  50                   push eax
// 009fd358  ff15ec3ab200         call dword ptr [0xb23aec]
// 009fd35e  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 009fd364  f7d9                 neg ecx
// 009fd366  51                   push ecx
// 009fd367  6a00                 push 0
// 009fd369  8d54240c             lea edx, [esp + 0xc]
// 009fd36d  52                   push edx
// 009fd36e  ff15f43ab200         call dword ptr [0xb23af4]
// 009fd374  8d442414             lea eax, [esp + 0x14]
// 009fd378  50                   push eax
// 009fd379  8bce                 mov ecx, esi
// 009fd37b  e870d9ffff           call 0x9facf0
// 009fd380  50                   push eax
// 009fd381  8d4c2408             lea ecx, [esp + 8]
// 009fd385  51                   push ecx
// 009fd386  8bd1                 mov edx, ecx
// 009fd388  52                   push edx
// 009fd389  ff15f83cb200         call dword ptr [0xb23cf8]
// 009fd38f  8b442428             mov eax, dword ptr [esp + 0x28]
// 009fd393  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009fd397  8b542408             mov edx, dword ptr [esp + 8]
// 009fd39b  8908                 mov dword ptr [eax], ecx
// 009fd39d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009fd3a1  895004               mov dword ptr [eax + 4], edx
// 009fd3a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 009fd3a8  894808               mov dword ptr [eax + 8], ecx
// 009fd3ab  89500c               mov dword ptr [eax + 0xc], edx
// 009fd3ae  5e                   pop esi
// 009fd3af  83c420               add esp, 0x20
// 009fd3b2  c20800               ret 8
// 009fd3b5  8b442428             mov eax, dword ptr [esp + 0x28]
// 009fd3b9  c70000000000         mov dword ptr [eax], 0
// 009fd3bf  c7400400000000       mov dword ptr [eax + 4], 0
// 009fd3c6  c7400800000000       mov dword ptr [eax + 8], 0
// 009fd3cd  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 009fd3d4  5e                   pop esi
// 009fd3d5  83c420               add esp, 0x20
// 009fd3d8  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItemDrawRect@CXTPControlGallery@@QAE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
