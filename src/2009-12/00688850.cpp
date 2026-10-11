// roc 2009-12 00688850  unit: RBX::ChangeHistoryService  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00688850
//
// 00688850  56                   push esi
// 00688851  8bf1                 mov esi, ecx
// 00688853  807e0400             cmp byte ptr [esi + 4], 0
// 00688857  7524                 jne 0x68887d
// 00688859  8b0e                 mov ecx, dword ptr [esi]
// 0068885b  85c9                 test ecx, ecx
// 0068885d  7414                 je 0x688873
// 0068885f  ff15c4b49800         call dword ptr [0x98b4c4]
// 00688865  83f8ff               cmp eax, -1
// 00688868  7409                 je 0x688873
// 0068886a  884605               mov byte ptr [esi + 5], al
// 0068886d  c6460401             mov byte ptr [esi + 4], 1
// 00688871  5e                   pop esi
// 00688872  c3                   ret 
// 00688873  c70600000000         mov dword ptr [esi], 0
// 00688879  c6460401             mov byte ptr [esi + 4], 1
// 0068887d  8a4605               mov al, byte ptr [esi + 5]
// 00688880  5e                   pop esi
// 00688881  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
