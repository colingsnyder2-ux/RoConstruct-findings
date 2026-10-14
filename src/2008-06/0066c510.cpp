// roc 2008-06 0066c510  unit: RBX::GroupDragTool  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066c510
//
// 0066c510  56                   push esi
// 0066c511  8bf1                 mov esi, ecx
// 0066c513  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0066c516  e8a5bdf7ff           call 0x5e82c0
// 0066c51b  d94004               fld dword ptr [eax + 4]
// 0066c51e  d84e1c               fmul dword ptr [esi + 0x1c]
// 0066c521  d94008               fld dword ptr [eax + 8]
// 0066c524  d84e20               fmul dword ptr [esi + 0x20]
// 0066c527  dec1                 faddp st(1)
// 0066c529  d94618               fld dword ptr [esi + 0x18]
// 0066c52c  d808                 fmul dword ptr [eax]
// 0066c52e  dec1                 faddp st(1)
// 0066c530  d84024               fadd dword ptr [eax + 0x24]
// 0066c533  d94010               fld dword ptr [eax + 0x10]
// 0066c536  d84e1c               fmul dword ptr [esi + 0x1c]
// 0066c539  d9400c               fld dword ptr [eax + 0xc]
// 0066c53c  d84e18               fmul dword ptr [esi + 0x18]
// 0066c53f  dec1                 faddp st(1)
// 0066c541  d94014               fld dword ptr [eax + 0x14]
// 0066c544  d84e20               fmul dword ptr [esi + 0x20]
// 0066c547  dec1                 faddp st(1)
// 0066c549  d84028               fadd dword ptr [eax + 0x28]
// 0066c54c  d9401c               fld dword ptr [eax + 0x1c]
// 0066c54f  d84e1c               fmul dword ptr [esi + 0x1c]
// 0066c552  d94018               fld dword ptr [eax + 0x18]
// 0066c555  d84e18               fmul dword ptr [esi + 0x18]
// 0066c558  dec1                 faddp st(1)
// 0066c55a  d94020               fld dword ptr [eax + 0x20]
// 0066c55d  d84e20               fmul dword ptr [esi + 0x20]
// 0066c560  dec1                 faddp st(1)
// 0066c562  d8402c               fadd dword ptr [eax + 0x2c]
// 0066c565  d9ca                 fxch st(2)
// 0066c567  d86648               fsub dword ptr [esi + 0x48]
// 0066c56a  d9c9                 fxch st(1)
// 0066c56c  d8664c               fsub dword ptr [esi + 0x4c]
// 0066c56f  d9ca                 fxch st(2)
// 0066c571  d86650               fsub dword ptr [esi + 0x50]
// 0066c574  5e                   pop esi
// 0066c575  dcc8                 fmul st(0), st(0)
// 0066c577  d9c2                 fld st(2)
// 0066c579  decb                 fmulp st(3)
// 0066c57b  dec2                 faddp st(2)
// 0066c57d  dcc8                 fmul st(0), st(0)
// 0066c57f  dec1                 faddp st(1)
// 0066c581  d9fa                 fsqrt 
// 0066c583  d81d746e8200         fcomp dword ptr [0x826e74]
// 0066c589  dfe0                 fnstsw ax
// 0066c58b  f6c405               test ah, 5
// 0066c58e  7a06                 jp 0x66c596
// 0066c590  b801000000           mov eax, 1
// 0066c595  c3                   ret 
// 0066c596  33c0                 xor eax, eax
// 0066c598  c3                   ret 
// library rbxgs-dll/tool\RunDragger.cpp (function ?tooCloseToCamera@RunDragger@RBX@@AAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll tool/RunDragger.cpp
