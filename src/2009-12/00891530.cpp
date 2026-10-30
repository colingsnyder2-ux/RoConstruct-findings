// roc 2009-12 00891530  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891530
//
// 00891530  6aff                 push -1
// 00891532  68e3129600           push 0x9612e3
// 00891537  64a100000000         mov eax, dword ptr fs:[0]
// 0089153d  50                   push eax
// 0089153e  51                   push ecx
// 0089153f  56                   push esi
// 00891540  57                   push edi
// 00891541  a10052b600           mov eax, dword ptr [0xb65200]
// 00891546  33c4                 xor eax, esp
// 00891548  50                   push eax
// 00891549  8d442410             lea eax, [esp + 0x10]
// 0089154d  64a300000000         mov dword ptr fs:[0], eax
// 00891553  8bf1                 mov esi, ecx
// 00891555  8974240c             mov dword ptr [esp + 0xc], esi
// 00891559  e8ea2bf6ff           call 0x7f4148
// 0089155e  8d7e58               lea edi, [esi + 0x58]
// 00891561  8bcf                 mov ecx, edi
// 00891563  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0089156b  c7069c3aa000         mov dword ptr [esi], 0xa03a9c
// 00891571  e8aa31f8ff           call 0x814720
// 00891576  8b4708               mov eax, dword ptr [edi + 8]
// 00891579  6a00                 push 0
// 0089157b  50                   push eax
// 0089157c  8bcf                 mov ecx, edi
// 0089157e  c644242001           mov byte ptr [esp + 0x20], 1
// 00891583  e8e896fdff           call 0x86ac70
// 00891588  6a00                 push 0
// 0089158a  6a00                 push 0
// 0089158c  683c3aa000           push 0xa03a3c
// 00891591  6a00                 push 0
// 00891593  c7465400000000       mov dword ptr [esi + 0x54], 0
// 0089159a  c7466c00000000       mov dword ptr [esi + 0x6c], 0
// 008915a1  e86aacfbff           call 0x84c210
// 008915a6  83c410               add esp, 0x10
// 008915a9  8bc6                 mov eax, esi
// 008915ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008915af  64890d00000000       mov dword ptr fs:[0], ecx
// 008915b6  59                   pop ecx
// 008915b7  5f                   pop edi
// 008915b8  5e                   pop esi
// 008915b9  83c410               add esp, 0x10
// 008915bc  c3                   ret 
// copied from an identical function in another client (function ??0CXTPDockBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp