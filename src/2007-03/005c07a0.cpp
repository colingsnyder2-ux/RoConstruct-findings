// roc 2007-03 005c07a0  unit: seg_005c0000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c07a0
//
// 005c07a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c07a4  83ec0c               sub esp, 0xc
// 005c07a7  85c9                 test ecx, ecx
// 005c07a9  7712                 ja 0x5c07bd
// 005c07ab  33c9                 xor ecx, ecx
// 005c07ad  c1e104               shl ecx, 4
// 005c07b0  51                   push ecx
// 005c07b1  e852d90500           call 0x61e108
// 005c07b6  83c404               add esp, 4
// 005c07b9  83c40c               add esp, 0xc
// 005c07bc  c3                   ret 
// 005c07bd  83c8ff               or eax, 0xffffffff
// 005c07c0  33d2                 xor edx, edx
// 005c07c2  f7f1                 div ecx
// 005c07c4  83f810               cmp eax, 0x10
// 005c07c7  73e4                 jae 0x5c07ad
// 005c07c9  8d442410             lea eax, [esp + 0x10]
// 005c07cd  50                   push eax
// 005c07ce  8d4c2404             lea ecx, [esp + 4]
// 005c07d2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c07da  ff1554e97700         call dword ptr [0x77e954]
// 005c07e0  68e0f18300           push 0x83f1e0
// 005c07e5  8d4c2404             lea ecx, [esp + 4]
// 005c07e9  51                   push ecx
// 005c07ea  c74424082c3e7800     mov dword ptr [esp + 8], 0x783e2c
// 005c07f2  e837e80500           call 0x61f02e
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$_Allocate@UIDREFItem@MergeBinder@RBX@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@IPAU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
