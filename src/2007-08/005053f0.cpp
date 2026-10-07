// roc 2007-08 005053f0  unit: G3D::Log  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005053f0
//
// 005053f0  8b442404             mov eax, dword ptr [esp + 4]
// 005053f4  53                   push ebx
// 005053f5  55                   push ebp
// 005053f6  56                   push esi
// 005053f7  8bf1                 mov esi, ecx
// 005053f9  8b5e04               mov ebx, dword ptr [esi + 4]
// 005053fc  894604               mov dword ptr [esi + 4], eax
// 005053ff  f60594098c0001       test byte ptr [0x8c0994], 1
// 00505406  57                   push edi
// 00505407  7514                 jne 0x50541d
// 00505409  830d94098c0001       or dword ptr [0x8c0994], 1
// 00505410  bd0a000000           mov ebp, 0xa
// 00505415  892d90098c00         mov dword ptr [0x8c0990], ebp
// 0050541b  eb06                 jmp 0x505423
// 0050541d  8b2d90098c00         mov ebp, dword ptr [0x8c0990]
// 00505423  8b7e04               mov edi, dword ptr [esi + 4]
// 00505426  8b4e08               mov ecx, dword ptr [esi + 8]
// 00505429  3bf9                 cmp edi, ecx
// 0050542b  7e71                 jle 0x50549e
// 0050542d  85c9                 test ecx, ecx
// 0050542f  7509                 jne 0x50543a
// 00505431  894608               mov dword ptr [esi + 8], eax
// 00505434  53                   push ebx
// 00505435  e988000000           jmp 0x5054c2
// 0050543a  3bfd                 cmp edi, ebp
// 0050543c  7d06                 jge 0x505444
// 0050543e  896e08               mov dword ptr [esi + 8], ebp
// 00505441  53                   push ebx
// 00505442  eb7e                 jmp 0x5054c2
// 00505444  d905387b7900         fld dword ptr [0x797b38]
// 0050544a  8bc1                 mov eax, ecx
// 0050544c  03c0                 add eax, eax
// 0050544e  d95c2418             fstp dword ptr [esp + 0x18]
// 00505452  03c0                 add eax, eax
// 00505454  3d801a0600           cmp eax, 0x61a80
// 00505459  7608                 jbe 0x505463
// 0050545b  d905347b7900         fld dword ptr [0x797b34]
// 00505461  eb0d                 jmp 0x505470
// 00505463  3d00fa0000           cmp eax, 0xfa00
// 00505468  760a                 jbe 0x505474
// 0050546a  d90588797900         fld dword ptr [0x797988]
// 00505470  d95c2418             fstp dword ptr [esp + 0x18]
// 00505474  8be9                 mov ebp, ecx
// 00505476  896c2414             mov dword ptr [esp + 0x14], ebp
// 0050547a  db442414             fild dword ptr [esp + 0x14]
// 0050547e  d84c2418             fmul dword ptr [esp + 0x18]
// 00505482  e8d9b81200           call 0x630d60
// 00505487  2bc5                 sub eax, ebp
// 00505489  03c7                 add eax, edi
// 0050548b  894608               mov dword ptr [esi + 8], eax
// 0050548e  8b0d90098c00         mov ecx, dword ptr [0x8c0990]
// 00505494  3bc1                 cmp eax, ecx
// 00505496  7d03                 jge 0x50549b
// 00505498  894e08               mov dword ptr [esi + 8], ecx
// 0050549b  53                   push ebx
// 0050549c  eb24                 jmp 0x5054c2
// 0050549e  b856555555           mov eax, 0x55555556
// 005054a3  f7e9                 imul ecx
// 005054a5  8bc2                 mov eax, edx
// 005054a7  c1e81f               shr eax, 0x1f
// 005054aa  03c2                 add eax, edx
// 005054ac  3bf8                 cmp edi, eax
// 005054ae  7f19                 jg 0x5054c9
// 005054b0  807c241800           cmp byte ptr [esp + 0x18], 0
// 005054b5  7412                 je 0x5054c9
// 005054b7  3bfd                 cmp edi, ebp
// 005054b9  7e0e                 jle 0x5054c9
// 005054bb  3bfb                 cmp edi, ebx
// 005054bd  7c02                 jl 0x5054c1
// 005054bf  8bfb                 mov edi, ebx
// 005054c1  57                   push edi
// 005054c2  8bce                 mov ecx, esi
// 005054c4  e837420900           call 0x599700
// 005054c9  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005054cc  8bcb                 mov ecx, ebx
// 005054ce  7d20                 jge 0x5054f0
// 005054d0  8b16                 mov edx, dword ptr [esi]
// 005054d2  8d048a               lea eax, [edx + ecx*4]
// 005054d5  85c0                 test eax, eax
// 005054d7  740f                 je 0x5054e8
// 005054d9  c60000               mov byte ptr [eax], 0
// 005054dc  c6400100             mov byte ptr [eax + 1], 0
// 005054e0  c6400200             mov byte ptr [eax + 2], 0
// 005054e4  c6400300             mov byte ptr [eax + 3], 0
// 005054e8  83c101               add ecx, 1
// 005054eb  3b4e04               cmp ecx, dword ptr [esi + 4]
// 005054ee  7ce0                 jl 0x5054d0
// 005054f0  5f                   pop edi
// 005054f1  5e                   pop esi
// 005054f2  5d                   pop ebp
// 005054f3  5b                   pop ebx
// 005054f4  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage_bmp.cpp (function ?resize@?$Array@VColor4uint8@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_bmp.cpp
