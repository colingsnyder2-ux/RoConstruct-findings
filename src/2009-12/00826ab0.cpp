// roc 2009-12 00826ab0  unit: CXTPReportControl  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00826ab0
//
// 00826ab0  6aff                 push -1
// 00826ab2  688ab59500           push 0x95b58a
// 00826ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00826abd  50                   push eax
// 00826abe  51                   push ecx
// 00826abf  56                   push esi
// 00826ac0  a10052b600           mov eax, dword ptr [0xb65200]
// 00826ac5  33c4                 xor eax, esp
// 00826ac7  50                   push eax
// 00826ac8  8d44240c             lea eax, [esp + 0xc]
// 00826acc  64a300000000         mov dword ptr fs:[0], eax
// 00826ad2  833da4aeb90000       cmp dword ptr [0xb9aea4], 0
// 00826ad9  6a78                 push 0x78
// 00826adb  740a                 je 0x826ae7
// 00826add  e8ceceffff           call 0x8239b0
// 00826ae2  83c404               add esp, 4
// 00826ae5  eb05                 jmp 0x826aec
// 00826ae7  e8f4ccffff           call 0x8237e0
// 00826aec  8bf0                 mov esi, eax
// 00826aee  89742408             mov dword ptr [esp + 8], esi
// 00826af2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00826afa  85f6                 test esi, esi
// 00826afc  7420                 je 0x826b1e
// 00826afe  8bce                 mov ecx, esi
// 00826b00  e8abce0700           call 0x8a39b0
// 00826b05  c706b4509f00         mov dword ptr [esi], 0x9f50b4
// 00826b0b  8bc6                 mov eax, esi
// 00826b0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00826b11  64890d00000000       mov dword ptr fs:[0], ecx
// 00826b18  59                   pop ecx
// 00826b19  5e                   pop esi
// 00826b1a  83c410               add esp, 0x10
// 00826b1d  c3                   ret 
// 00826b1e  33c0                 xor eax, eax
// 00826b20  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00826b24  64890d00000000       mov dword ptr fs:[0], ecx
// 00826b2b  59                   pop ecx
// 00826b2c  5e                   pop esi
// 00826b2d  83c410               add esp, 0x10
// 00826b30  c3                   ret 
// copied from an identical function in another client (function ?CreateGroupRow@CXTPReportControl@@MAEPAVCXTPReportGroupRow@@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp