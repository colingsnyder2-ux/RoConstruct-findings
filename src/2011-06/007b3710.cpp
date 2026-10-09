// roc 2011-06 007b3710  unit: RBX::SleepStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b3710
//
// 007b3710  53                   push ebx
// 007b3711  56                   push esi
// 007b3712  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b3716  57                   push edi
// 007b3717  8bd9                 mov ebx, ecx
// 007b3719  83c60c               add esi, 0xc
// 007b371c  bf02000000           mov edi, 2
// 007b3721  8b0e                 mov ecx, dword ptr [esi]
// 007b3723  e8d8f9eeff           call 0x6a3100
// 007b3728  50                   push eax
// 007b3729  8bcb                 mov ecx, ebx
// 007b372b  e8d0f3ffff           call 0x7b2b00
// 007b3730  83c604               add esi, 4
// 007b3733  83ef01               sub edi, 1
// 007b3736  75e9                 jne 0x7b3721
// 007b3738  5f                   pop edi
// 007b3739  5e                   pop esi
// 007b373a  5b                   pop ebx
// 007b373b  c20400               ret 4
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?wakeEvent@SleepStage@RBX@@AAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
