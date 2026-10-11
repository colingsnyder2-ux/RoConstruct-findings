// roc 2010-06 005f1110  unit: TextXmlWriter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f1110
//
// 005f1110  83ec10               sub esp, 0x10
// 005f1113  53                   push ebx
// 005f1114  55                   push ebp
// 005f1115  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005f1119  56                   push esi
// 005f111a  55                   push ebp
// 005f111b  8bf1                 mov esi, ecx
// 005f111d  e8eee9ffff           call 0x5efb10
// 005f1122  8bd8                 mov ebx, eax
// 005f1124  895c2410             mov dword ptr [esp + 0x10], ebx
// 005f1128  85f6                 test esi, esi
// 005f112a  7506                 jne 0x5f1132
// 005f112c  ff150ca99e00         call dword ptr [0x9ea90c]
// 005f1132  8b06                 mov eax, dword ptr [esi]
// 005f1134  57                   push edi
// 005f1135  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005f1138  89442410             mov dword ptr [esp + 0x10], eax
// 005f113c  85c0                 test eax, eax
// 005f113e  7404                 je 0x5f1144
// 005f1140  3bc0                 cmp eax, eax
// 005f1142  7406                 je 0x5f114a
// 005f1144  ff150ca99e00         call dword ptr [0x9ea90c]
// 005f114a  3bdf                 cmp ebx, edi
// 005f114c  5f                   pop edi
// 005f114d  7417                 je 0x5f1166
// 005f114f  83c30c               add ebx, 0xc
// 005f1152  53                   push ebx
// 005f1153  55                   push ebp
// 005f1154  e8a79b0300           call 0x62ad00
// 005f1159  83c408               add esp, 8
// 005f115c  84c0                 test al, al
// 005f115e  7506                 jne 0x5f1166
// 005f1160  8d4c240c             lea ecx, [esp + 0xc]
// 005f1164  eb11                 jmp 0x5f1177
// 005f1166  8b0e                 mov ecx, dword ptr [esi]
// 005f1168  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f116b  894c2414             mov dword ptr [esp + 0x14], ecx
// 005f116f  89442418             mov dword ptr [esp + 0x18], eax
// 005f1173  8d4c2414             lea ecx, [esp + 0x14]
// 005f1177  8b11                 mov edx, dword ptr [ecx]
// 005f1179  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f117d  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f1180  5e                   pop esi
// 005f1181  5d                   pop ebp
// 005f1182  8910                 mov dword ptr [eax], edx
// 005f1184  894804               mov dword ptr [eax + 4], ecx
// 005f1187  5b                   pop ebx
// 005f1188  83c410               add esp, 0x10
// 005f118b  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
