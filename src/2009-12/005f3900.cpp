// roc 2009-12 005f3900  unit: seg_005f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3900
//
// 005f3900  56                   push esi
// 005f3901  8b742408             mov esi, dword ptr [esp + 8]
// 005f3905  57                   push edi
// 005f3906  8bc1                 mov eax, ecx
// 005f3908  b909000000           mov ecx, 9
// 005f390d  8bf8                 mov edi, eax
// 005f390f  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005f3911  5f                   pop edi
// 005f3912  5e                   pop esi
// 005f3913  c20400               ret 4
// library g3d-6.09/G3Dcpp\Box.cpp (function ??4Matrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
