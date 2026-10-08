// roc 2010-06 00496ec0  unit: seg_00490000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00496ec0
//
// 00496ec0  64a100000000         mov eax, dword ptr fs:[0]
// 00496ec6  6aff                 push -1
// 00496ec8  68d46b9800           push 0x986bd4
// 00496ecd  50                   push eax
// 00496ece  64892500000000       mov dword ptr fs:[0], esp
// 00496ed5  83ec38               sub esp, 0x38
// 00496ed8  53                   push ebx
// 00496ed9  56                   push esi
// 00496eda  57                   push edi
// 00496edb  8bf1                 mov esi, ecx
// 00496edd  83cfff               or edi, 0xffffffff
// 00496ee0  837e0800             cmp dword ptr [esi + 8], 0
// 00496ee4  7432                 je 0x496f18
// 00496ee6  68486ca100           push 0xa16c48
// 00496eeb  8d4c2410             lea ecx, [esp + 0x10]
// 00496eef  ff1510a49e00         call dword ptr [0x9ea410]
// 00496ef5  8b4e08               mov ecx, dword ptr [esi + 8]
// 00496ef8  8d44240c             lea eax, [esp + 0xc]
// 00496efc  50                   push eax
// 00496efd  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00496f05  e826870b00           call 0x54f630
// 00496f0a  8d4c240c             lea ecx, [esp + 0xc]
// 00496f0e  897c244c             mov dword ptr [esp + 0x4c], edi
// 00496f12  ff1500a49e00         call dword ptr [0x9ea400]
// 00496f18  837e0800             cmp dword ptr [esi + 8], 0
// 00496f1c  bb01000000           mov ebx, 1
// 00496f21  742e                 je 0x496f51
// 00496f23  68346ca100           push 0xa16c34
// 00496f28  8d4c2410             lea ecx, [esp + 0x10]
// 00496f2c  ff1510a49e00         call dword ptr [0x9ea410]
// 00496f32  8d4c240c             lea ecx, [esp + 0xc]
// 00496f36  51                   push ecx
// 00496f37  8b4e08               mov ecx, dword ptr [esi + 8]
// 00496f3a  895c2450             mov dword ptr [esp + 0x50], ebx
// 00496f3e  e8ed860b00           call 0x54f630
// 00496f43  8d4c240c             lea ecx, [esp + 0xc]
// 00496f47  897c244c             mov dword ptr [esp + 0x4c], edi
// 00496f4b  ff1500a49e00         call dword ptr [0x9ea400]
// 00496f51  d9e8                 fld1 
// 00496f53  83ec10               sub esp, 0x10
// 00496f56  dd542408             fst qword ptr [esp + 8]
// 00496f5a  8bce                 mov ecx, esi
// 00496f5c  dd1c24               fstp qword ptr [esp]
// 00496f5f  e83cfbffff           call 0x496aa0
// 00496f64  837e0800             cmp dword ptr [esi + 8], 0
// 00496f68  7432                 je 0x496f9c
// 00496f6a  681c6ca100           push 0xa16c1c
// 00496f6f  8d4c2410             lea ecx, [esp + 0x10]
// 00496f73  ff1510a49e00         call dword ptr [0x9ea410]
// 00496f79  8b4e08               mov ecx, dword ptr [esi + 8]
// 00496f7c  8d54240c             lea edx, [esp + 0xc]
// 00496f80  52                   push edx
// 00496f81  c744245002000000     mov dword ptr [esp + 0x50], 2
// 00496f89  e8a2860b00           call 0x54f630
// 00496f8e  8d4c240c             lea ecx, [esp + 0xc]
// 00496f92  897c244c             mov dword ptr [esp + 0x4c], edi
// 00496f96  ff1500a49e00         call dword ptr [0x9ea400]
// 00496f9c  807e0400             cmp byte ptr [esi + 4], 0
// 00496fa0  744e                 je 0x496ff0
// 00496fa2  837e0800             cmp dword ptr [esi + 8], 0
// 00496fa6  7432                 je 0x496fda
// 00496fa8  68086ca100           push 0xa16c08
// 00496fad  8d4c242c             lea ecx, [esp + 0x2c]
// 00496fb1  ff1510a49e00         call dword ptr [0x9ea410]
// 00496fb7  8b4e08               mov ecx, dword ptr [esi + 8]
// 00496fba  8d442428             lea eax, [esp + 0x28]
// 00496fbe  50                   push eax
// 00496fbf  c744245003000000     mov dword ptr [esp + 0x50], 3
// 00496fc7  e864860b00           call 0x54f630
// 00496fcc  8d4c2428             lea ecx, [esp + 0x28]
// 00496fd0  897c244c             mov dword ptr [esp + 0x4c], edi
// 00496fd4  ff1500a49e00         call dword ptr [0x9ea400]
// 00496fda  e8e104ffff           call 0x4874c0
// 00496fdf  8b0e                 mov ecx, dword ptr [esi]
// 00496fe1  85c9                 test ecx, ecx
// 00496fe3  740b                 je 0x496ff0
// 00496fe5  8b11                 mov edx, dword ptr [ecx]
// 00496fe7  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 00496fed  53                   push ebx
// 00496fee  ffd0                 call eax
// 00496ff0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00496ff4  889e99080000         mov byte ptr [esi + 0x899], bl
// 00496ffa  5f                   pop edi
// 00496ffb  5e                   pop esi
// 00496ffc  5b                   pop ebx
// 00496ffd  64890d00000000       mov dword ptr fs:[0], ecx
// 00497004  83c444               add esp, 0x44
// 00497007  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?cleanup@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
