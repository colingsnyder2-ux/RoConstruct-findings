// roc 2009-12 008693d0  unit: CXTPPropertyGridView  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008693d0
//
// 008693d0  83ec10               sub esp, 0x10
// 008693d3  56                   push esi
// 008693d4  8bf1                 mov esi, ecx
// 008693d6  57                   push edi
// 008693d7  8dbee8000000         lea edi, [esi + 0xe8]
// 008693dd  85ff                 test edi, edi
// 008693df  0f84a4000000         je 0x869489
// 008693e5  837f2000             cmp dword ptr [edi + 0x20], 0
// 008693e9  0f849a000000         je 0x869489
// 008693ef  8d8ed8000000         lea ecx, [esi + 0xd8]
// 008693f5  ff1580de9800         call dword ptr [0x98de80]
// 008693fb  50                   push eax
// 008693fc  8bcf                 mov ecx, edi
// 008693fe  e811a8f8ff           call 0x7f3c14
// 00869403  8b442430             mov eax, dword ptr [esp + 0x30]
// 00869407  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0086940b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0086940f  6a01                 push 1
// 00869411  2bc8                 sub ecx, eax
// 00869413  51                   push ecx
// 00869414  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00869418  2bd1                 sub edx, ecx
// 0086941a  52                   push edx
// 0086941b  50                   push eax
// 0086941c  51                   push ecx
// 0086941d  8bcf                 mov ecx, edi
// 0086941f  e80ea8f8ff           call 0x7f3c32
// 00869424  8b442440             mov eax, dword ptr [esp + 0x40]
// 00869428  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0086942c  50                   push eax
// 0086942d  51                   push ecx
// 0086942e  6a01                 push 1
// 00869430  8bcf                 mov ecx, edi
// 00869432  e899e8ffff           call 0x867cd0
// 00869437  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0086943b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086943f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00869443  8996b8000000         mov dword ptr [esi + 0xb8], edx
// 00869449  8b542428             mov edx, dword ptr [esp + 0x28]
// 0086944d  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 00869453  8b4620               mov eax, dword ptr [esi + 0x20]
// 00869456  898ec0000000         mov dword ptr [esi + 0xc0], ecx
// 0086945c  8d4c2408             lea ecx, [esp + 8]
// 00869460  51                   push ecx
// 00869461  8996c4000000         mov dword ptr [esi + 0xc4], edx
// 00869467  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 0086946f  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00869477  89442414             mov dword ptr [esp + 0x14], eax
// 0086947b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00869483  ff1564b09800         call dword ptr [0x98b064]
// 00869489  5f                   pop edi
// 0086948a  5e                   pop esi
// 0086948b  83c410               add esp, 0x10
// 0086948e  c22800               ret 0x28
// copied from an identical function in another client (function ?_ShowToolTip@CXTPPropertyGridView@@AAEXVCRect@@0PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridView.cpp