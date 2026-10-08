// from server: 100% by auto
// roc 2007-08 004637d0  unit: RBX::VRunService::?$Listener  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004637d0
//
// 004637d0  8b442404             mov eax, dword ptr [esp + 4]
// 004637d4  56                   push esi
// 004637d5  8bf1                 mov esi, ecx
// 004637d7  50                   push eax
// 004637d8  c70600000000         mov dword ptr [esi], 0
// 004637de  e88d170100           call 0x474f70
// 004637e3  8bc6                 mov eax, esi
// 004637e5  5e                   pop esi
// 004637e6  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ??0?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@QAE@PAVRenderbuffer@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
