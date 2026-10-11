// roc 2009-12 0057bad0  unit: RBX::VCylinderMesh::?$FactoryProduct::Creator  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0057bad0
//
// 0057bad0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057bad4  83ec0c               sub esp, 0xc
// 0057bad7  85c9                 test ecx, ecx
// 0057bad9  7716                 ja 0x57baf1
// 0057badb  33c9                 xor ecx, ecx
// 0057badd  8d14cd00000000       lea edx, [ecx*8]
// 0057bae4  52                   push edx
// 0057bae5  e8767d2700           call 0x7f3860
// 0057baea  83c404               add esp, 4
// 0057baed  83c40c               add esp, 0xc
// 0057baf0  c3                   ret 
// 0057baf1  83c8ff               or eax, 0xffffffff
// 0057baf4  33d2                 xor edx, edx
// 0057baf6  f7f1                 div ecx
// 0057baf8  83f808               cmp eax, 8
// 0057bafb  73e0                 jae 0x57badd
// 0057bafd  8d442410             lea eax, [esp + 0x10]
// 0057bb01  50                   push eax
// 0057bb02  8d4c2404             lea ecx, [esp + 4]
// 0057bb06  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057bb0e  ff1548b79800         call dword ptr [0x98b748]
// 0057bb14  6838efa800           push 0xa8ef38
// 0057bb19  8d4c2404             lea ecx, [esp + 4]
// 0057bb1d  51                   push ecx
// 0057bb1e  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 0057bb26  e84d8d2700           call 0x7f4878
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$_Allocate@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@IPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/GlobalSettings.cpp
