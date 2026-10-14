// roc 2008-06 005df1b0  unit: RBX::Message  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df1b0
//
// 005df1b0  8b442408             mov eax, dword ptr [esp + 8]
// 005df1b4  d900                 fld dword ptr [eax]
// 005df1b6  8b542404             mov edx, dword ptr [esp + 4]
// 005df1ba  d91a                 fstp dword ptr [edx]
// 005df1bc  8d4a04               lea ecx, [edx + 4]
// 005df1bf  d94004               fld dword ptr [eax + 4]
// 005df1c2  56                   push esi
// 005df1c3  d919                 fstp dword ptr [ecx]
// 005df1c5  8d7208               lea esi, [edx + 8]
// 005df1c8  d94008               fld dword ptr [eax + 8]
// 005df1cb  d916                 fst dword ptr [esi]
// 005df1cd  d819                 fcomp dword ptr [ecx]
// 005df1cf  dfe0                 fnstsw ax
// 005df1d1  f6c405               test ah, 5
// 005df1d4  7a0c                 jp 0x5df1e2
// 005df1d6  3bf1                 cmp esi, ecx
// 005df1d8  7408                 je 0x5df1e2
// 005df1da  d906                 fld dword ptr [esi]
// 005df1dc  d901                 fld dword ptr [ecx]
// 005df1de  d91e                 fstp dword ptr [esi]
// 005df1e0  d919                 fstp dword ptr [ecx]
// 005df1e2  d902                 fld dword ptr [edx]
// 005df1e4  d819                 fcomp dword ptr [ecx]
// 005df1e6  dfe0                 fnstsw ax
// 005df1e8  f6c441               test ah, 0x41
// 005df1eb  750c                 jne 0x5df1f9
// 005df1ed  3bca                 cmp ecx, edx
// 005df1ef  7408                 je 0x5df1f9
// 005df1f1  d901                 fld dword ptr [ecx]
// 005df1f3  d902                 fld dword ptr [edx]
// 005df1f5  d919                 fstp dword ptr [ecx]
// 005df1f7  d91a                 fstp dword ptr [edx]
// 005df1f9  d901                 fld dword ptr [ecx]
// 005df1fb  d81e                 fcomp dword ptr [esi]
// 005df1fd  dfe0                 fnstsw ax
// 005df1ff  f6c441               test ah, 0x41
// 005df202  8bc2                 mov eax, edx
// 005df204  750c                 jne 0x5df212
// 005df206  3bf1                 cmp esi, ecx
// 005df208  7408                 je 0x5df212
// 005df20a  d906                 fld dword ptr [esi]
// 005df20c  d901                 fld dword ptr [ecx]
// 005df20e  d91e                 fstp dword ptr [esi]
// 005df210  d919                 fstp dword ptr [ecx]
// 005df212  5e                   pop esi
// 005df213  c3                   ret 
// library rbxgs-dll/util\Math.cpp (function ?sortVector3@Math@RBX@@SA?AVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Math.cpp
