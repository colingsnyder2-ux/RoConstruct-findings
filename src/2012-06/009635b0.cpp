// roc 2012-06 009635b0  unit: RBX::EdgeStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009635b0
//
// 009635b0  56                   push esi
// 009635b1  8bf1                 mov esi, ecx
// 009635b3  8b4e08               mov ecx, dword ptr [esi + 8]
// 009635b6  c7064068c000         mov dword ptr [esi], 0xc06840
// 009635bc  85c9                 test ecx, ecx
// 009635be  7408                 je 0x9635c8
// 009635c0  8b01                 mov eax, dword ptr [ecx]
// 009635c2  8b10                 mov edx, dword ptr [eax]
// 009635c4  6a01                 push 1
// 009635c6  ffd2                 call edx
// 009635c8  f644240801           test byte ptr [esp + 8], 1
// 009635cd  7409                 je 0x9635d8
// 009635cf  56                   push esi
// 009635d0  e83feb0100           call 0x982114
// 009635d5  83c404               add esp, 4
// 009635d8  8bc6                 mov eax, esi
// 009635da  5e                   pop esi
// 009635db  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
