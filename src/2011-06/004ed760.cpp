// roc 2011-06 004ed760  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed760
//
// 004ed760  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ed764  83ec0c               sub esp, 0xc
// 004ed767  85c9                 test ecx, ecx
// 004ed769  7716                 ja 0x4ed781
// 004ed76b  33c9                 xor ecx, ecx
// 004ed76d  8d148d00000000       lea edx, [ecx*4]
// 004ed774  52                   push edx
// 004ed775  e8e4c83100           call 0x80a05e
// 004ed77a  83c404               add esp, 4
// 004ed77d  83c40c               add esp, 0xc
// 004ed780  c3                   ret 
// 004ed781  83c8ff               or eax, 0xffffffff
// 004ed784  33d2                 xor edx, edx
// 004ed786  f7f1                 div ecx
// 004ed788  83f804               cmp eax, 4
// 004ed78b  73e0                 jae 0x4ed76d
// 004ed78d  8d442410             lea eax, [esp + 0x10]
// 004ed791  50                   push eax
// 004ed792  8d4c2404             lea ecx, [esp + 4]
// 004ed796  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004ed79e  ff156c0aa400         call dword ptr [0xa40a6c]
// 004ed7a4  68c472b800           push 0xb872c4
// 004ed7a9  8d4c2404             lea ecx, [esp + 4]
// 004ed7ad  51                   push ecx
// 004ed7ae  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 004ed7b6  e8f1d83100           call 0x80b0ac
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@V_Aux_cont@std@@@std@@YAPAV_Aux_cont@0@IPAV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/type.cpp
