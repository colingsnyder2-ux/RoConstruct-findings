// roc 2008-06 0041d500  unit: VDHTMLWindow::?$SignalDesc  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041d500
//
// 0041d500  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041d504  83ec0c               sub esp, 0xc
// 0041d507  85c9                 test ecx, ecx
// 0041d509  771c                 ja 0x41d527
// 0041d50b  33c9                 xor ecx, ecx
// 0041d50d  8d14cd00000000       lea edx, [ecx*8]
// 0041d514  2bd1                 sub edx, ecx
// 0041d516  03d2                 add edx, edx
// 0041d518  03d2                 add edx, edx
// 0041d51a  52                   push edx
// 0041d51b  e800342800           call 0x6a0920
// 0041d520  83c404               add esp, 4
// 0041d523  83c40c               add esp, 0xc
// 0041d526  c3                   ret 
// 0041d527  83c8ff               or eax, 0xffffffff
// 0041d52a  33d2                 xor edx, edx
// 0041d52c  f7f1                 div ecx
// 0041d52e  83f81c               cmp eax, 0x1c
// 0041d531  73da                 jae 0x41d50d
// 0041d533  8d442410             lea eax, [esp + 0x10]
// 0041d537  50                   push eax
// 0041d538  8d4c2404             lea ecx, [esp + 4]
// 0041d53c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041d544  ff15a4288000         call dword ptr [0x8028a4]
// 0041d54a  68d8078d00           push 0x8d07d8
// 0041d54f  8d4c2404             lea ecx, [esp + 4]
// 0041d553  51                   push ecx
// 0041d554  c744240804b18000     mov dword ptr [esp + 8], 0x80b104
// 0041d55c  e82b402800           call 0x6a158c
// library openrbx-client/App\reflection\signal.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
