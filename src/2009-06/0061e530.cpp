// roc 2009-06 0061e530  unit: RBX::ChangeHistoryService  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061e530
//
// 0061e530  56                   push esi
// 0061e531  8bf1                 mov esi, ecx
// 0061e533  8b0e                 mov ecx, dword ptr [esi]
// 0061e535  85c9                 test ecx, ecx
// 0061e537  7413                 je 0x61e54c
// 0061e539  ff1554e68900         call dword ptr [0x89e654]
// 0061e53f  83f8ff               cmp eax, -1
// 0061e542  7408                 je 0x61e54c
// 0061e544  c6460400             mov byte ptr [esi + 4], 0
// 0061e548  8bc6                 mov eax, esi
// 0061e54a  5e                   pop esi
// 0061e54b  c3                   ret 
// 0061e54c  c70600000000         mov dword ptr [esi], 0
// 0061e552  c6460401             mov byte ptr [esi + 4], 1
// 0061e556  8bc6                 mov eax, esi
// 0061e558  5e                   pop esi
// 0061e559  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??E?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
