// roc 2007-03 00543900  unit: seg_00540000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543900
//
// 00543900  64a100000000         mov eax, dword ptr fs:[0]
// 00543906  6aff                 push -1
// 00543908  6880cb7500           push 0x75cb80
// 0054390d  50                   push eax
// 0054390e  64892500000000       mov dword ptr fs:[0], esp
// 00543915  8b442424             mov eax, dword ptr [esp + 0x24]
// 00543919  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054391d  56                   push esi
// 0054391e  50                   push eax
// 0054391f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543923  8bf1                 mov esi, ecx
// 00543925  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00543929  51                   push ecx
// 0054392a  52                   push edx
// 0054392b  50                   push eax
// 0054392c  8d4c2438             lea ecx, [esp + 0x38]
// 00543930  51                   push ecx
// 00543931  e8eaf7ffff           call 0x543120
// 00543936  8b10                 mov edx, dword ptr [eax]
// 00543938  83c40c               add esp, 0xc
// 0054393b  8bcc                 mov ecx, esp
// 0054393d  c70000000000         mov dword ptr [eax], 0
// 00543943  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054394b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0054394f  8911                 mov dword ptr [ecx], edx
// 00543951  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543955  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00543959  50                   push eax
// 0054395a  51                   push ecx
// 0054395b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00543960  e8ebfdffff           call 0x543750
// 00543965  50                   push eax
// 00543966  8bce                 mov ecx, esi
// 00543968  c644242000           mov byte ptr [esp + 0x20], 0
// 0054396d  e8aeefefff           call 0x442920
// 00543972  8b542428             mov edx, dword ptr [esp + 0x28]
// 00543976  52                   push edx
// 00543977  e874a70d00           call 0x61e0f0
// 0054397c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00543980  83c404               add esp, 4
// 00543983  c706cc6a7a00         mov dword ptr [esi], 0x7a6acc
// 00543989  8bc6                 mov eax, esi
// 0054398b  64890d00000000       mov dword ptr fs:[0], ecx
// 00543992  5e                   pop esi
// 00543993  83c40c               add esp, 0xc
// 00543996  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
