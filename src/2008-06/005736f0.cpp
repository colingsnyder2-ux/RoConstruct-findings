// roc 2008-06 005736f0  unit: RBX::TextDisplay  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005736f0
//
// 005736f0  d9ee                 fldz 
// 005736f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005736f6  d911                 fst dword ptr [ecx]
// 005736f8  d95904               fstp dword ptr [ecx + 4]
// 005736fb  d905784d9700         fld dword ptr [0x974d78]
// 00573701  d90540f88200         fld dword ptr [0x82f840]
// 00573707  d8c9                 fmul st(1)
// 00573709  d9057c4d9700         fld dword ptr [0x974d7c]
// 0057370f  d8d1                 fcom st(1)
// 00573711  dfe0                 fnstsw ax
// 00573713  f6c441               test ah, 0x41
// 00573716  8b442408             mov eax, dword ptr [esp + 8]
// 0057371a  751f                 jne 0x57373b
// 0057371c  ddd8                 fstp st(0)
// 0057371e  d900                 fld dword ptr [eax]
// 00573720  d9058c748200         fld dword ptr [0x82748c]
// 00573726  dcc9                 fmul st(1), st(0)
// 00573728  d84804               fmul dword ptr [eax + 4]
// 0057372b  8bc1                 mov eax, ecx
// 0057372d  d9cb                 fxch st(3)
// 0057372f  dec9                 fmulp st(1)
// 00573731  d9c9                 fxch st(1)
// 00573733  deca                 fmulp st(2)
// 00573735  d919                 fstp dword ptr [ecx]
// 00573737  d95904               fstp dword ptr [ecx + 4]
// 0057373a  c3                   ret 
// 0057373b  ddd9                 fstp st(1)
// 0057373d  ddd9                 fstp st(1)
// 0057373f  d9056cf88200         fld dword ptr [0x82f86c]
// 00573745  d8c9                 fmul st(1)
// 00573747  d900                 fld dword ptr [eax]
// 00573749  d9058c748200         fld dword ptr [0x82748c]
// 0057374f  dcc9                 fmul st(1), st(0)
// 00573751  d84804               fmul dword ptr [eax + 4]
// 00573754  8bc1                 mov eax, ecx
// 00573756  d9c9                 fxch st(1)
// 00573758  deca                 fmulp st(2)
// 0057375a  deca                 fmulp st(2)
// 0057375c  d919                 fstp dword ptr [ecx]
// 0057375e  d95904               fstp dword ptr [ecx + 4]
// 00573761  c3                   ret 
// library openrbx-client/App\gui\GUI.cpp (function ?toPixelSize@GuiRoot@RBX@@SA?AVVector2@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/gui/GUI.cpp
