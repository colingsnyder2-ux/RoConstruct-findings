// from server: 100% by auto
// roc 2011-06 008b84b0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b84b0
//
// 008b84b0  53                   push ebx
// 008b84b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008b84b5  56                   push esi
// 008b84b6  8bf1                 mov esi, ecx
// 008b84b8  3bf3                 cmp esi, ebx
// 008b84ba  7505                 jne 0x8b84c1
// 008b84bc  e8491ef5ff           call 0x80a30a
// 008b84c1  8b4308               mov eax, dword ptr [ebx + 8]
// 008b84c4  57                   push edi
// 008b84c5  8b7e08               mov edi, dword ptr [esi + 8]
// 008b84c8  6aff                 push -1
// 008b84ca  03c7                 add eax, edi
// 008b84cc  50                   push eax
// 008b84cd  e86e66f8ff           call 0x83eb40
// 008b84d2  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008b84d5  8b5304               mov edx, dword ptr [ebx + 4]
// 008b84d8  8b4604               mov eax, dword ptr [esi + 4]
// 008b84db  51                   push ecx
// 008b84dc  52                   push edx
// 008b84dd  8d0cb8               lea ecx, [eax + edi*4]
// 008b84e0  51                   push ecx
// 008b84e1  e87afeffff           call 0x8b8360
// 008b84e6  8bc7                 mov eax, edi
// 008b84e8  5f                   pop edi
// 008b84e9  5e                   pop esi
// 008b84ea  5b                   pop ebx
// 008b84eb  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventLabel.cpp (function ?Append@?$CArray@II@@QAEHABV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventLabel.cpp
