// roc 2008-06 0056cae0  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056cae0
//
// 0056cae0  64a100000000         mov eax, dword ptr fs:[0]
// 0056cae6  6aff                 push -1
// 0056cae8  68fefc7c00           push 0x7cfcfe
// 0056caed  50                   push eax
// 0056caee  b801000000           mov eax, 1
// 0056caf3  64892500000000       mov dword ptr fs:[0], esp
// 0056cafa  84057c4b9700         test byte ptr [0x974b7c], al
// 0056cb00  752f                 jne 0x56cb31
// 0056cb02  09057c4b9700         or dword ptr [0x974b7c], eax
// 0056cb08  6880599300           push 0x935980
// 0056cb0d  682cd98200           push 0x82d92c
// 0056cb12  b96c4b9700           mov ecx, 0x974b6c
// 0056cb17  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056cb1f  e86cf2ffff           call 0x56bd90
// 0056cb24  6820d27f00           push 0x7fd220
// 0056cb29  e8814c1300           call 0x6a17af
// 0056cb2e  83c404               add esp, 4
// 0056cb31  8b0c24               mov ecx, dword ptr [esp]
// 0056cb34  b86c4b9700           mov eax, 0x974b6c
// 0056cb39  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cb40  83c40c               add esp, 0xc
// 0056cb43  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$shared_ptr@VInstance@RBX@@@boost@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
