// roc 2007-08 00666b30  unit: CXTTreeBase  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666b30
//
// 00666b30  56                   push esi
// 00666b31  8bf1                 mov esi, ecx
// 00666b33  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00666b36  e8d7180d00           call 0x738412
// 00666b3b  a900020000           test eax, 0x200
// 00666b40  741e                 je 0x666b60
// 00666b42  837e1400             cmp dword ptr [esi + 0x14], 0
// 00666b46  7418                 je 0x666b60
// 00666b48  8b4634               mov eax, dword ptr [esi + 0x34]
// 00666b4b  6a00                 push 0
// 00666b4d  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00666b54  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00666b57  6a00                 push 0
// 00666b59  51                   push ecx
// 00666b5a  ff15dcec7700         call dword ptr [0x77ecdc]
// 00666b60  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00666b63  e8d696fcff           call 0x63023e
// 00666b68  5e                   pop esi
// 00666b69  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnNcMouseMove@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
