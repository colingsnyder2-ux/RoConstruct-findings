// roc 2012-06 004257c0  unit: RBX::FunctionMarshaller  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004257c0
//
// 004257c0  833d0049d60000       cmp dword ptr [0xd64900], 0
// 004257c7  56                   push esi
// 004257c8  57                   push edi
// 004257c9  8bf1                 mov esi, ecx
// 004257cb  750a                 jne 0x4257d7
// 004257cd  c7050049d60000000000 mov dword ptr [0xd64900], 0
// 004257d7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004257db  50                   push eax
// 004257dc  8d4e20               lea ecx, [esi + 0x20]
// 004257df  51                   push ecx
// 004257e0  68d048d600           push 0xd648d0
// 004257e5  68c4a4e500           push 0xe5a4c4
// 004257ea  6880a4e500           push 0xe5a480
// 004257ef  e83cfdffff           call 0x425530
// 004257f4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004257f8  83c414               add esp, 0x14
// 004257fb  0fb7d0               movzx edx, ax
// 004257fe  85c9                 test ecx, ecx
// 00425800  7505                 jne 0x425807
// 00425802  b900000056           mov ecx, 0x56000000
// 00425807  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042580b  85c0                 test eax, eax
// 0042580d  7500                 jne 0x42580f
// 0042580f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00425813  57                   push edi
// 00425814  52                   push edx
// 00425815  8b542428             mov edx, dword ptr [esp + 0x28]
// 00425819  52                   push edx
// 0042581a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0042581e  52                   push edx
// 0042581f  51                   push ecx
// 00425820  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00425824  50                   push eax
// 00425825  8b442428             mov eax, dword ptr [esp + 0x28]
// 00425829  50                   push eax
// 0042582a  51                   push ecx
// 0042582b  8bce                 mov ecx, esi
// 0042582d  e81efcffff           call 0x425450
// 00425832  5f                   pop edi
// 00425833  5e                   pop esi
// 00425834  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Create@?$CWindowImpl@VCAxFrameWindow@ATL@@VCWindow@2@V?$CWinTraits@$0FGAAAAAA@$0A@@2@@ATL@@QAEPAUHWND__@@PAU3@V_U_RECT@2@PBDKKV_U_MENUorID@2@PAX@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp