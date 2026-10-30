// roc 2011-06 00466b10  unit: RBX::Tasks::Sequence  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00466b10
//
// 00466b10  833da847c10000       cmp dword ptr [0xc147a8], 0
// 00466b17  56                   push esi
// 00466b18  57                   push edi
// 00466b19  8bf1                 mov esi, ecx
// 00466b1b  750a                 jne 0x466b27
// 00466b1d  c705a847c10000000000 mov dword ptr [0xc147a8], 0
// 00466b27  8b442418             mov eax, dword ptr [esp + 0x18]
// 00466b2b  50                   push eax
// 00466b2c  8d4e20               lea ecx, [esi + 0x20]
// 00466b2f  51                   push ecx
// 00466b30  687847c100           push 0xc14778
// 00466b35  687c93d100           push 0xd1937c
// 00466b3a  683893d100           push 0xd19338
// 00466b3f  e88caffbff           call 0x421ad0
// 00466b44  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00466b48  83c414               add esp, 0x14
// 00466b4b  0fb7d0               movzx edx, ax
// 00466b4e  85c9                 test ecx, ecx
// 00466b50  7505                 jne 0x466b57
// 00466b52  b900000056           mov ecx, 0x56000000
// 00466b57  8b442414             mov eax, dword ptr [esp + 0x14]
// 00466b5b  85c0                 test eax, eax
// 00466b5d  7500                 jne 0x466b5f
// 00466b5f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00466b63  57                   push edi
// 00466b64  52                   push edx
// 00466b65  8b542428             mov edx, dword ptr [esp + 0x28]
// 00466b69  52                   push edx
// 00466b6a  8b542428             mov edx, dword ptr [esp + 0x28]
// 00466b6e  52                   push edx
// 00466b6f  51                   push ecx
// 00466b70  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00466b74  50                   push eax
// 00466b75  8b442428             mov eax, dword ptr [esp + 0x28]
// 00466b79  50                   push eax
// 00466b7a  51                   push ecx
// 00466b7b  8bce                 mov ecx, esi
// 00466b7d  e86eaefbff           call 0x4219f0
// 00466b82  5f                   pop edi
// 00466b83  5e                   pop esi
// 00466b84  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Create@?$CWindowImpl@VCAxFrameWindow@ATL@@VCWindow@2@V?$CWinTraits@$0FGAAAAAA@$0A@@2@@ATL@@QAEPAUHWND__@@PAU3@V_U_RECT@2@PBDKKV_U_MENUorID@2@PAX@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp