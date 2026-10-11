// roc 2007-08 00567ac0  unit: TextXmlParser  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567ac0
//
// 00567ac0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00567ac4  83ec0c               sub esp, 0xc
// 00567ac7  85c9                 test ecx, ecx
// 00567ac9  7716                 ja 0x567ae1
// 00567acb  33c9                 xor ecx, ecx
// 00567acd  8d14cd00000000       lea edx, [ecx*8]
// 00567ad4  52                   push edx
// 00567ad5  e81c840c00           call 0x62fef6
// 00567ada  83c404               add esp, 4
// 00567add  83c40c               add esp, 0xc
// 00567ae0  c3                   ret 
// 00567ae1  83c8ff               or eax, 0xffffffff
// 00567ae4  33d2                 xor edx, edx
// 00567ae6  f7f1                 div ecx
// 00567ae8  83f808               cmp eax, 8
// 00567aeb  73e0                 jae 0x567acd
// 00567aed  8d442410             lea eax, [esp + 0x10]
// 00567af1  50                   push eax
// 00567af2  8d4c2404             lea ecx, [esp + 4]
// 00567af6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00567afe  ff15ece67700         call dword ptr [0x77e6ec]
// 00567b04  687cf18300           push 0x83f17c
// 00567b09  8d4c2404             lea ecx, [esp + 4]
// 00567b0d  51                   push ecx
// 00567b0e  c7442408544e7800     mov dword ptr [esp + 8], 0x784e54
// 00567b16  e883900c00           call 0x630b9e
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$_Allocate@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@IPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
