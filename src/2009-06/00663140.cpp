// roc 2009-06 00663140  unit: RBX::LegacyController::W4InputType::?$holder  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00663140
//
// 00663140  64a100000000         mov eax, dword ptr fs:[0]
// 00663146  6aff                 push -1
// 00663148  6840c38600           push 0x86c340
// 0066314d  50                   push eax
// 0066314e  64892500000000       mov dword ptr fs:[0], esp
// 00663155  56                   push esi
// 00663156  6a0c                 push 0xc
// 00663158  8bf1                 mov esi, ecx
// 0066315a  e8d9580b00           call 0x718a38
// 0066315f  83c404               add esp, 4
// 00663162  85c0                 test eax, eax
// 00663164  7416                 je 0x66317c
// 00663166  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066316a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066316e  c700d01a8e00         mov dword ptr [eax], 0x8e1ad0
// 00663174  894804               mov dword ptr [eax + 4], ecx
// 00663177  895008               mov dword ptr [eax + 8], edx
// 0066317a  eb02                 jmp 0x66317e
// 0066317c  33c0                 xor eax, eax
// 0066317e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00663182  51                   push ecx
// 00663183  51                   push ecx
// 00663184  8bcc                 mov ecx, esp
// 00663186  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0066318e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00663196  89642428             mov dword ptr [esp + 0x28], esp
// 0066319a  8901                 mov dword ptr [ecx], eax
// 0066319c  8b542420             mov edx, dword ptr [esp + 0x20]
// 006631a0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006631a4  52                   push edx
// 006631a5  50                   push eax
// 006631a6  c644241c01           mov byte ptr [esp + 0x1c], 1
// 006631ab  e8c076f8ff           call 0x5ea870
// 006631b0  50                   push eax
// 006631b1  8bce                 mov ecx, esi
// 006631b3  c644242000           mov byte ptr [esp + 0x20], 0
// 006631b8  e843cfddff           call 0x440100
// 006631bd  6a00                 push 0
// 006631bf  e86e580b00           call 0x718a32
// 006631c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006631c8  83c404               add esp, 4
// 006631cb  c706381c8e00         mov dword ptr [esi], 0x8e1c38
// 006631d1  8bc6                 mov eax, esi
// 006631d3  64890d00000000       mov dword ptr fs:[0], ecx
// 006631da  5e                   pop esi
// 006631db  83c40c               add esp, 0xc
// 006631de  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
