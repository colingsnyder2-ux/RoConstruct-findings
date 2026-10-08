// roc 2011-06 008426a0  unit: CXTPReportRecordItemVariant  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008426a0
//
// 008426a0  56                   push esi
// 008426a1  8bf1                 mov esi, ecx
// 008426a3  8d467c               lea eax, [esi + 0x7c]
// 008426a6  50                   push eax
// 008426a7  ff15d80aa400         call dword ptr [0xa40ad8]
// 008426ad  8bce                 mov ecx, esi
// 008426af  e89cbfffff           call 0x83e650
// 008426b4  f644240801           test byte ptr [esp + 8], 1
// 008426b9  742c                 je 0x8426e7
// 008426bb  833d7482d10000       cmp dword ptr [0xd18274], 0
// 008426c2  740f                 je 0x8426d3
// 008426c4  56                   push esi
// 008426c5  e8d624beff           call 0x424ba0
// 008426ca  83c404               add esp, 4
// 008426cd  8bc6                 mov eax, esi
// 008426cf  5e                   pop esi
// 008426d0  c20400               ret 4
// 008426d3  686c82d100           push 0xd1826c
// 008426d8  ff154803a400         call dword ptr [0xa40348]
// 008426de  56                   push esi
// 008426df  e87479fcff           call 0x80a058
// 008426e4  83c404               add esp, 4
// 008426e7  8bc6                 mov eax, esi
// 008426e9  5e                   pop esi
// 008426ea  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ??_GCXTPReportRecordItemVariant@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
