// roc 2009-12 0081b300  unit: PAVCXTPReportInplaceButton::?$CArray  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b300
//
// 0081b300  6aff                 push -1
// 0081b302  68edaa9500           push 0x95aaed
// 0081b307  64a100000000         mov eax, dword ptr fs:[0]
// 0081b30d  50                   push eax
// 0081b30e  83ec08               sub esp, 8
// 0081b311  56                   push esi
// 0081b312  57                   push edi
// 0081b313  a10052b600           mov eax, dword ptr [0xb65200]
// 0081b318  33c4                 xor eax, esp
// 0081b31a  50                   push eax
// 0081b31b  8d442414             lea eax, [esp + 0x14]
// 0081b31f  64a300000000         mov dword ptr fs:[0], eax
// 0081b325  8bf1                 mov esi, ecx
// 0081b327  8974240c             mov dword ptr [esp + 0xc], esi
// 0081b32b  e812b11000           call 0x926442
// 0081b330  33ff                 xor edi, edi
// 0081b332  8d4e2c               lea ecx, [esi + 0x2c]
// 0081b335  897c241c             mov dword ptr [esp + 0x1c], edi
// 0081b339  c7064c4a9f00         mov dword ptr [esi], 0x9f4a4c
// 0081b33f  e81cffffff           call 0x81b260
// 0081b344  b801000000           mov eax, 1
// 0081b349  6a34                 push 0x34
// 0081b34b  88442420             mov byte ptr [esp + 0x20], al
// 0081b34f  894620               mov dword ptr [esi + 0x20], eax
// 0081b352  897e24               mov dword ptr [esi + 0x24], edi
// 0081b355  e80685fdff           call 0x7f3860
// 0081b35a  83c404               add esp, 4
// 0081b35d  89442410             mov dword ptr [esp + 0x10], eax
// 0081b361  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0081b366  3bc7                 cmp eax, edi
// 0081b368  7409                 je 0x81b373
// 0081b36a  8bc8                 mov ecx, eax
// 0081b36c  e81fffffff           call 0x81b290
// 0081b371  eb02                 jmp 0x81b375
// 0081b373  33c0                 xor eax, eax
// 0081b375  894628               mov dword ptr [esi + 0x28], eax
// 0081b378  897e40               mov dword ptr [esi + 0x40], edi
// 0081b37b  c7464480000000       mov dword ptr [esi + 0x44], 0x80
// 0081b382  897e48               mov dword ptr [esi + 0x48], edi
// 0081b385  8bc6                 mov eax, esi
// 0081b387  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081b38b  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b392  59                   pop ecx
// 0081b393  5f                   pop edi
// 0081b394  5e                   pop esi
// 0081b395  83c414               add esp, 0x14
// 0081b398  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportRecordItemEditOptions@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp