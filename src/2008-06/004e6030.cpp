// from server: 100% by auto
// roc 2008-06 004e6030  unit: RBX::ViewNew::PartChunk  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6030
//
// 004e6030  8b442404             mov eax, dword ptr [esp + 4]
// 004e6034  56                   push esi
// 004e6035  8bf1                 mov esi, ecx
// 004e6037  50                   push eax
// 004e6038  c70600000000         mov dword ptr [esi], 0
// 004e603e  e85d2f0b00           call 0x598fa0
// 004e6043  8bc6                 mov eax, esi
// 004e6045  5e                   pop esi
// 004e6046  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ??0?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@QAE@PAVRenderbuffer@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
