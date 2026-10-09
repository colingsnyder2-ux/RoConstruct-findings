// roc 2008-06 0064bf60  unit: RBX::SleepStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064bf60
//
// 0064bf60  53                   push ebx
// 0064bf61  56                   push esi
// 0064bf62  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064bf66  57                   push edi
// 0064bf67  8bd9                 mov ebx, ecx
// 0064bf69  83c60c               add esi, 0xc
// 0064bf6c  bf02000000           mov edi, 2
// 0064bf71  8b0e                 mov ecx, dword ptr [esi]
// 0064bf73  e8f8b5f9ff           call 0x5e7570
// 0064bf78  50                   push eax
// 0064bf79  8bcb                 mov ecx, ebx
// 0064bf7b  e860f6ffff           call 0x64b5e0
// 0064bf80  83c604               add esi, 4
// 0064bf83  83ef01               sub edi, 1
// 0064bf86  75e9                 jne 0x64bf71
// 0064bf88  5f                   pop edi
// 0064bf89  5e                   pop esi
// 0064bf8a  5b                   pop ebx
// 0064bf8b  c20400               ret 4
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?wakeEvent@SleepStage@RBX@@AAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
