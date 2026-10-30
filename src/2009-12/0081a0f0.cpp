// roc 2009-12 0081a0f0  unit: CInstanceRecord::CNameItem  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a0f0
//
// 0081a0f0  6aff                 push -1
// 0081a0f2  6888a99500           push 0x95a988
// 0081a0f7  64a100000000         mov eax, dword ptr fs:[0]
// 0081a0fd  50                   push eax
// 0081a0fe  51                   push ecx
// 0081a0ff  56                   push esi
// 0081a100  a10052b600           mov eax, dword ptr [0xb65200]
// 0081a105  33c4                 xor eax, esp
// 0081a107  50                   push eax
// 0081a108  8d44240c             lea eax, [esp + 0xc]
// 0081a10c  64a300000000         mov dword ptr fs:[0], eax
// 0081a112  8bf1                 mov esi, ecx
// 0081a114  89742408             mov dword ptr [esp + 8], esi
// 0081a118  c706f4479f00         mov dword ptr [esi], 0x9f47f4
// 0081a11e  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0081a121  c744241404000000     mov dword ptr [esp + 0x14], 4
// 0081a129  85c9                 test ecx, ecx
// 0081a12b  740c                 je 0x81a139
// 0081a12d  e8aa9cfdff           call 0x7f3ddc
// 0081a132  c7467800000000       mov dword ptr [esi + 0x78], 0
// 0081a139  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0081a13c  85c9                 test ecx, ecx
// 0081a13e  740c                 je 0x81a14c
// 0081a140  e8979cfdff           call 0x7f3ddc
// 0081a145  c7464800000000       mov dword ptr [esi + 0x48], 0
// 0081a14c  8d4e74               lea ecx, [esi + 0x74]
// 0081a14f  ff15c0de9800         call dword ptr [0x98dec0]
// 0081a155  8d4e60               lea ecx, [esi + 0x60]
// 0081a158  ff15c0de9800         call dword ptr [0x98dec0]
// 0081a15e  8d4e5c               lea ecx, [esi + 0x5c]
// 0081a161  ff15c0de9800         call dword ptr [0x98dec0]
// 0081a167  8d4e40               lea ecx, [esi + 0x40]
// 0081a16a  ff15c0de9800         call dword ptr [0x98dec0]
// 0081a170  8bce                 mov ecx, esi
// 0081a172  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0081a17a  e863a2fdff           call 0x7f43e2
// 0081a17f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081a183  64890d00000000       mov dword ptr fs:[0], ecx
// 0081a18a  59                   pop ecx
// 0081a18b  5e                   pop esi
// 0081a18c  83c410               add esp, 0x10
// 0081a18f  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportRecordItem@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp