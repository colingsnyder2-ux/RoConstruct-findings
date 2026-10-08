// roc 2007-03 00543860  unit: seg_00540000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543860
//
// 00543860  64a100000000         mov eax, dword ptr fs:[0]
// 00543866  6aff                 push -1
// 00543868  6880cb7500           push 0x75cb80
// 0054386d  50                   push eax
// 0054386e  64892500000000       mov dword ptr fs:[0], esp
// 00543875  8b442424             mov eax, dword ptr [esp + 0x24]
// 00543879  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054387d  56                   push esi
// 0054387e  50                   push eax
// 0054387f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543883  8bf1                 mov esi, ecx
// 00543885  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00543889  51                   push ecx
// 0054388a  52                   push edx
// 0054388b  50                   push eax
// 0054388c  8d4c2438             lea ecx, [esp + 0x38]
// 00543890  51                   push ecx
// 00543891  e83af8ffff           call 0x5430d0
// 00543896  8b10                 mov edx, dword ptr [eax]
// 00543898  83c40c               add esp, 0xc
// 0054389b  8bcc                 mov ecx, esp
// 0054389d  c70000000000         mov dword ptr [eax], 0
// 005438a3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005438ab  8964242c             mov dword ptr [esp + 0x2c], esp
// 005438af  8911                 mov dword ptr [ecx], edx
// 005438b1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005438b5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005438b9  50                   push eax
// 005438ba  51                   push ecx
// 005438bb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005438c0  e88bfeffff           call 0x543750
// 005438c5  50                   push eax
// 005438c6  8bce                 mov ecx, esi
// 005438c8  c644242000           mov byte ptr [esp + 0x20], 0
// 005438cd  e8cef0efff           call 0x4429a0
// 005438d2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005438d6  52                   push edx
// 005438d7  e814a80d00           call 0x61e0f0
// 005438dc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005438e0  83c404               add esp, 4
// 005438e3  c706a46a7a00         mov dword ptr [esi], 0x7a6aa4
// 005438e9  8bc6                 mov eax, esi
// 005438eb  64890d00000000       mov dword ptr fs:[0], ecx
// 005438f2  5e                   pop esi
// 005438f3  83c40c               add esp, 0xc
// 005438f6  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
