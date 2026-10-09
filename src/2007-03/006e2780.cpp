// roc 2007-03 006e2780  unit: seg_006e0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e2780
//
// 006e2780  56                   push esi
// 006e2781  8bf1                 mov esi, ecx
// 006e2783  83be600a000000       cmp dword ptr [esi + 0xa60], 0
// 006e278a  7423                 je 0x6e27af
// 006e278c  68300c6200           push 0x620c30
// 006e2791  b910238c00           mov ecx, 0x8c2310
// 006e2796  e809830500           call 0x73aaa4
// 006e279b  85c0                 test eax, eax
// 006e279d  7505                 jne 0x6e27a4
// 006e279f  e90abcf3ff           jmp 0x61e3ae
// 006e27a4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006e27a7  51                   push ecx
// 006e27a8  8bc8                 mov ecx, eax
// 006e27aa  e821acfaff           call 0x68d3d0
// 006e27af  8bce                 mov ecx, esi
// 006e27b1  5e                   pop esi
// 006e27b2  e9ffc5f3ff           jmp 0x61edb6
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnDestroy@CXTPImageEditorDlg@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
