// from server: 100% by auto
// roc 2009-06 0049fee0  unit: G3D::VARArea  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049fee0
//
// 0049fee0  56                   push esi
// 0049fee1  57                   push edi
// 0049fee2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049fee6  68c0f24900           push 0x49f2c0
// 0049feeb  6a08                 push 8
// 0049feed  6a50                 push 0x50
// 0049feef  8bf1                 mov esi, ecx
// 0049fef1  57                   push edi
// 0049fef2  56                   push esi
// 0049fef3  e828f9ffff           call 0x49f820
// 0049fef8  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0049fefe  898680020000         mov dword ptr [esi + 0x280], eax
// 0049ff04  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 0049ff0a  898e84020000         mov dword ptr [esi + 0x284], ecx
// 0049ff10  8a9788020000         mov dl, byte ptr [edi + 0x288]
// 0049ff16  889688020000         mov byte ptr [esi + 0x288], dl
// 0049ff1c  d9878c020000         fld dword ptr [edi + 0x28c]
// 0049ff22  d99e8c020000         fstp dword ptr [esi + 0x28c]
// 0049ff28  d98790020000         fld dword ptr [edi + 0x290]
// 0049ff2e  d99e90020000         fstp dword ptr [esi + 0x290]
// 0049ff34  d98794020000         fld dword ptr [edi + 0x294]
// 0049ff3a  d99e94020000         fstp dword ptr [esi + 0x294]
// 0049ff40  d98798020000         fld dword ptr [edi + 0x298]
// 0049ff46  d99e98020000         fstp dword ptr [esi + 0x298]
// 0049ff4c  8a879c020000         mov al, byte ptr [edi + 0x29c]
// 0049ff52  88869c020000         mov byte ptr [esi + 0x29c], al
// 0049ff58  8a8f9d020000         mov cl, byte ptr [edi + 0x29d]
// 0049ff5e  5f                   pop edi
// 0049ff5f  888e9d020000         mov byte ptr [esi + 0x29d], cl
// 0049ff65  8bc6                 mov eax, esi
// 0049ff67  5e                   pop esi
// 0049ff68  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Lights@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
