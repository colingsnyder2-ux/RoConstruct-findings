// from server: 100% by auto
// roc 2008-06 00479860  unit: CInstanceRecord::CNameItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479860
//
// 00479860  56                   push esi
// 00479861  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00479865  56                   push esi
// 00479866  e895feffff           call 0x479700
// 0047986b  8b442408             mov eax, dword ptr [esp + 8]
// 0047986f  50                   push eax
// 00479870  8bce                 mov ecx, esi
// 00479872  e8e9f90000           call 0x489260
// 00479877  5e                   pop esi
// 00479878  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoordArray@RenderDevice@G3D@@QAEXIABVVAR@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
