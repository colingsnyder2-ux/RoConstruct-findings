// roc 2009-06 00646060  unit: RBX::Soundscape::SoundService  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00646060
//
// 00646060  6aff                 push -1
// 00646062  6800928500           push 0x859200
// 00646067  64a100000000         mov eax, dword ptr fs:[0]
// 0064606d  50                   push eax
// 0064606e  64892500000000       mov dword ptr fs:[0], esp
// 00646075  51                   push ecx
// 00646076  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064607a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064607e  56                   push esi
// 0064607f  50                   push eax
// 00646080  8b442428             mov eax, dword ptr [esp + 0x28]
// 00646084  8bf1                 mov esi, ecx
// 00646086  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064608a  51                   push ecx
// 0064608b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064608f  52                   push edx
// 00646090  50                   push eax
// 00646091  51                   push ecx
// 00646092  8d542444             lea edx, [esp + 0x44]
// 00646096  52                   push edx
// 00646097  e8e4e2ffff           call 0x644380
// 0064609c  8b08                 mov ecx, dword ptr [eax]
// 0064609e  83c410               add esp, 0x10
// 006460a1  c70000000000         mov dword ptr [eax], 0
// 006460a7  8bc4                 mov eax, esp
// 006460a9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006460b1  8964240c             mov dword ptr [esp + 0xc], esp
// 006460b5  8908                 mov dword ptr [eax], ecx
// 006460b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006460bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006460bf  50                   push eax
// 006460c0  51                   push ecx
// 006460c1  c644242001           mov byte ptr [esp + 0x20], 1
// 006460c6  e845feffff           call 0x645f10
// 006460cb  50                   push eax
// 006460cc  8bce                 mov ecx, esi
// 006460ce  c644242400           mov byte ptr [esp + 0x24], 0
// 006460d3  e8f8dfffff           call 0x6440d0
// 006460d8  8b542430             mov edx, dword ptr [esp + 0x30]
// 006460dc  52                   push edx
// 006460dd  e850290d00           call 0x718a32
// 006460e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006460e6  83c404               add esp, 4
// 006460e9  c70624e68d00         mov dword ptr [esi], 0x8de624
// 006460ef  8bc6                 mov eax, esi
// 006460f1  64890d00000000       mov dword ptr fs:[0], ecx
// 006460f8  5e                   pop esi
// 006460f9  83c410               add esp, 0x10
// 006460fc  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
