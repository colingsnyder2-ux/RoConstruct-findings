// roc 2011-06 007b3740  unit: RBX::SleepStage  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b3740
//
// 007b3740  53                   push ebx
// 007b3741  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007b3745  56                   push esi
// 007b3746  57                   push edi
// 007b3747  8bf9                 mov edi, ecx
// 007b3749  be02000000           mov esi, 2
// 007b374e  8bff                 mov edi, edi
// 007b3750  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 007b3753  e8a8f9eeff           call 0x6a3100
// 007b3758  50                   push eax
// 007b3759  8bcf                 mov ecx, edi
// 007b375b  e890f4ffff           call 0x7b2bf0
// 007b3760  83ee01               sub esi, 1
// 007b3763  75eb                 jne 0x7b3750
// 007b3765  5f                   pop edi
// 007b3766  5e                   pop esi
// 007b3767  5b                   pop ebx
// 007b3768  c20400               ret 4
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?touchEvent@SleepStage@RBX@@AAEXPAVContact@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
