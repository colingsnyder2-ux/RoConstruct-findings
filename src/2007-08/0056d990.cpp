// roc 2007-08 0056d990  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d990
//
// 0056d990  64a100000000         mov eax, dword ptr fs:[0]
// 0056d996  6aff                 push -1
// 0056d998  686e4a7500           push 0x754a6e
// 0056d99d  50                   push eax
// 0056d99e  b801000000           mov eax, 1
// 0056d9a3  64892500000000       mov dword ptr fs:[0], esp
// 0056d9aa  8405b0248c00         test byte ptr [0x8c24b0], al
// 0056d9b0  752f                 jne 0x56d9e1
// 0056d9b2  0905b0248c00         or dword ptr [0x8c24b0], eax
// 0056d9b8  6844288800           push 0x882844
// 0056d9bd  68e09f7a00           push 0x7a9fe0
// 0056d9c2  b9a0248c00           mov ecx, 0x8c24a0
// 0056d9c7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d9cf  e82cecffff           call 0x56c600
// 0056d9d4  68c09e7700           push 0x779ec0
// 0056d9d9  e845330c00           call 0x630d23
// 0056d9de  83c404               add esp, 4
// 0056d9e1  8b0c24               mov ecx, dword ptr [esp]
// 0056d9e4  b8a0248c00           mov eax, 0x8c24a0
// 0056d9e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d9f0  83c40c               add esp, 0xc
// 0056d9f3  c3                   ret 
// library openrbx-client/App\v8tree\enumproperty.cpp (function ??$singleton@VContentId@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/enumproperty.cpp
