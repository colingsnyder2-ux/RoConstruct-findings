// roc 2007-08 005658e0  unit: RBX::Verb  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005658e0
//
// 005658e0  56                   push esi
// 005658e1  8bf1                 mov esi, ecx
// 005658e3  807e0800             cmp byte ptr [esi + 8], 0
// 005658e7  7526                 jne 0x56590f
// 005658e9  8b4e04               mov ecx, dword ptr [esi + 4]
// 005658ec  85c9                 test ecx, ecx
// 005658ee  7414                 je 0x565904
// 005658f0  ff15bce47700         call dword ptr [0x77e4bc]
// 005658f6  83f8ff               cmp eax, -1
// 005658f9  7409                 je 0x565904
// 005658fb  884609               mov byte ptr [esi + 9], al
// 005658fe  c6460801             mov byte ptr [esi + 8], 1
// 00565902  5e                   pop esi
// 00565903  c3                   ret 
// 00565904  c7460400000000       mov dword ptr [esi + 4], 0
// 0056590b  c6460801             mov byte ptr [esi + 8], 1
// 0056590f  8a4609               mov al, byte ptr [esi + 9]
// 00565912  5e                   pop esi
// 00565913  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
