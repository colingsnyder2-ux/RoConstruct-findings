// roc 2008-06 005ee700  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee700
//
// 005ee700  64a100000000         mov eax, dword ptr fs:[0]
// 005ee706  6aff                 push -1
// 005ee708  6810717d00           push 0x7d7110
// 005ee70d  50                   push eax
// 005ee70e  64892500000000       mov dword ptr fs:[0], esp
// 005ee715  56                   push esi
// 005ee716  6a0c                 push 0xc
// 005ee718  8bf1                 mov esi, ecx
// 005ee71a  e801220b00           call 0x6a0920
// 005ee71f  83c404               add esp, 4
// 005ee722  85c0                 test eax, eax
// 005ee724  7416                 je 0x5ee73c
// 005ee726  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ee72a  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee72e  c700f0fd8300         mov dword ptr [eax], 0x83fdf0
// 005ee734  894804               mov dword ptr [eax + 4], ecx
// 005ee737  895008               mov dword ptr [eax + 8], edx
// 005ee73a  eb02                 jmp 0x5ee73e
// 005ee73c  33c0                 xor eax, eax
// 005ee73e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ee742  51                   push ecx
// 005ee743  51                   push ecx
// 005ee744  8bcc                 mov ecx, esp
// 005ee746  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ee74e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005ee756  89642428             mov dword ptr [esp + 0x28], esp
// 005ee75a  8901                 mov dword ptr [ecx], eax
// 005ee75c  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee760  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ee764  52                   push edx
// 005ee765  50                   push eax
// 005ee766  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005ee76b  e880e0faff           call 0x59c7f0
// 005ee770  50                   push eax
// 005ee771  8bce                 mov ecx, esi
// 005ee773  c644242000           mov byte ptr [esp + 0x20], 0
// 005ee778  e8936ee5ff           call 0x445610
// 005ee77d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ee781  c706a0018400         mov dword ptr [esi], 0x8401a0
// 005ee787  8bc6                 mov eax, esi
// 005ee789  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee790  5e                   pop esi
// 005ee791  83c40c               add esp, 0xc
// 005ee794  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
