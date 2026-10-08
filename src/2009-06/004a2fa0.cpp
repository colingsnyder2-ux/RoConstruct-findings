// roc 2009-06 004a2fa0  unit: G3D::PBVTextureFormat::?$Table  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a2fa0
//
// 004a2fa0  6aff                 push -1
// 004a2fa2  6826728500           push 0x857226
// 004a2fa7  64a100000000         mov eax, dword ptr fs:[0]
// 004a2fad  50                   push eax
// 004a2fae  64892500000000       mov dword ptr fs:[0], esp
// 004a2fb5  81ecbc070000         sub esp, 0x7bc
// 004a2fbb  53                   push ebx
// 004a2fbc  55                   push ebp
// 004a2fbd  56                   push esi
// 004a2fbe  8bf1                 mov esi, ecx
// 004a2fc0  57                   push edi
// 004a2fc1  8dbe20010000         lea edi, [esi + 0x120]
// 004a2fc7  57                   push edi
// 004a2fc8  8d4c2470             lea ecx, [esp + 0x70]
// 004a2fcc  e80ff6ffff           call 0x4a25e0
// 004a2fd1  d9ee                 fldz 
// 004a2fd3  d9542468             fst dword ptr [esp + 0x68]
// 004a2fd7  33c0                 xor eax, eax
// 004a2fd9  d9542410             fst dword ptr [esp + 0x10]
// 004a2fdd  6a40                 push 0x40
// 004a2fdf  d9542418             fst dword ptr [esp + 0x18]
// 004a2fe3  50                   push eax
// 004a2fe4  d95c2420             fstp dword ptr [esp + 0x20]
// 004a2fe8  898424dc070000       mov dword ptr [esp + 0x7dc], eax
// 004a2fef  d9e8                 fld1 
// 004a2ff1  89442428             mov dword ptr [esp + 0x28], eax
// 004a2ff5  8d44242c             lea eax, [esp + 0x2c]
// 004a2ff9  d95c2424             fstp dword ptr [esp + 0x24]
// 004a2ffd  50                   push eax
// 004a2ffe  c744247004000000     mov dword ptr [esp + 0x70], 4
// 004a3006  e8696c2700           call 0x719c74
// 004a300b  d9e8                 fld1 
// 004a300d  d9542430             fst dword ptr [esp + 0x30]
// 004a3011  83c40c               add esp, 0xc
// 004a3014  d9542438             fst dword ptr [esp + 0x38]
// 004a3018  d954244c             fst dword ptr [esp + 0x4c]
// 004a301c  d95c2460             fstp dword ptr [esp + 0x60]
// 004a3020  8b9c24dc070000       mov ebx, dword ptr [esp + 0x7dc]
// 004a3027  8bd3                 mov edx, ebx
// 004a3029  6bd25c               imul edx, edx, 0x5c
// 004a302c  8d4c2410             lea ecx, [esp + 0x10]
// 004a3030  51                   push ecx
// 004a3031  8d8c32c8040000       lea ecx, [edx + esi + 0x4c8]
// 004a3038  c68424d807000001     mov byte ptr [esp + 0x7d8], 1
// 004a3040  e8dbd1ffff           call 0x4a0220
// 004a3045  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004a3049  c68424d407000000     mov byte ptr [esp + 0x7d4], 0
// 004a3051  85ed                 test ebp, ebp
// 004a3053  7420                 je 0x4a3075
// 004a3055  8d4504               lea eax, [ebp + 4]
// 004a3058  50                   push eax
// 004a3059  ff15a4e18900         call dword ptr [0x89e1a4]
// 004a305f  85c0                 test eax, eax
// 004a3061  7512                 jne 0x4a3075
// 004a3063  8bcd                 mov ecx, ebp
// 004a3065  e8161dfaff           call 0x444d80
// 004a306a  8b4500               mov eax, dword ptr [ebp]
// 004a306d  8b10                 mov edx, dword ptr [eax]
// 004a306f  6a01                 push 1
// 004a3071  8bcd                 mov ecx, ebp
// 004a3073  ffd2                 call edx
// 004a3075  8b87a4030000         mov eax, dword ptr [edi + 0x3a4]
// 004a307b  3bc3                 cmp eax, ebx
// 004a307d  7d02                 jge 0x4a3081
// 004a307f  8bc3                 mov eax, ebx
// 004a3081  8987a4030000         mov dword ptr [edi + 0x3a4], eax
// 004a3087  8d44246c             lea eax, [esp + 0x6c]
// 004a308b  50                   push eax
// 004a308c  8bce                 mov ecx, esi
// 004a308e  e86de9ffff           call 0x4a1a00
// 004a3093  8d4c246c             lea ecx, [esp + 0x6c]
// 004a3097  c78424d4070000ffffffff mov dword ptr [esp + 0x7d4], 0xffffffff
// 004a30a2  e8d9deffff           call 0x4a0f80
// 004a30a7  8b8c24cc070000       mov ecx, dword ptr [esp + 0x7cc]
// 004a30ae  5f                   pop edi
// 004a30af  5e                   pop esi
// 004a30b0  5d                   pop ebp
// 004a30b1  5b                   pop ebx
// 004a30b2  64890d00000000       mov dword ptr fs:[0], ecx
// 004a30b9  81c4c8070000         add esp, 0x7c8
// 004a30bf  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?resetTextureUnit@RenderDevice@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
