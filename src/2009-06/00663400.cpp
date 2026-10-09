// roc 2009-06 00663400  unit: RBX::LegacyController::W4InputType::?$holder  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00663400
//
// 00663400  64a100000000         mov eax, dword ptr fs:[0]
// 00663406  6aff                 push -1
// 00663408  6840c38600           push 0x86c340
// 0066340d  50                   push eax
// 0066340e  64892500000000       mov dword ptr fs:[0], esp
// 00663415  56                   push esi
// 00663416  6a0c                 push 0xc
// 00663418  8bf1                 mov esi, ecx
// 0066341a  e819560b00           call 0x718a38
// 0066341f  83c404               add esp, 4
// 00663422  85c0                 test eax, eax
// 00663424  7416                 je 0x66343c
// 00663426  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066342a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066342e  c700c01b8e00         mov dword ptr [eax], 0x8e1bc0
// 00663434  894804               mov dword ptr [eax + 4], ecx
// 00663437  895008               mov dword ptr [eax + 8], edx
// 0066343a  eb02                 jmp 0x66343e
// 0066343c  33c0                 xor eax, eax
// 0066343e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00663442  51                   push ecx
// 00663443  51                   push ecx
// 00663444  8bcc                 mov ecx, esp
// 00663446  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0066344e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00663456  89642428             mov dword ptr [esp + 0x28], esp
// 0066345a  8901                 mov dword ptr [ecx], eax
// 0066345c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00663460  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00663464  52                   push edx
// 00663465  50                   push eax
// 00663466  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0066346b  e80074f8ff           call 0x5ea870
// 00663470  50                   push eax
// 00663471  8bce                 mov ecx, esi
// 00663473  c644242000           mov byte ptr [esp + 0x20], 0
// 00663478  e883ccddff           call 0x440100
// 0066347d  6a00                 push 0
// 0066347f  e8ae550b00           call 0x718a32
// 00663484  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00663488  83c404               add esp, 4
// 0066348b  c706081d8e00         mov dword ptr [esi], 0x8e1d08
// 00663491  8bc6                 mov eax, esi
// 00663493  64890d00000000       mov dword ptr fs:[0], ecx
// 0066349a  5e                   pop esi
// 0066349b  83c40c               add esp, 0xc
// 0066349e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
