// roc 2009-06 006632a0  unit: RBX::LegacyController::W4InputType::?$holder  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006632a0
//
// 006632a0  64a100000000         mov eax, dword ptr fs:[0]
// 006632a6  6aff                 push -1
// 006632a8  6840c38600           push 0x86c340
// 006632ad  50                   push eax
// 006632ae  64892500000000       mov dword ptr fs:[0], esp
// 006632b5  56                   push esi
// 006632b6  6a0c                 push 0xc
// 006632b8  8bf1                 mov esi, ecx
// 006632ba  e879570b00           call 0x718a38
// 006632bf  83c404               add esp, 4
// 006632c2  85c0                 test eax, eax
// 006632c4  7416                 je 0x6632dc
// 006632c6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006632ca  8b542420             mov edx, dword ptr [esp + 0x20]
// 006632ce  c700481b8e00         mov dword ptr [eax], 0x8e1b48
// 006632d4  894804               mov dword ptr [eax + 4], ecx
// 006632d7  895008               mov dword ptr [eax + 8], edx
// 006632da  eb02                 jmp 0x6632de
// 006632dc  33c0                 xor eax, eax
// 006632de  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006632e2  51                   push ecx
// 006632e3  51                   push ecx
// 006632e4  8bcc                 mov ecx, esp
// 006632e6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006632ee  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006632f6  89642428             mov dword ptr [esp + 0x28], esp
// 006632fa  8901                 mov dword ptr [ecx], eax
// 006632fc  8b542420             mov edx, dword ptr [esp + 0x20]
// 00663300  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00663304  52                   push edx
// 00663305  50                   push eax
// 00663306  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0066330b  e86075f8ff           call 0x5ea870
// 00663310  50                   push eax
// 00663311  8bce                 mov ecx, esi
// 00663313  c644242000           mov byte ptr [esp + 0x20], 0
// 00663318  e8e3cdddff           call 0x440100
// 0066331d  6a00                 push 0
// 0066331f  e80e570b00           call 0x718a32
// 00663324  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00663328  83c404               add esp, 4
// 0066332b  c706a01c8e00         mov dword ptr [esi], 0x8e1ca0
// 00663331  8bc6                 mov eax, esi
// 00663333  64890d00000000       mov dword ptr fs:[0], ecx
// 0066333a  5e                   pop esi
// 0066333b  83c40c               add esp, 0xc
// 0066333e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
