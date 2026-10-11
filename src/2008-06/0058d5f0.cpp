// roc 2008-06 0058d5f0  unit: RBX::ChangeHistoryService  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058d5f0
//
// 0058d5f0  56                   push esi
// 0058d5f1  8bf1                 mov esi, ecx
// 0058d5f3  807e0400             cmp byte ptr [esi + 4], 0
// 0058d5f7  7524                 jne 0x58d61d
// 0058d5f9  8b0e                 mov ecx, dword ptr [esi]
// 0058d5fb  85c9                 test ecx, ecx
// 0058d5fd  7414                 je 0x58d613
// 0058d5ff  ff15fc248000         call dword ptr [0x8024fc]
// 0058d605  83f8ff               cmp eax, -1
// 0058d608  7409                 je 0x58d613
// 0058d60a  884605               mov byte ptr [esi + 5], al
// 0058d60d  c6460401             mov byte ptr [esi + 4], 1
// 0058d611  5e                   pop esi
// 0058d612  c3                   ret 
// 0058d613  c70600000000         mov dword ptr [esi], 0
// 0058d619  c6460401             mov byte ptr [esi + 4], 1
// 0058d61d  8a4605               mov al, byte ptr [esi + 5]
// 0058d620  5e                   pop esi
// 0058d621  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
