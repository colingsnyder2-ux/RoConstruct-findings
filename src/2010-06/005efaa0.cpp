// roc 2010-06 005efaa0  unit: RBX::ChangeHistoryService  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005efaa0
//
// 005efaa0  56                   push esi
// 005efaa1  8bf1                 mov esi, ecx
// 005efaa3  807e0400             cmp byte ptr [esi + 4], 0
// 005efaa7  7524                 jne 0x5efacd
// 005efaa9  8b0e                 mov ecx, dword ptr [esi]
// 005efaab  85c9                 test ecx, ecx
// 005efaad  7414                 je 0x5efac3
// 005efaaf  ff156ca69e00         call dword ptr [0x9ea66c]
// 005efab5  83f8ff               cmp eax, -1
// 005efab8  7409                 je 0x5efac3
// 005efaba  884605               mov byte ptr [esi + 5], al
// 005efabd  c6460401             mov byte ptr [esi + 4], 1
// 005efac1  5e                   pop esi
// 005efac2  c3                   ret 
// 005efac3  c70600000000         mov dword ptr [esi], 0
// 005efac9  c6460401             mov byte ptr [esi + 4], 1
// 005efacd  8a4605               mov al, byte ptr [esi + 5]
// 005efad0  5e                   pop esi
// 005efad1  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
