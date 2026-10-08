// roc 2010-06 007e0b10  unit: CXTPReportRecordItemVariant  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e0b10
//
// 007e0b10  56                   push esi
// 007e0b11  8bf1                 mov esi, ecx
// 007e0b13  8d467c               lea eax, [esi + 0x7c]
// 007e0b16  50                   push eax
// 007e0b17  ff1564aa9e00         call dword ptr [0x9eaa64]
// 007e0b1d  8bce                 mov ecx, esi
// 007e0b1f  e89cd6feff           call 0x7ce1c0
// 007e0b24  f644240801           test byte ptr [esp + 8], 1
// 007e0b29  742c                 je 0x7e0b57
// 007e0b2b  833d9855c20000       cmp dword ptr [0xc25598], 0
// 007e0b32  740f                 je 0x7e0b43
// 007e0b34  56                   push esi
// 007e0b35  e8f6a5c3ff           call 0x41b130
// 007e0b3a  83c404               add esp, 4
// 007e0b3d  8bc6                 mov eax, esi
// 007e0b3f  5e                   pop esi
// 007e0b40  c20400               ret 4
// 007e0b43  689055c200           push 0xc25590
// 007e0b48  ff157ca39e00         call dword ptr [0x9ea37c]
// 007e0b4e  56                   push esi
// 007e0b4f  e8466efcff           call 0x7a799a
// 007e0b54  83c404               add esp, 4
// 007e0b57  8bc6                 mov eax, esi
// 007e0b59  5e                   pop esi
// 007e0b5a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ??_GCXTPReportRecordItemVariant@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
