// roc 2007-03 00566e40  unit: seg_00560000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00566e40
//
// 00566e40  56                   push esi
// 00566e41  8bf1                 mov esi, ecx
// 00566e43  807e0800             cmp byte ptr [esi + 8], 0
// 00566e47  7526                 jne 0x566e6f
// 00566e49  8b4e04               mov ecx, dword ptr [esi + 4]
// 00566e4c  85c9                 test ecx, ecx
// 00566e4e  7414                 je 0x566e64
// 00566e50  ff15b0e57700         call dword ptr [0x77e5b0]
// 00566e56  83f8ff               cmp eax, -1
// 00566e59  7409                 je 0x566e64
// 00566e5b  884609               mov byte ptr [esi + 9], al
// 00566e5e  c6460801             mov byte ptr [esi + 8], 1
// 00566e62  5e                   pop esi
// 00566e63  c3                   ret 
// 00566e64  c7460400000000       mov dword ptr [esi + 4], 0
// 00566e6b  c6460801             mov byte ptr [esi + 8], 1
// 00566e6f  8a4609               mov al, byte ptr [esi + 9]
// 00566e72  5e                   pop esi
// 00566e73  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
