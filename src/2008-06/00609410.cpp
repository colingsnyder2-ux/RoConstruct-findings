// roc 2008-06 00609410  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609410
//
// 00609410  64a100000000         mov eax, dword ptr fs:[0]
// 00609416  6aff                 push -1
// 00609418  6840897d00           push 0x7d8940
// 0060941d  50                   push eax
// 0060941e  64892500000000       mov dword ptr fs:[0], esp
// 00609425  8b442428             mov eax, dword ptr [esp + 0x28]
// 00609429  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060942d  56                   push esi
// 0060942e  50                   push eax
// 0060942f  83ec0c               sub esp, 0xc
// 00609432  8bc4                 mov eax, esp
// 00609434  8bf1                 mov esi, ecx
// 00609436  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060943a  8908                 mov dword ptr [eax], ecx
// 0060943c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00609440  895004               mov dword ptr [eax + 4], edx
// 00609443  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00609447  894808               mov dword ptr [eax + 8], ecx
// 0060944a  52                   push edx
// 0060944b  8d442440             lea eax, [esp + 0x40]
// 0060944f  50                   push eax
// 00609450  e83bfaffff           call 0x608e90
// 00609455  8b08                 mov ecx, dword ptr [eax]
// 00609457  83c410               add esp, 0x10
// 0060945a  c70000000000         mov dword ptr [eax], 0
// 00609460  8bc4                 mov eax, esp
// 00609462  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0060946a  89642424             mov dword ptr [esp + 0x24], esp
// 0060946e  8908                 mov dword ptr [eax], ecx
// 00609470  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00609474  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00609478  51                   push ecx
// 00609479  52                   push edx
// 0060947a  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0060947f  e80cbcf7ff           call 0x585090
// 00609484  50                   push eax
// 00609485  8bce                 mov ecx, esi
// 00609487  c644242000           mov byte ptr [esp + 0x20], 0
// 0060948c  e8afaff7ff           call 0x584440
// 00609491  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00609495  85c0                 test eax, eax
// 00609497  7409                 je 0x6094a2
// 00609499  50                   push eax
// 0060949a  e8db710900           call 0x6a067a
// 0060949f  83c404               add esp, 4
// 006094a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006094a6  c706b8288400         mov dword ptr [esi], 0x8428b8
// 006094ac  8bc6                 mov eax, esi
// 006094ae  64890d00000000       mov dword ptr fs:[0], ecx
// 006094b5  5e                   pop esi
// 006094b6  83c40c               add esp, 0xc
// 006094b9  c21c00               ret 0x1c
// library rbxgs/roc_unit_0a5160c3f82cced4.cpp (function ??$?0HP8PVInstance@RBX@@AEXABVCoordinateFrame@G3D@@@Z@?$PropDescriptor@VPVInstance@RBX@@VCoordinateFrame@G3D@@@Reflection@RBX@@QAE@PBD0HP8PVInstance@2@AEXABVCoordinateFrame@G3D@@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0a5160c3f82cced4.cpp
