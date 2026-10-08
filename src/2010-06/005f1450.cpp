// roc 2010-06 005f1450  unit: TextXmlWriter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f1450
//
// 005f1450  8b442404             mov eax, dword ptr [esp + 4]
// 005f1454  56                   push esi
// 005f1455  57                   push edi
// 005f1456  8bf9                 mov edi, ecx
// 005f1458  6a04                 push 4
// 005f145a  c7071ceea200         mov dword ptr [edi], 0xa2ee1c
// 005f1460  894704               mov dword ptr [edi + 4], eax
// 005f1463  8d7708               lea esi, [edi + 8]
// 005f1466  e835651b00           call 0x7a79a0
// 005f146b  33c9                 xor ecx, ecx
// 005f146d  83c404               add esp, 4
// 005f1470  3bc1                 cmp eax, ecx
// 005f1472  7404                 je 0x5f1478
// 005f1474  8930                 mov dword ptr [eax], esi
// 005f1476  eb02                 jmp 0x5f147a
// 005f1478  33c0                 xor eax, eax
// 005f147a  8906                 mov dword ptr [esi], eax
// 005f147c  8bc7                 mov eax, edi
// 005f147e  5f                   pop edi
// 005f147f  894e10               mov dword ptr [esi + 0x10], ecx
// 005f1482  894e14               mov dword ptr [esi + 0x14], ecx
// 005f1485  894e18               mov dword ptr [esi + 0x18], ecx
// 005f1488  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005f148b  5e                   pop esi
// 005f148c  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlParser@@IAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
