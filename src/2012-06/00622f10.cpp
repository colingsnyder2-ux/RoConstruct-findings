// roc 2012-06 00622f10  unit: RBX::WedgeBuilder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00622f10
//
// 00622f10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00622f14  83ec0c               sub esp, 0xc
// 00622f17  85c9                 test ecx, ecx
// 00622f19  7712                 ja 0x622f2d
// 00622f1b  33c9                 xor ecx, ecx
// 00622f1d  c1e104               shl ecx, 4
// 00622f20  51                   push ecx
// 00622f21  e8f4f13500           call 0x98211a
// 00622f26  83c404               add esp, 4
// 00622f29  83c40c               add esp, 0xc
// 00622f2c  c3                   ret 
// 00622f2d  83c8ff               or eax, 0xffffffff
// 00622f30  33d2                 xor edx, edx
// 00622f32  f7f1                 div ecx
// 00622f34  83f810               cmp eax, 0x10
// 00622f37  73e4                 jae 0x622f1d
// 00622f39  8d442410             lea eax, [esp + 0x10]
// 00622f3d  50                   push eax
// 00622f3e  8d4c2404             lea ecx, [esp + 4]
// 00622f42  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00622f4a  ff15d029b200         call dword ptr [0xb229d0]
// 00622f50  685861cd00           push 0xcd6158
// 00622f55  8d4c2404             lea ecx, [esp + 4]
// 00622f59  51                   push ecx
// 00622f5a  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 00622f62  e8dd013600           call 0x983144
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$_Allocate@UIDREFItem@MergeBinder@RBX@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@IPAU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
