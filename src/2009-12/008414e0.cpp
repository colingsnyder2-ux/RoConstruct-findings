// roc 2009-12 008414e0  unit: CXTPCustomizeCommandsPage  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008414e0
//
// 008414e0  8b442404             mov eax, dword ptr [esp + 4]
// 008414e4  53                   push ebx
// 008414e5  55                   push ebp
// 008414e6  56                   push esi
// 008414e7  57                   push edi
// 008414e8  6aff                 push -1
// 008414ea  50                   push eax
// 008414eb  e890fcffff           call 0x841180
// 008414f0  8b742418             mov esi, dword ptr [esp + 0x18]
// 008414f4  8b4e04               mov ecx, dword ptr [esi + 4]
// 008414f7  51                   push ecx
// 008414f8  8bd8                 mov ebx, eax
// 008414fa  ff1540cc9800         call dword ptr [0x98cc40]
// 00841500  8bf8                 mov edi, eax
// 00841502  33ed                 xor ebp, ebp
// 00841504  897c2414             mov dword ptr [esp + 0x14], edi
// 00841508  85ff                 test edi, edi
// 0084150a  0f8e8c000000         jle 0x84159c
// 00841510  8b5604               mov edx, dword ptr [esi + 4]
// 00841513  55                   push ebp
// 00841514  52                   push edx
// 00841515  ff1544cc9800         call dword ptr [0x98cc44]
// 0084151b  85c0                 test eax, eax
// 0084151d  7674                 jbe 0x841593
// 0084151f  55                   push ebp
// 00841520  56                   push esi
// 00841521  8bcb                 mov ecx, ebx
// 00841523  e858570000           call 0x846c80
// 00841528  50                   push eax
// 00841529  e89295ffff           call 0x83aac0
// 0084152e  50                   push eax
// 0084152f  e80a27fbff           call 0x7f3c3e
// 00841534  83c408               add esp, 8
// 00841537  85c0                 test eax, eax
// 00841539  7458                 je 0x841593
// 0084153b  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00841540  7451                 je 0x841593
// 00841542  8b10                 mov edx, dword ptr [eax]
// 00841544  8bc8                 mov ecx, eax
// 00841546  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0084154c  ffd0                 call eax
// 0084154e  8bb8fc000000         mov edi, dword ptr [eax + 0xfc]
// 00841554  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00841557  33f6                 xor esi, esi
// 00841559  85c0                 test eax, eax
// 0084155b  7e2e                 jle 0x84158b
// 0084155d  8d4900               lea ecx, [ecx]
// 00841560  85f6                 test esi, esi
// 00841562  7c11                 jl 0x841575
// 00841564  3bf0                 cmp esi, eax
// 00841566  7d0d                 jge 0x841575
// 00841568  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0084156b  7d3b                 jge 0x8415a8
// 0084156d  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00841570  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00841573  eb02                 jmp 0x841577
// 00841575  33c0                 xor eax, eax
// 00841577  6a00                 push 0
// 00841579  6aff                 push -1
// 0084157b  50                   push eax
// 0084157c  8bcb                 mov ecx, ebx
// 0084157e  e82d5d0000           call 0x8472b0
// 00841583  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00841586  46                   inc esi
// 00841587  3bf0                 cmp esi, eax
// 00841589  7cd5                 jl 0x841560
// 0084158b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0084158f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00841593  45                   inc ebp
// 00841594  3bef                 cmp ebp, edi
// 00841596  0f8c74ffffff         jl 0x841510
// 0084159c  5f                   pop edi
// 0084159d  5e                   pop esi
// 0084159e  5d                   pop ebp
// 0084159f  b801000000           mov eax, 1
// 008415a4  5b                   pop ebx
// 008415a5  c20c00               ret 0xc
// 008415a8  e85f25fbff           call 0x7f3b0c
// copied from an identical function in another client (function ?AddCategory@CXTPCustomizeCommandsPage@@QAEHPBDPAVCMenu@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp