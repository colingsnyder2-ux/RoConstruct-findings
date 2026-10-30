// roc 2011-06 00421d60  unit: RBX::FunctionMarshaller  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00421d60
//
// 00421d60  833dd8bbc00000       cmp dword ptr [0xc0bbd8], 0
// 00421d67  56                   push esi
// 00421d68  57                   push edi
// 00421d69  8bf1                 mov esi, ecx
// 00421d6b  750a                 jne 0x421d77
// 00421d6d  c705d8bbc00000000000 mov dword ptr [0xc0bbd8], 0
// 00421d77  8b442418             mov eax, dword ptr [esp + 0x18]
// 00421d7b  50                   push eax
// 00421d7c  8d4e20               lea ecx, [esi + 0x20]
// 00421d7f  51                   push ecx
// 00421d80  68a8bbc000           push 0xc0bba8
// 00421d85  687c93d100           push 0xd1937c
// 00421d8a  683893d100           push 0xd19338
// 00421d8f  e83cfdffff           call 0x421ad0
// 00421d94  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00421d98  83c414               add esp, 0x14
// 00421d9b  0fb7d0               movzx edx, ax
// 00421d9e  85c9                 test ecx, ecx
// 00421da0  7505                 jne 0x421da7
// 00421da2  b900000056           mov ecx, 0x56000000
// 00421da7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00421dab  85c0                 test eax, eax
// 00421dad  7500                 jne 0x421daf
// 00421daf  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00421db3  57                   push edi
// 00421db4  52                   push edx
// 00421db5  8b542428             mov edx, dword ptr [esp + 0x28]
// 00421db9  52                   push edx
// 00421dba  8b542428             mov edx, dword ptr [esp + 0x28]
// 00421dbe  52                   push edx
// 00421dbf  51                   push ecx
// 00421dc0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00421dc4  50                   push eax
// 00421dc5  8b442428             mov eax, dword ptr [esp + 0x28]
// 00421dc9  50                   push eax
// 00421dca  51                   push ecx
// 00421dcb  8bce                 mov ecx, esi
// 00421dcd  e81efcffff           call 0x4219f0
// 00421dd2  5f                   pop edi
// 00421dd3  5e                   pop esi
// 00421dd4  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Create@?$CWindowImpl@VCAxFrameWindow@ATL@@VCWindow@2@V?$CWinTraits@$0FGAAAAAA@$0A@@2@@ATL@@QAEPAUHWND__@@PAU3@V_U_RECT@2@PBDKKV_U_MENUorID@2@PAX@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp