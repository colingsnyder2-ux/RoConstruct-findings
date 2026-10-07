// roc 2008-06 00478900  unit: CInstanceRecord::CNameItem  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478900
//
// 00478900  56                   push esi
// 00478901  57                   push edi
// 00478902  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00478906  68507c4700           push 0x477c50
// 0047890b  6a08                 push 8
// 0047890d  6a50                 push 0x50
// 0047890f  8bf1                 mov esi, ecx
// 00478911  57                   push edi
// 00478912  56                   push esi
// 00478913  e8d8f8ffff           call 0x4781f0
// 00478918  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0047891e  898680020000         mov dword ptr [esi + 0x280], eax
// 00478924  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 0047892a  898e84020000         mov dword ptr [esi + 0x284], ecx
// 00478930  8a9788020000         mov dl, byte ptr [edi + 0x288]
// 00478936  889688020000         mov byte ptr [esi + 0x288], dl
// 0047893c  d9878c020000         fld dword ptr [edi + 0x28c]
// 00478942  d99e8c020000         fstp dword ptr [esi + 0x28c]
// 00478948  d98790020000         fld dword ptr [edi + 0x290]
// 0047894e  d99e90020000         fstp dword ptr [esi + 0x290]
// 00478954  d98794020000         fld dword ptr [edi + 0x294]
// 0047895a  d99e94020000         fstp dword ptr [esi + 0x294]
// 00478960  d98798020000         fld dword ptr [edi + 0x298]
// 00478966  d99e98020000         fstp dword ptr [esi + 0x298]
// 0047896c  8a879c020000         mov al, byte ptr [edi + 0x29c]
// 00478972  88869c020000         mov byte ptr [esi + 0x29c], al
// 00478978  8a8f9d020000         mov cl, byte ptr [edi + 0x29d]
// 0047897e  5f                   pop edi
// 0047897f  888e9d020000         mov byte ptr [esi + 0x29d], cl
// 00478985  8bc6                 mov eax, esi
// 00478987  5e                   pop esi
// 00478988  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Lights@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
