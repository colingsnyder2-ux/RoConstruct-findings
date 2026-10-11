// roc 2010-06 005efae0  unit: RBX::ChangeHistoryService  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005efae0
//
// 005efae0  56                   push esi
// 005efae1  8bf1                 mov esi, ecx
// 005efae3  8b0e                 mov ecx, dword ptr [esi]
// 005efae5  85c9                 test ecx, ecx
// 005efae7  7413                 je 0x5efafc
// 005efae9  ff1570a69e00         call dword ptr [0x9ea670]
// 005efaef  83f8ff               cmp eax, -1
// 005efaf2  7408                 je 0x5efafc
// 005efaf4  c6460400             mov byte ptr [esi + 4], 0
// 005efaf8  8bc6                 mov eax, esi
// 005efafa  5e                   pop esi
// 005efafb  c3                   ret 
// 005efafc  c70600000000         mov dword ptr [esi], 0
// 005efb02  c6460401             mov byte ptr [esi + 4], 1
// 005efb06  8bc6                 mov eax, esi
// 005efb08  5e                   pop esi
// 005efb09  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??E?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
