// from server: 100% by auto
// roc 2010-06 004930c0  unit: seg_00490000  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004930c0
//
// 004930c0  56                   push esi
// 004930c1  57                   push edi
// 004930c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004930c6  68d0214900           push 0x4921d0
// 004930cb  6a08                 push 8
// 004930cd  6a50                 push 0x50
// 004930cf  8bf1                 mov esi, ecx
// 004930d1  57                   push edi
// 004930d2  56                   push esi
// 004930d3  e888f6ffff           call 0x492760
// 004930d8  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 004930de  898680020000         mov dword ptr [esi + 0x280], eax
// 004930e4  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 004930ea  898e84020000         mov dword ptr [esi + 0x284], ecx
// 004930f0  8a9788020000         mov dl, byte ptr [edi + 0x288]
// 004930f6  889688020000         mov byte ptr [esi + 0x288], dl
// 004930fc  d9878c020000         fld dword ptr [edi + 0x28c]
// 00493102  d99e8c020000         fstp dword ptr [esi + 0x28c]
// 00493108  d98790020000         fld dword ptr [edi + 0x290]
// 0049310e  d99e90020000         fstp dword ptr [esi + 0x290]
// 00493114  d98794020000         fld dword ptr [edi + 0x294]
// 0049311a  d99e94020000         fstp dword ptr [esi + 0x294]
// 00493120  d98798020000         fld dword ptr [edi + 0x298]
// 00493126  d99e98020000         fstp dword ptr [esi + 0x298]
// 0049312c  8a879c020000         mov al, byte ptr [edi + 0x29c]
// 00493132  88869c020000         mov byte ptr [esi + 0x29c], al
// 00493138  8a8f9d020000         mov cl, byte ptr [edi + 0x29d]
// 0049313e  5f                   pop edi
// 0049313f  888e9d020000         mov byte ptr [esi + 0x29d], cl
// 00493145  8bc6                 mov eax, esi
// 00493147  5e                   pop esi
// 00493148  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Lights@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
