// roc 2009-06 00517220  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00517220
//
// 00517220  8b442404             mov eax, dword ptr [esp + 4]
// 00517224  56                   push esi
// 00517225  8bf1                 mov esi, ecx
// 00517227  50                   push eax
// 00517228  c70600000000         mov dword ptr [esi], 0
// 0051722e  e82d86f8ff           call 0x49f860
// 00517233  8bc6                 mov eax, esi
// 00517235  5e                   pop esi
// 00517236  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ??0?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@QAE@PAVRenderbuffer@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
