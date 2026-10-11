// roc 2009-06 0061e4f0  unit: RBX::ChangeHistoryService  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061e4f0
//
// 0061e4f0  56                   push esi
// 0061e4f1  8bf1                 mov esi, ecx
// 0061e4f3  807e0400             cmp byte ptr [esi + 4], 0
// 0061e4f7  7524                 jne 0x61e51d
// 0061e4f9  8b0e                 mov ecx, dword ptr [esi]
// 0061e4fb  85c9                 test ecx, ecx
// 0061e4fd  7414                 je 0x61e513
// 0061e4ff  ff1558e68900         call dword ptr [0x89e658]
// 0061e505  83f8ff               cmp eax, -1
// 0061e508  7409                 je 0x61e513
// 0061e50a  884605               mov byte ptr [esi + 5], al
// 0061e50d  c6460401             mov byte ptr [esi + 4], 1
// 0061e511  5e                   pop esi
// 0061e512  c3                   ret 
// 0061e513  c70600000000         mov dword ptr [esi], 0
// 0061e519  c6460401             mov byte ptr [esi + 4], 1
// 0061e51d  8a4605               mov al, byte ptr [esi + 5]
// 0061e520  5e                   pop esi
// 0061e521  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
