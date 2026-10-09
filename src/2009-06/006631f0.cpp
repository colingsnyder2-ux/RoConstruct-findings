// roc 2009-06 006631f0  unit: RBX::LegacyController::W4InputType::?$holder  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006631f0
//
// 006631f0  64a100000000         mov eax, dword ptr fs:[0]
// 006631f6  6aff                 push -1
// 006631f8  6840c38600           push 0x86c340
// 006631fd  50                   push eax
// 006631fe  64892500000000       mov dword ptr fs:[0], esp
// 00663205  56                   push esi
// 00663206  6a0c                 push 0xc
// 00663208  8bf1                 mov esi, ecx
// 0066320a  e829580b00           call 0x718a38
// 0066320f  83c404               add esp, 4
// 00663212  85c0                 test eax, eax
// 00663214  7416                 je 0x66322c
// 00663216  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066321a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066321e  c7000c1b8e00         mov dword ptr [eax], 0x8e1b0c
// 00663224  894804               mov dword ptr [eax + 4], ecx
// 00663227  895008               mov dword ptr [eax + 8], edx
// 0066322a  eb02                 jmp 0x66322e
// 0066322c  33c0                 xor eax, eax
// 0066322e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00663232  51                   push ecx
// 00663233  51                   push ecx
// 00663234  8bcc                 mov ecx, esp
// 00663236  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0066323e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00663246  89642428             mov dword ptr [esp + 0x28], esp
// 0066324a  8901                 mov dword ptr [ecx], eax
// 0066324c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00663250  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00663254  52                   push edx
// 00663255  50                   push eax
// 00663256  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0066325b  e81076f8ff           call 0x5ea870
// 00663260  50                   push eax
// 00663261  8bce                 mov ecx, esi
// 00663263  c644242000           mov byte ptr [esp + 0x20], 0
// 00663268  e893ceddff           call 0x440100
// 0066326d  6a00                 push 0
// 0066326f  e8be570b00           call 0x718a32
// 00663274  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00663278  83c404               add esp, 4
// 0066327b  c7066c1c8e00         mov dword ptr [esi], 0x8e1c6c
// 00663281  8bc6                 mov eax, esi
// 00663283  64890d00000000       mov dword ptr fs:[0], ecx
// 0066328a  5e                   pop esi
// 0066328b  83c40c               add esp, 0xc
// 0066328e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
