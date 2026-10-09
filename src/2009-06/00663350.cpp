// roc 2009-06 00663350  unit: RBX::LegacyController::W4InputType::?$holder  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00663350
//
// 00663350  64a100000000         mov eax, dword ptr fs:[0]
// 00663356  6aff                 push -1
// 00663358  6840c38600           push 0x86c340
// 0066335d  50                   push eax
// 0066335e  64892500000000       mov dword ptr fs:[0], esp
// 00663365  56                   push esi
// 00663366  6a0c                 push 0xc
// 00663368  8bf1                 mov esi, ecx
// 0066336a  e8c9560b00           call 0x718a38
// 0066336f  83c404               add esp, 4
// 00663372  85c0                 test eax, eax
// 00663374  7416                 je 0x66338c
// 00663376  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066337a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066337e  c700841b8e00         mov dword ptr [eax], 0x8e1b84
// 00663384  894804               mov dword ptr [eax + 4], ecx
// 00663387  895008               mov dword ptr [eax + 8], edx
// 0066338a  eb02                 jmp 0x66338e
// 0066338c  33c0                 xor eax, eax
// 0066338e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00663392  51                   push ecx
// 00663393  51                   push ecx
// 00663394  8bcc                 mov ecx, esp
// 00663396  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0066339e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006633a6  89642428             mov dword ptr [esp + 0x28], esp
// 006633aa  8901                 mov dword ptr [ecx], eax
// 006633ac  8b542420             mov edx, dword ptr [esp + 0x20]
// 006633b0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006633b4  52                   push edx
// 006633b5  50                   push eax
// 006633b6  c644241c01           mov byte ptr [esp + 0x1c], 1
// 006633bb  e8b074f8ff           call 0x5ea870
// 006633c0  50                   push eax
// 006633c1  8bce                 mov ecx, esi
// 006633c3  c644242000           mov byte ptr [esp + 0x20], 0
// 006633c8  e833cdddff           call 0x440100
// 006633cd  6a00                 push 0
// 006633cf  e85e560b00           call 0x718a32
// 006633d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006633d8  83c404               add esp, 4
// 006633db  c706d41c8e00         mov dword ptr [esi], 0x8e1cd4
// 006633e1  8bc6                 mov eax, esi
// 006633e3  64890d00000000       mov dword ptr fs:[0], ecx
// 006633ea  5e                   pop esi
// 006633eb  83c40c               add esp, 0xc
// 006633ee  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
