// from server: 100% by tester
// roc 2007-03 00482eb0  unit: seg_00480000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00482eb0
//
// 00482eb0  6aff                 push -1
// 00482eb2  6883847400           push 0x748483
// 00482eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00482ebd  50                   push eax
// 00482ebe  51                   push ecx
// 00482ebf  53                   push ebx
// 00482ec0  56                   push esi
// 00482ec1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00482ec6  33c4                 xor eax, esp
// 00482ec8  50                   push eax
// 00482ec9  8d442410             lea eax, [esp + 0x10]
// 00482ecd  64a300000000         mov dword ptr fs:[0], eax
// 00482ed3  8bf1                 mov esi, ecx
// 00482ed5  8974240c             mov dword ptr [esp + 0xc], esi
// 00482ed9  8d4e34               lea ecx, [esi + 0x34]
// 00482edc  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00482ee4  ff158ce77700         call dword ptr [0x77e78c]
// 00482eea  8b4614               mov eax, dword ptr [esi + 0x14]
// 00482eed  33db                 xor ebx, ebx
// 00482eef  50                   push eax
// 00482ef0  885c241c             mov byte ptr [esp + 0x1c], bl
// 00482ef4  e887040700           call 0x4f3380
// 00482ef9  83c404               add esp, 4
// 00482efc  8bce                 mov ecx, esi
// 00482efe  895e14               mov dword ptr [esi + 0x14], ebx
// 00482f01  895e18               mov dword ptr [esi + 0x18], ebx
// 00482f04  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00482f07  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00482f0f  e87c67f8ff           call 0x409690
// 00482f14  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00482f18  64890d00000000       mov dword ptr fs:[0], ecx
// 00482f1f  59                   pop ecx
// 00482f20  5e                   pop esi
// 00482f21  5b                   pop ebx
// 00482f22  83c410               add esp, 0x10
// 00482f25  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextInput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
