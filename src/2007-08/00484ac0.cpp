// from server: 100% by tester
// roc 2007-03 00482f30  unit: seg_00480000  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00482f30
//
// 00482f30  6aff                 push -1
// 00482f32  6819857400           push 0x748519
// 00482f37  64a100000000         mov eax, dword ptr fs:[0]
// 00482f3d  50                   push eax
// 00482f3e  51                   push ecx
// 00482f3f  56                   push esi
// 00482f40  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00482f45  33c4                 xor eax, esp
// 00482f47  50                   push eax
// 00482f48  8d44240c             lea eax, [esp + 0xc]
// 00482f4c  64a300000000         mov dword ptr fs:[0], eax
// 00482f52  8bf1                 mov esi, ecx
// 00482f54  89742408             mov dword ptr [esp + 8], esi
// 00482f58  c7063c9c7900         mov dword ptr [esi], 0x799c3c
// 00482f5e  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00482f64  50                   push eax
// 00482f65  c744241808000000     mov dword ptr [esp + 0x18], 8
// 00482f6d  ff15b8808b00         call dword ptr [0x8b80b8]
// 00482f73  8d8ea0010000         lea ecx, [esi + 0x1a0]
// 00482f79  c7869c010000546d7900 mov dword ptr [esi + 0x19c], 0x796d54
// 00482f83  c644241407           mov byte ptr [esp + 0x14], 7
// 00482f88  c701dc597900         mov dword ptr [ecx], 0x7959dc
// 00482f8e  e82db3feff           call 0x46e2c0
// 00482f93  8d8e90010000         lea ecx, [esi + 0x190]
// 00482f99  c644241406           mov byte ptr [esp + 0x14], 6
// 00482f9e  e82ddfffff           call 0x480ed0
// 00482fa3  8d8e70010000         lea ecx, [esi + 0x170]
// 00482fa9  c644241405           mov byte ptr [esp + 0x14], 5
// 00482fae  ff158ce77700         call dword ptr [0x77e78c]
// 00482fb4  8d8e54010000         lea ecx, [esi + 0x154]
// 00482fba  c644241404           mov byte ptr [esp + 0x14], 4
// 00482fbf  ff158ce77700         call dword ptr [0x77e78c]
// 00482fc5  8d8e38010000         lea ecx, [esi + 0x138]
// 00482fcb  c644241403           mov byte ptr [esp + 0x14], 3
// 00482fd0  ff158ce77700         call dword ptr [0x77e78c]
// 00482fd6  8d8e1c010000         lea ecx, [esi + 0x11c]
// 00482fdc  c644241402           mov byte ptr [esp + 0x14], 2
// 00482fe1  ff158ce77700         call dword ptr [0x77e78c]
// 00482fe7  8d8e90000000         lea ecx, [esi + 0x90]
// 00482fed  c644241401           mov byte ptr [esp + 0x14], 1
// 00482ff2  e8c9d7ffff           call 0x4807c0
// 00482ff7  8d4e0c               lea ecx, [esi + 0xc]
// 00482ffa  c644241400           mov byte ptr [esp + 0x14], 0
// 00482fff  e8bcd7ffff           call 0x4807c0
// 00483004  c706946d7900         mov dword ptr [esi], 0x796d94
// 0048300a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048300e  64890d00000000       mov dword ptr fs:[0], ecx
// 00483015  59                   pop ecx
// 00483016  5e                   pop esi
// 00483017  83c410               add esp, 0x10
// 0048301a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1VertexAndPixelShader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
