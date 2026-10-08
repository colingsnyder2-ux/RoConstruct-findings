// roc 2007-03 00473710  unit: seg_00470000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473710
//
// 00473710  56                   push esi
// 00473711  8bf1                 mov esi, ecx
// 00473713  83467801             add dword ptr [esi + 0x78], 1
// 00473717  d9865c040000         fld dword ptr [esi + 0x45c]
// 0047371d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00473721  d901                 fld dword ptr [ecx]
// 00473723  dae9                 fucompp 
// 00473725  dfe0                 fnstsw ax
// 00473727  f6c444               test ah, 0x44
// 0047372a  7a24                 jp 0x473750
// 0047372c  d98660040000         fld dword ptr [esi + 0x460]
// 00473732  d94104               fld dword ptr [ecx + 4]
// 00473735  dae9                 fucompp 
// 00473737  dfe0                 fnstsw ax
// 00473739  f6c444               test ah, 0x44
// 0047373c  7a12                 jp 0x473750
// 0047373e  d98664040000         fld dword ptr [esi + 0x464]
// 00473744  d94108               fld dword ptr [ecx + 8]
// 00473747  dae9                 fucompp 
// 00473749  dfe0                 fnstsw ax
// 0047374b  f6c444               test ah, 0x44
// 0047374e  7b55                 jnp 0x4737a5
// 00473750  d901                 fld dword ptr [ecx]
// 00473752  68d4778b00           push 0x8b77d4
// 00473757  d99e5c040000         fstp dword ptr [esi + 0x45c]
// 0047375d  6802120000           push 0x1202
// 00473762  d94104               fld dword ptr [ecx + 4]
// 00473765  6808040000           push 0x408
// 0047376a  d99e60040000         fstp dword ptr [esi + 0x460]
// 00473770  d94108               fld dword ptr [ecx + 8]
// 00473773  d99e64040000         fstp dword ptr [esi + 0x464]
// 00473779  d901                 fld dword ptr [ecx]
// 0047377b  d91dd4778b00         fstp dword ptr [0x8b77d4]
// 00473781  d94104               fld dword ptr [ecx + 4]
// 00473784  d91dd8778b00         fstp dword ptr [0x8b77d8]
// 0047378a  d94108               fld dword ptr [ecx + 8]
// 0047378d  d91ddc778b00         fstp dword ptr [0x8b77dc]
// 00473793  d9e8                 fld1 
// 00473795  d91de0778b00         fstp dword ptr [0x8b77e0]
// 0047379b  ff15c8eb7700         call dword ptr [0x77ebc8]
// 004737a1  83467001             add dword ptr [esi + 0x70], 1
// 004737a5  5e                   pop esi
// 004737a6  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSpecularCoefficient@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
