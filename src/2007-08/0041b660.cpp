// roc 2007-08 0041b660  unit: VDHTMLWindow::?$SignalDesc  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041b660
//
// 0041b660  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041b664  83ec0c               sub esp, 0xc
// 0041b667  85c9                 test ecx, ecx
// 0041b669  771c                 ja 0x41b687
// 0041b66b  33c9                 xor ecx, ecx
// 0041b66d  8d14cd00000000       lea edx, [ecx*8]
// 0041b674  2bd1                 sub edx, ecx
// 0041b676  03d2                 add edx, edx
// 0041b678  03d2                 add edx, edx
// 0041b67a  52                   push edx
// 0041b67b  e876482100           call 0x62fef6
// 0041b680  83c404               add esp, 4
// 0041b683  83c40c               add esp, 0xc
// 0041b686  c3                   ret 
// 0041b687  83c8ff               or eax, 0xffffffff
// 0041b68a  33d2                 xor edx, edx
// 0041b68c  f7f1                 div ecx
// 0041b68e  83f81c               cmp eax, 0x1c
// 0041b691  73da                 jae 0x41b66d
// 0041b693  8d442410             lea eax, [esp + 0x10]
// 0041b697  50                   push eax
// 0041b698  8d4c2404             lea ecx, [esp + 4]
// 0041b69c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041b6a4  ff15ece67700         call dword ptr [0x77e6ec]
// 0041b6aa  687cf18300           push 0x83f17c
// 0041b6af  8d4c2404             lea ecx, [esp + 4]
// 0041b6b3  51                   push ecx
// 0041b6b4  c7442408544e7800     mov dword ptr [esp + 8], 0x784e54
// 0041b6bc  e8dd542100           call 0x630b9e
// library openrbx-client/App\reflection\signal.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
