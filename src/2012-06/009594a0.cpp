// roc 2012-06 009594a0  unit: seg_00950000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009594a0
//
// 009594a0  56                   push esi
// 009594a1  8b742408             mov esi, dword ptr [esp + 8]
// 009594a5  57                   push edi
// 009594a6  8bce                 mov ecx, esi
// 009594a8  e8430be6ff           call 0x7b9ff0
// 009594ad  85c0                 test eax, eax
// 009594af  741e                 je 0x9594cf
// 009594b1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009594b5  8b480c               mov ecx, dword ptr [eax + 0xc]
// 009594b8  3bf1                 cmp esi, ecx
// 009594ba  7503                 jne 0x9594bf
// 009594bc  8b4810               mov ecx, dword ptr [eax + 0x10]
// 009594bf  3bcf                 cmp ecx, edi
// 009594c1  7413                 je 0x9594d6
// 009594c3  50                   push eax
// 009594c4  8bce                 mov ecx, esi
// 009594c6  e8450be6ff           call 0x7ba010
// 009594cb  85c0                 test eax, eax
// 009594cd  75e6                 jne 0x9594b5
// 009594cf  5f                   pop edi
// 009594d0  32c0                 xor al, al
// 009594d2  5e                   pop esi
// 009594d3  c20800               ret 8
// 009594d6  d905f479b900         fld dword ptr [0xb979f4]
// 009594dc  51                   push ecx
// 009594dd  8bc8                 mov ecx, eax
// 009594df  d91c24               fstp dword ptr [esp]
// 009594e2  e889b1f3ff           call 0x894670
// 009594e7  5f                   pop edi
// 009594e8  5e                   pop esi
// 009594e9  c20800               ret 8
// library rbxgs/tool\RunDragger.cpp (function ?adjacent@RunDragger@RBX@@AAE_NPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
