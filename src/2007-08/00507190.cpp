// from server: 100% by auto
// roc 2007-08 00507190  unit: G3D::GCamera  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00507190
//
// 00507190  8b442404             mov eax, dword ptr [esp + 4]
// 00507194  53                   push ebx
// 00507195  55                   push ebp
// 00507196  56                   push esi
// 00507197  8bf1                 mov esi, ecx
// 00507199  8b5e04               mov ebx, dword ptr [esi + 4]
// 0050719c  894604               mov dword ptr [esi + 4], eax
// 0050719f  f6059c098c0001       test byte ptr [0x8c099c], 1
// 005071a6  7514                 jne 0x5071bc
// 005071a8  830d9c098c0001       or dword ptr [0x8c099c], 1
// 005071af  bd0a000000           mov ebp, 0xa
// 005071b4  892d98098c00         mov dword ptr [0x8c0998], ebp
// 005071ba  eb06                 jmp 0x5071c2
// 005071bc  8b2d98098c00         mov ebp, dword ptr [0x8c0998]
// 005071c2  8b4e08               mov ecx, dword ptr [esi + 8]
// 005071c5  57                   push edi
// 005071c6  8b7e04               mov edi, dword ptr [esi + 4]
// 005071c9  3bf9                 cmp edi, ecx
// 005071cb  7e70                 jle 0x50723d
// 005071cd  85c9                 test ecx, ecx
// 005071cf  7509                 jne 0x5071da
// 005071d1  894608               mov dword ptr [esi + 8], eax
// 005071d4  53                   push ebx
// 005071d5  e987000000           jmp 0x507261
// 005071da  3bfd                 cmp edi, ebp
// 005071dc  7d06                 jge 0x5071e4
// 005071de  896e08               mov dword ptr [esi + 8], ebp
// 005071e1  53                   push ebx
// 005071e2  eb7d                 jmp 0x507261
// 005071e4  d905387b7900         fld dword ptr [0x797b38]
// 005071ea  8bc1                 mov eax, ecx
// 005071ec  c1e004               shl eax, 4
// 005071ef  d95c2418             fstp dword ptr [esp + 0x18]
// 005071f3  3d801a0600           cmp eax, 0x61a80
// 005071f8  7608                 jbe 0x507202
// 005071fa  d905347b7900         fld dword ptr [0x797b34]
// 00507200  eb0d                 jmp 0x50720f
// 00507202  3d00fa0000           cmp eax, 0xfa00
// 00507207  760a                 jbe 0x507213
// 00507209  d90588797900         fld dword ptr [0x797988]
// 0050720f  d95c2418             fstp dword ptr [esp + 0x18]
// 00507213  8be9                 mov ebp, ecx
// 00507215  896c2414             mov dword ptr [esp + 0x14], ebp
// 00507219  db442414             fild dword ptr [esp + 0x14]
// 0050721d  d84c2418             fmul dword ptr [esp + 0x18]
// 00507221  e83a9b1200           call 0x630d60
// 00507226  2bc5                 sub eax, ebp
// 00507228  03c7                 add eax, edi
// 0050722a  894608               mov dword ptr [esi + 8], eax
// 0050722d  8b0d98098c00         mov ecx, dword ptr [0x8c0998]
// 00507233  3bc1                 cmp eax, ecx
// 00507235  7d03                 jge 0x50723a
// 00507237  894e08               mov dword ptr [esi + 8], ecx
// 0050723a  53                   push ebx
// 0050723b  eb24                 jmp 0x507261
// 0050723d  b856555555           mov eax, 0x55555556
// 00507242  f7e9                 imul ecx
// 00507244  8bc2                 mov eax, edx
// 00507246  c1e81f               shr eax, 0x1f
// 00507249  03c2                 add eax, edx
// 0050724b  3bf8                 cmp edi, eax
// 0050724d  7f19                 jg 0x507268
// 0050724f  807c241800           cmp byte ptr [esp + 0x18], 0
// 00507254  7412                 je 0x507268
// 00507256  3bfd                 cmp edi, ebp
// 00507258  7e0e                 jle 0x507268
// 0050725a  3bfb                 cmp edi, ebx
// 0050725c  7c02                 jl 0x507260
// 0050725e  8bfb                 mov edi, ebx
// 00507260  57                   push edi
// 00507261  8bce                 mov ecx, esi
// 00507263  e868f9ffff           call 0x506bd0
// 00507268  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0050726b  8bcb                 mov ecx, ebx
// 0050726d  5f                   pop edi
// 0050726e  7d25                 jge 0x507295
// 00507270  d9ee                 fldz 
// 00507272  c1e304               shl ebx, 4
// 00507275  8bd3                 mov edx, ebx
// 00507277  8b06                 mov eax, dword ptr [esi]
// 00507279  03c2                 add eax, edx
// 0050727b  740b                 je 0x507288
// 0050727d  d9500c               fst dword ptr [eax + 0xc]
// 00507280  d95008               fst dword ptr [eax + 8]
// 00507283  d95004               fst dword ptr [eax + 4]
// 00507286  d910                 fst dword ptr [eax]
// 00507288  83c101               add ecx, 1
// 0050728b  83c210               add edx, 0x10
// 0050728e  3b4e04               cmp ecx, dword ptr [esi + 4]
// 00507291  7ce4                 jl 0x507277
// 00507293  ddd8                 fstp st(0)
// 00507295  5e                   pop esi
// 00507296  5d                   pop ebp
// 00507297  5b                   pop ebx
// 00507298  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?resize@?$Array@VVector4@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
