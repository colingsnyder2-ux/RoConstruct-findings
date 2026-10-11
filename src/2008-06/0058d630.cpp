// roc 2008-06 0058d630  unit: RBX::ChangeHistoryService  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058d630
//
// 0058d630  56                   push esi
// 0058d631  8bf1                 mov esi, ecx
// 0058d633  8b0e                 mov ecx, dword ptr [esi]
// 0058d635  85c9                 test ecx, ecx
// 0058d637  7413                 je 0x58d64c
// 0058d639  ff15f8248000         call dword ptr [0x8024f8]
// 0058d63f  83f8ff               cmp eax, -1
// 0058d642  7408                 je 0x58d64c
// 0058d644  c6460400             mov byte ptr [esi + 4], 0
// 0058d648  8bc6                 mov eax, esi
// 0058d64a  5e                   pop esi
// 0058d64b  c3                   ret 
// 0058d64c  c70600000000         mov dword ptr [esi], 0
// 0058d652  c6460401             mov byte ptr [esi + 4], 1
// 0058d656  8bc6                 mov eax, esi
// 0058d658  5e                   pop esi
// 0058d659  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??E?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
