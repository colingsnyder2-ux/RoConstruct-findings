// roc 2008-06 0058d780  unit: RBX::ChangeHistoryService  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058d780
//
// 0058d780  56                   push esi
// 0058d781  57                   push edi
// 0058d782  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0058d786  8bf1                 mov esi, ecx
// 0058d788  85ff                 test edi, edi
// 0058d78a  7e17                 jle 0x58d7a3
// 0058d78c  8d642400             lea esp, [esp]
// 0058d790  8b4624               mov eax, dword ptr [esi + 0x24]
// 0058d793  6a09                 push 9
// 0058d795  50                   push eax
// 0058d796  e8a5ceebff           call 0x44a640
// 0058d79b  83c408               add esp, 8
// 0058d79e  83ef01               sub edi, 1
// 0058d7a1  75ed                 jne 0x58d790
// 0058d7a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058d7a7  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0058d7aa  8b5624               mov edx, dword ptr [esi + 0x24]
// 0058d7ad  6a3e                 push 0x3e
// 0058d7af  83c004               add eax, 4
// 0058d7b2  50                   push eax
// 0058d7b3  68e0198300           push 0x8319e0
// 0058d7b8  52                   push edx
// 0058d7b9  e892ccebff           call 0x44a450
// 0058d7be  83c408               add esp, 8
// 0058d7c1  50                   push eax
// 0058d7c2  ff1584238000         call dword ptr [0x802384]
// 0058d7c8  83c408               add esp, 8
// 0058d7cb  50                   push eax
// 0058d7cc  e86fceebff           call 0x44a640
// 0058d7d1  83c408               add esp, 8
// 0058d7d4  5f                   pop edi
// 0058d7d5  5e                   pop esi
// 0058d7d6  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?writeCloseTag@TextXmlWriter@@IAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
