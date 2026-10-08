// from server: 100% by auto
// roc 2007-08 00475760  unit: CInstanceRecord::CNameItem  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475760
//
// 00475760  56                   push esi
// 00475761  57                   push edi
// 00475762  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00475766  6870494700           push 0x474970
// 0047576b  6a08                 push 8
// 0047576d  6a50                 push 0x50
// 0047576f  8bf1                 mov esi, ecx
// 00475771  57                   push edi
// 00475772  56                   push esi
// 00475773  e8b8f7ffff           call 0x474f30
// 00475778  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0047577e  898680020000         mov dword ptr [esi + 0x280], eax
// 00475784  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 0047578a  898e84020000         mov dword ptr [esi + 0x284], ecx
// 00475790  8a9788020000         mov dl, byte ptr [edi + 0x288]
// 00475796  889688020000         mov byte ptr [esi + 0x288], dl
// 0047579c  d9878c020000         fld dword ptr [edi + 0x28c]
// 004757a2  d99e8c020000         fstp dword ptr [esi + 0x28c]
// 004757a8  d98790020000         fld dword ptr [edi + 0x290]
// 004757ae  d99e90020000         fstp dword ptr [esi + 0x290]
// 004757b4  d98794020000         fld dword ptr [edi + 0x294]
// 004757ba  d99e94020000         fstp dword ptr [esi + 0x294]
// 004757c0  d98798020000         fld dword ptr [edi + 0x298]
// 004757c6  d99e98020000         fstp dword ptr [esi + 0x298]
// 004757cc  8a879c020000         mov al, byte ptr [edi + 0x29c]
// 004757d2  88869c020000         mov byte ptr [esi + 0x29c], al
// 004757d8  8a8f9d020000         mov cl, byte ptr [edi + 0x29d]
// 004757de  5f                   pop edi
// 004757df  888e9d020000         mov byte ptr [esi + 0x29d], cl
// 004757e5  8bc6                 mov eax, esi
// 004757e7  5e                   pop esi
// 004757e8  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Lights@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
