// from server: 100% by auto
// roc 2008-06 00476640  unit: G3D::VARArea  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476640
//
// 00476640  8b442404             mov eax, dword ptr [esp + 4]
// 00476644  56                   push esi
// 00476645  50                   push eax
// 00476646  8bf1                 mov esi, ecx
// 00476648  e8d3cb0900           call 0x513220
// 0047664d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00476651  d900                 fld dword ptr [eax]
// 00476653  d95e24               fstp dword ptr [esi + 0x24]
// 00476656  d94004               fld dword ptr [eax + 4]
// 00476659  d95e28               fstp dword ptr [esi + 0x28]
// 0047665c  d94008               fld dword ptr [eax + 8]
// 0047665f  8bc6                 mov eax, esi
// 00476661  d95e2c               fstp dword ptr [esi + 0x2c]
// 00476664  5e                   pop esi
// 00476665  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVMatrix3@1@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
