// roc 2011-06 00613900  unit: TextXmlParser  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00613900
//
// 00613900  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00613904  83ec0c               sub esp, 0xc
// 00613907  85c9                 test ecx, ecx
// 00613909  7712                 ja 0x61391d
// 0061390b  33c9                 xor ecx, ecx
// 0061390d  c1e104               shl ecx, 4
// 00613910  51                   push ecx
// 00613911  e848671f00           call 0x80a05e
// 00613916  83c404               add esp, 4
// 00613919  83c40c               add esp, 0xc
// 0061391c  c3                   ret 
// 0061391d  83c8ff               or eax, 0xffffffff
// 00613920  33d2                 xor edx, edx
// 00613922  f7f1                 div ecx
// 00613924  83f810               cmp eax, 0x10
// 00613927  73e4                 jae 0x61390d
// 00613929  8d442410             lea eax, [esp + 0x10]
// 0061392d  50                   push eax
// 0061392e  8d4c2404             lea ecx, [esp + 4]
// 00613932  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0061393a  ff156c0aa400         call dword ptr [0xa40a6c]
// 00613940  68c472b800           push 0xb872c4
// 00613945  8d4c2404             lea ecx, [esp + 4]
// 00613949  51                   push ecx
// 0061394a  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 00613952  e855771f00           call 0x80b0ac
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$_Allocate@UIDREFItem@MergeBinder@RBX@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@IPAU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
