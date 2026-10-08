// roc 2009-12 004cc5f0  unit: G3D::VARArea  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc5f0
//
// 004cc5f0  56                   push esi
// 004cc5f1  57                   push edi
// 004cc5f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004cc5f6  6830b94c00           push 0x4cb930
// 004cc5fb  6a08                 push 8
// 004cc5fd  6a50                 push 0x50
// 004cc5ff  8bf1                 mov esi, ecx
// 004cc601  57                   push edi
// 004cc602  56                   push esi
// 004cc603  e8b8f8ffff           call 0x4cbec0
// 004cc608  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 004cc60e  898680020000         mov dword ptr [esi + 0x280], eax
// 004cc614  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 004cc61a  898e84020000         mov dword ptr [esi + 0x284], ecx
// 004cc620  8a9788020000         mov dl, byte ptr [edi + 0x288]
// 004cc626  889688020000         mov byte ptr [esi + 0x288], dl
// 004cc62c  d9878c020000         fld dword ptr [edi + 0x28c]
// 004cc632  d99e8c020000         fstp dword ptr [esi + 0x28c]
// 004cc638  d98790020000         fld dword ptr [edi + 0x290]
// 004cc63e  d99e90020000         fstp dword ptr [esi + 0x290]
// 004cc644  d98794020000         fld dword ptr [edi + 0x294]
// 004cc64a  d99e94020000         fstp dword ptr [esi + 0x294]
// 004cc650  d98798020000         fld dword ptr [edi + 0x298]
// 004cc656  d99e98020000         fstp dword ptr [esi + 0x298]
// 004cc65c  8a879c020000         mov al, byte ptr [edi + 0x29c]
// 004cc662  88869c020000         mov byte ptr [esi + 0x29c], al
// 004cc668  8a8f9d020000         mov cl, byte ptr [edi + 0x29d]
// 004cc66e  5f                   pop edi
// 004cc66f  888e9d020000         mov byte ptr [esi + 0x29d], cl
// 004cc675  8bc6                 mov eax, esi
// 004cc677  5e                   pop esi
// 004cc678  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Lights@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
