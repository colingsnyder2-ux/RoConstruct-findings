// roc 2009-12 00863cc0  unit: CXTPToolTipContextToolTip  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863cc0
//
// 00863cc0  83ec44               sub esp, 0x44
// 00863cc3  a10052b600           mov eax, dword ptr [0xb65200]
// 00863cc8  33c4                 xor eax, esp
// 00863cca  89442440             mov dword ptr [esp + 0x40], eax
// 00863cce  53                   push ebx
// 00863ccf  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00863cd3  56                   push esi
// 00863cd4  8b742450             mov esi, dword ptr [esp + 0x50]
// 00863cd8  85db                 test ebx, ebx
// 00863cda  740d                 je 0x863ce9
// 00863cdc  837b0400             cmp dword ptr [ebx + 4], 0
// 00863ce0  7407                 je 0x863ce9
// 00863ce2  8bcb                 mov ecx, ebx
// 00863ce4  e83501f9ff           call 0x7f3e1e
// 00863ce9  8b442458             mov eax, dword ptr [esp + 0x58]
// 00863ced  57                   push edi
// 00863cee  b910000000           mov ecx, 0x10
// 00863cf3  8d7c240c             lea edi, [esp + 0xc]
// 00863cf7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00863cf9  5f                   pop edi
// 00863cfa  83f8ff               cmp eax, -1
// 00863cfd  7404                 je 0x863d03
// 00863cff  89442418             mov dword ptr [esp + 0x18], eax
// 00863d03  8b442460             mov eax, dword ptr [esp + 0x60]
// 00863d07  83f8ff               cmp eax, -1
// 00863d0a  7404                 je 0x863d10
// 00863d0c  89442414             mov dword ptr [esp + 0x14], eax
// 00863d10  8b442464             mov eax, dword ptr [esp + 0x64]
// 00863d14  83f8ff               cmp eax, -1
// 00863d17  7404                 je 0x863d1d
// 00863d19  89442410             mov dword ptr [esp + 0x10], eax
// 00863d1d  8a44245c             mov al, byte ptr [esp + 0x5c]
// 00863d21  3cff                 cmp al, 0xff
// 00863d23  7404                 je 0x863d29
// 00863d25  8844241d             mov byte ptr [esp + 0x1d], al
// 00863d29  8d442408             lea eax, [esp + 8]
// 00863d2d  50                   push eax
// 00863d2e  ff1528b19800         call dword ptr [0x98b128]
// 00863d34  50                   push eax
// 00863d35  8bcb                 mov ecx, ebx
// 00863d37  e8ee00f9ff           call 0x7f3e2a
// 00863d3c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00863d40  5e                   pop esi
// 00863d41  5b                   pop ebx
// 00863d42  33cc                 xor ecx, esp
// 00863d44  e85116f9ff           call 0x7f539a
// 00863d49  83c444               add esp, 0x44
// 00863d4c  c21800               ret 0x18
// copied from an identical function in another client (function ?CreateSysFont@CXTAuxData@@QAEHABVCXTLogFont@@AAVCFont@@JDJJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTGlobal.cpp