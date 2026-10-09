// roc 2008-06 005cd760  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd760
//
// 005cd760  6aff                 push -1
// 005cd762  6868e37c00           push 0x7ce368
// 005cd767  64a100000000         mov eax, dword ptr fs:[0]
// 005cd76d  50                   push eax
// 005cd76e  64892500000000       mov dword ptr fs:[0], esp
// 005cd775  51                   push ecx
// 005cd776  56                   push esi
// 005cd777  8bf1                 mov esi, ecx
// 005cd779  57                   push edi
// 005cd77a  89742408             mov dword ptr [esp + 8], esi
// 005cd77e  e87d9ff8ff           call 0x557700
// 005cd783  8bf8                 mov edi, eax
// 005cd785  e806feffff           call 0x5cd590
// 005cd78a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005cd78e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cd792  51                   push ecx
// 005cd793  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cd797  52                   push edx
// 005cd798  51                   push ecx
// 005cd799  57                   push edi
// 005cd79a  50                   push eax
// 005cd79b  8bce                 mov ecx, esi
// 005cd79d  e8aeeef9ff           call 0x56c650
// 005cd7a2  8b542430             mov edx, dword ptr [esp + 0x30]
// 005cd7a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005cd7aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cd7ae  52                   push edx
// 005cd7af  8b542428             mov edx, dword ptr [esp + 0x28]
// 005cd7b3  50                   push eax
// 005cd7b4  51                   push ecx
// 005cd7b5  52                   push edx
// 005cd7b6  8d442444             lea eax, [esp + 0x44]
// 005cd7ba  50                   push eax
// 005cd7bb  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005cd7c3  c706d4a48300         mov dword ptr [esi], 0x83a4d4
// 005cd7c9  c74618cca48300       mov dword ptr [esi + 0x18], 0x83a4cc
// 005cd7d0  e8abf8ffff           call 0x5cd080
// 005cd7d5  8b08                 mov ecx, dword ptr [eax]
// 005cd7d7  c70000000000         mov dword ptr [eax], 0
// 005cd7dd  8b442448             mov eax, dword ptr [esp + 0x48]
// 005cd7e1  83c414               add esp, 0x14
// 005cd7e4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005cd7e7  85c0                 test eax, eax
// 005cd7e9  7409                 je 0x5cd7f4
// 005cd7eb  50                   push eax
// 005cd7ec  e8892e0d00           call 0x6a067a
// 005cd7f1  83c404               add esp, 4
// 005cd7f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cd7f8  5f                   pop edi
// 005cd7f9  8bc6                 mov eax, esi
// 005cd7fb  5e                   pop esi
// 005cd7fc  64890d00000000       mov dword ptr fs:[0], ecx
// 005cd803  83c410               add esp, 0x10
// 005cd806  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
