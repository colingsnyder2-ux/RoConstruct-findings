// roc 2011-06 007bd6f0  unit: seg_007b0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007bd6f0
//
// 007bd6f0  56                   push esi
// 007bd6f1  8b742408             mov esi, dword ptr [esp + 8]
// 007bd6f5  57                   push edi
// 007bd6f6  8bce                 mov ecx, esi
// 007bd6f8  e8c360eeff           call 0x6a37c0
// 007bd6fd  85c0                 test eax, eax
// 007bd6ff  741e                 je 0x7bd71f
// 007bd701  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007bd705  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007bd708  3bf1                 cmp esi, ecx
// 007bd70a  7503                 jne 0x7bd70f
// 007bd70c  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007bd70f  3bcf                 cmp ecx, edi
// 007bd711  7413                 je 0x7bd726
// 007bd713  50                   push eax
// 007bd714  8bce                 mov ecx, esi
// 007bd716  e8c560eeff           call 0x6a37e0
// 007bd71b  85c0                 test eax, eax
// 007bd71d  75e6                 jne 0x7bd705
// 007bd71f  5f                   pop edi
// 007bd720  32c0                 xor al, al
// 007bd722  5e                   pop esi
// 007bd723  c20800               ret 8
// 007bd726  d90588f8a800         fld dword ptr [0xa8f888]
// 007bd72c  51                   push ecx
// 007bd72d  8bc8                 mov ecx, eax
// 007bd72f  d91c24               fstp dword ptr [esp]
// 007bd732  e839c6f9ff           call 0x759d70
// 007bd737  5f                   pop edi
// 007bd738  5e                   pop esi
// 007bd739  c20800               ret 8
// library rbxgs/tool\RunDragger.cpp (function ?adjacent@RunDragger@RBX@@AAE_NPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
