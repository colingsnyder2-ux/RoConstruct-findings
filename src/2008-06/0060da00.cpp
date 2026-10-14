// roc 2008-06 0060da00  unit: RBX::BlockBlockContact  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060da00
//
// 0060da00  6aff                 push -1
// 0060da02  68608c7d00           push 0x7d8c60
// 0060da07  64a100000000         mov eax, dword ptr fs:[0]
// 0060da0d  50                   push eax
// 0060da0e  64892500000000       mov dword ptr fs:[0], esp
// 0060da15  83ec34               sub esp, 0x34
// 0060da18  8b442458             mov eax, dword ptr [esp + 0x58]
// 0060da1c  d900                 fld dword ptr [eax]
// 0060da1e  8b442444             mov eax, dword ptr [esp + 0x44]
// 0060da22  d94010               fld dword ptr [eax + 0x10]
// 0060da25  53                   push ebx
// 0060da26  d8c9                 fmul st(1)
// 0060da28  56                   push esi
// 0060da29  d94014               fld dword ptr [eax + 0x14]
// 0060da2c  57                   push edi
// 0060da2d  d8ca                 fmul st(2)
// 0060da2f  8bf1                 mov esi, ecx
// 0060da31  d94018               fld dword ptr [eax + 0x18]
// 0060da34  8d4c2418             lea ecx, [esp + 0x18]
// 0060da38  decb                 fmulp st(3)
// 0060da3a  51                   push ecx
// 0060da3b  d9c9                 fxch st(1)
// 0060da3d  83c004               add eax, 4
// 0060da40  d95c241c             fstp dword ptr [esp + 0x1c]
// 0060da44  50                   push eax
// 0060da45  8d54242c             lea edx, [esp + 0x2c]
// 0060da49  d95c2424             fstp dword ptr [esp + 0x24]
// 0060da4d  52                   push edx
// 0060da4e  d95c242c             fstp dword ptr [esp + 0x2c]
// 0060da52  e8d9adf0ff           call 0x518830
// 0060da57  83c40c               add esp, 0xc
// 0060da5a  33db                 xor ebx, ebx
// 0060da5c  895c2448             mov dword ptr [esp + 0x48], ebx
// 0060da60  895c2410             mov dword ptr [esp + 0x10], ebx
// 0060da64  895c2414             mov dword ptr [esp + 0x14], ebx
// 0060da68  895c240c             mov dword ptr [esp + 0xc], ebx
// 0060da6c  c644244801           mov byte ptr [esp + 0x48], 1
// 0060da71  395c2454             cmp dword ptr [esp + 0x54], ebx
// 0060da75  740e                 je 0x60da85
// 0060da77  8d442454             lea eax, [esp + 0x54]
// 0060da7b  50                   push eax
// 0060da7c  8d4c2410             lea ecx, [esp + 0x10]
// 0060da80  e89bf4fbff           call 0x5ccf20
// 0060da85  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 0060da89  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0060da8d  68b8be9700           push 0x97beb8
// 0060da92  57                   push edi
// 0060da93  51                   push ecx
// 0060da94  8d542418             lea edx, [esp + 0x18]
// 0060da98  52                   push edx
// 0060da99  8d442434             lea eax, [esp + 0x34]
// 0060da9d  50                   push eax
// 0060da9e  8bce                 mov ecx, esi
// 0060daa0  e83bfcffff           call 0x60d6e0
// 0060daa5  8bf0                 mov esi, eax
// 0060daa7  3bf3                 cmp esi, ebx
// 0060daa9  742a                 je 0x60dad5
// 0060daab  d907                 fld dword ptr [edi]
// 0060daad  d8642428             fsub dword ptr [esp + 0x28]
// 0060dab1  d94704               fld dword ptr [edi + 4]
// 0060dab4  d864242c             fsub dword ptr [esp + 0x2c]
// 0060dab8  d94708               fld dword ptr [edi + 8]
// 0060dabb  d8642430             fsub dword ptr [esp + 0x30]
// 0060dabf  d9c2                 fld st(2)
// 0060dac1  decb                 fmulp st(3)
// 0060dac3  d9c1                 fld st(1)
// 0060dac5  deca                 fmulp st(2)
// 0060dac7  d9ca                 fxch st(2)
// 0060dac9  dec1                 faddp st(1)
// 0060dacb  d9c1                 fld st(1)
// 0060dacd  deca                 fmulp st(2)
// 0060dacf  dec1                 faddp st(1)
// 0060dad1  d9fa                 fsqrt 
// 0060dad3  eb02                 jmp 0x60dad7
// 0060dad5  d9ee                 fldz 
// 0060dad7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0060dadb  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0060dadf  52                   push edx
// 0060dae0  d919                 fstp dword ptr [ecx]
// 0060dae2  885c244c             mov byte ptr [esp + 0x4c], bl
// 0060dae6  e835a2efff           call 0x507d20
// 0060daeb  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0060daef  83c404               add esp, 4
// 0060daf2  5f                   pop edi
// 0060daf3  8bc6                 mov eax, esi
// 0060daf5  5e                   pop esi
// 0060daf6  5b                   pop ebx
// 0060daf7  64890d00000000       mov dword ptr fs:[0], ecx
// 0060dafe  83c440               add esp, 0x40
// 0060db01  c21800               ret 0x18
// library openrbx-client/App\v8world\ContactManager.cpp (function ?getHitLegacy@ContactManager@RBX@@QBEPAVPrimitive@2@ABVRay@G3D@@PBV32@PBVHitTestFilter@2@AAVVector3@5@AAMABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
