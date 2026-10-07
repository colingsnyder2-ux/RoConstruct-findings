// roc 2008-06 00478230  unit: CInstanceRecord::CNameItem  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478230
//
// 00478230  8b01                 mov eax, dword ptr [ecx]
// 00478232  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00478236  8d0448               lea eax, [eax + ecx*2]
// 00478239  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??A?$Array@G@G3D@@QAEAAGH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
