// roc 2007-03 00470100  unit: seg_00470000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00470100
//
// 00470100  6aff                 push -1
// 00470102  6869807400           push 0x748069
// 00470107  64a100000000         mov eax, dword ptr fs:[0]
// 0047010d  50                   push eax
// 0047010e  51                   push ecx
// 0047010f  56                   push esi
// 00470110  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00470115  33c4                 xor eax, esp
// 00470117  50                   push eax
// 00470118  8d44240c             lea eax, [esp + 0xc]
// 0047011c  64a300000000         mov dword ptr fs:[0], eax
// 00470122  8bf1                 mov esi, ecx
// 00470124  89742408             mov dword ptr [esp + 8], esi
// 00470128  8d4e1c               lea ecx, [esi + 0x1c]
// 0047012b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00470133  ff158ce77700         call dword ptr [0x77e78c]
// 00470139  8bce                 mov ecx, esi
// 0047013b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00470143  ff158ce77700         call dword ptr [0x77e78c]
// 00470149  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047014d  64890d00000000       mov dword ptr fs:[0], ecx
// 00470154  59                   pop ecx
// 00470155  5e                   pop esi
// 00470156  83c410               add esp, 0x10
// 00470159  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??1Error@GImage@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
