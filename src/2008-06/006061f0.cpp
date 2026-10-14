// roc 2008-06 006061f0  unit: RBX::PointToPointBreakConnector  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006061f0
//
// 006061f0  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006061f3  8b4108               mov eax, dword ptr [ecx + 8]
// 006061f6  d9421c               fld dword ptr [edx + 0x1c]
// 006061f9  d8601c               fsub dword ptr [eax + 0x1c]
// 006061fc  83c21c               add edx, 0x1c
// 006061ff  d94204               fld dword ptr [edx + 4]
// 00606202  83c01c               add eax, 0x1c
// 00606205  d86004               fsub dword ptr [eax + 4]
// 00606208  d94208               fld dword ptr [edx + 8]
// 0060620b  d86008               fsub dword ptr [eax + 8]
// 0060620e  d9c2                 fld st(2)
// 00606210  decb                 fmulp st(3)
// 00606212  dcc8                 fmul st(0), st(0)
// 00606214  dec2                 faddp st(2)
// 00606216  dcc8                 fmul st(0), st(0)
// 00606218  dec1                 faddp st(1)
// 0060621a  d9fa                 fsqrt 
// 0060621c  d94110               fld dword ptr [ecx + 0x10]
// 0060621f  d8c9                 fmul st(1)
// 00606221  dec9                 fmulp st(1)
// 00606223  d80dac9b8100         fmul dword ptr [0x819bac]
// 00606229  c3                   ret 
// library rbxgs-dll/v8kernel\Connector.cpp (function ?potentialEnergy@PointToPointBreakConnector@RBX@@UAEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8kernel/Connector.cpp
