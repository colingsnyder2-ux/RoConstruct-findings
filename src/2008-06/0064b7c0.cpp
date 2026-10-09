// roc 2008-06 0064b7c0  unit: RBX::SleepStage  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064b7c0
//
// 0064b7c0  53                   push ebx
// 0064b7c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0064b7c5  56                   push esi
// 0064b7c6  57                   push edi
// 0064b7c7  8bf9                 mov edi, ecx
// 0064b7c9  be02000000           mov esi, 2
// 0064b7ce  8bff                 mov edi, edi
// 0064b7d0  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0064b7d3  e888bdf9ff           call 0x5e7560
// 0064b7d8  50                   push eax
// 0064b7d9  8bcf                 mov ecx, edi
// 0064b7db  e8f0feffff           call 0x64b6d0
// 0064b7e0  83ee01               sub esi, 1
// 0064b7e3  75eb                 jne 0x64b7d0
// 0064b7e5  5f                   pop edi
// 0064b7e6  5e                   pop esi
// 0064b7e7  5b                   pop ebx
// 0064b7e8  c20400               ret 4
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?touchEvent@SleepStage@RBX@@AAEXPAVContact@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
