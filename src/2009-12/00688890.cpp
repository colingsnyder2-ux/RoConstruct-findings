// roc 2009-12 00688890  unit: RBX::ChangeHistoryService  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00688890
//
// 00688890  56                   push esi
// 00688891  8bf1                 mov esi, ecx
// 00688893  8b0e                 mov ecx, dword ptr [esi]
// 00688895  85c9                 test ecx, ecx
// 00688897  7413                 je 0x6888ac
// 00688899  ff15c8b49800         call dword ptr [0x98b4c8]
// 0068889f  83f8ff               cmp eax, -1
// 006888a2  7408                 je 0x6888ac
// 006888a4  c6460400             mov byte ptr [esi + 4], 0
// 006888a8  8bc6                 mov eax, esi
// 006888aa  5e                   pop esi
// 006888ab  c3                   ret 
// 006888ac  c70600000000         mov dword ptr [esi], 0
// 006888b2  c6460401             mov byte ptr [esi + 4], 1
// 006888b6  8bc6                 mov eax, esi
// 006888b8  5e                   pop esi
// 006888b9  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??E?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
