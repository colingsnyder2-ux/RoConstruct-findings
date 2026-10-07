// roc 2007-08 0047ceb0  unit: G3D::Win32Window  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047ceb0
//
// 0047ceb0  8b442404             mov eax, dword ptr [esp + 4]
// 0047ceb4  53                   push ebx
// 0047ceb5  55                   push ebp
// 0047ceb6  56                   push esi
// 0047ceb7  8bf1                 mov esi, ecx
// 0047ceb9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047cebc  b901000000           mov ecx, 1
// 0047cec1  894604               mov dword ptr [esi + 4], eax
// 0047cec4  840d9cd88b00         test byte ptr [0x8bd89c], cl
// 0047ceca  57                   push edi
// 0047cecb  7513                 jne 0x47cee0
// 0047cecd  090d9cd88b00         or dword ptr [0x8bd89c], ecx
// 0047ced3  bb0a000000           mov ebx, 0xa
// 0047ced8  891d98d88b00         mov dword ptr [0x8bd898], ebx
// 0047cede  eb06                 jmp 0x47cee6
// 0047cee0  8b1d98d88b00         mov ebx, dword ptr [0x8bd898]
// 0047cee6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047cee9  8b7e04               mov edi, dword ptr [esi + 4]
// 0047ceec  3bf9                 cmp edi, ecx
// 0047ceee  0f8e95000000         jle 0x47cf89
// 0047cef4  85c9                 test ecx, ecx
// 0047cef6  7512                 jne 0x47cf0a
// 0047cef8  55                   push ebp
// 0047cef9  8bce                 mov ecx, esi
// 0047cefb  894608               mov dword ptr [esi + 8], eax
// 0047cefe  e88df2ffff           call 0x47c190
// 0047cf03  5f                   pop edi
// 0047cf04  5e                   pop esi
// 0047cf05  5d                   pop ebp
// 0047cf06  5b                   pop ebx
// 0047cf07  c20800               ret 8
// 0047cf0a  3bfb                 cmp edi, ebx
// 0047cf0c  7d12                 jge 0x47cf20
// 0047cf0e  55                   push ebp
// 0047cf0f  8bce                 mov ecx, esi
// 0047cf11  895e08               mov dword ptr [esi + 8], ebx
// 0047cf14  e877f2ffff           call 0x47c190
// 0047cf19  5f                   pop edi
// 0047cf1a  5e                   pop esi
// 0047cf1b  5d                   pop ebp
// 0047cf1c  5b                   pop ebx
// 0047cf1d  c20800               ret 8
// 0047cf20  d905387b7900         fld dword ptr [0x797b38]
// 0047cf26  8bc1                 mov eax, ecx
// 0047cf28  8d0480               lea eax, [eax + eax*4]
// 0047cf2b  d95c2418             fstp dword ptr [esp + 0x18]
// 0047cf2f  03c0                 add eax, eax
// 0047cf31  03c0                 add eax, eax
// 0047cf33  3d801a0600           cmp eax, 0x61a80
// 0047cf38  7608                 jbe 0x47cf42
// 0047cf3a  d905347b7900         fld dword ptr [0x797b34]
// 0047cf40  eb0d                 jmp 0x47cf4f
// 0047cf42  3d00fa0000           cmp eax, 0xfa00
// 0047cf47  760a                 jbe 0x47cf53
// 0047cf49  d90588797900         fld dword ptr [0x797988]
// 0047cf4f  d95c2418             fstp dword ptr [esp + 0x18]
// 0047cf53  8bd9                 mov ebx, ecx
// 0047cf55  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047cf59  db442414             fild dword ptr [esp + 0x14]
// 0047cf5d  d84c2418             fmul dword ptr [esp + 0x18]
// 0047cf61  e8fa3d1b00           call 0x630d60
// 0047cf66  2bc3                 sub eax, ebx
// 0047cf68  03c7                 add eax, edi
// 0047cf6a  894608               mov dword ptr [esi + 8], eax
// 0047cf6d  8b0d98d88b00         mov ecx, dword ptr [0x8bd898]
// 0047cf73  3bc1                 cmp eax, ecx
// 0047cf75  7d03                 jge 0x47cf7a
// 0047cf77  894e08               mov dword ptr [esi + 8], ecx
// 0047cf7a  55                   push ebp
// 0047cf7b  8bce                 mov ecx, esi
// 0047cf7d  e80ef2ffff           call 0x47c190
// 0047cf82  5f                   pop edi
// 0047cf83  5e                   pop esi
// 0047cf84  5d                   pop ebp
// 0047cf85  5b                   pop ebx
// 0047cf86  c20800               ret 8
// 0047cf89  b856555555           mov eax, 0x55555556
// 0047cf8e  f7e9                 imul ecx
// 0047cf90  8bc2                 mov eax, edx
// 0047cf92  c1e81f               shr eax, 0x1f
// 0047cf95  03c2                 add eax, edx
// 0047cf97  3bf8                 cmp edi, eax
// 0047cf99  7f19                 jg 0x47cfb4
// 0047cf9b  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047cfa0  7412                 je 0x47cfb4
// 0047cfa2  3bfb                 cmp edi, ebx
// 0047cfa4  7e0e                 jle 0x47cfb4
// 0047cfa6  3bfd                 cmp edi, ebp
// 0047cfa8  7c02                 jl 0x47cfac
// 0047cfaa  8bfd                 mov edi, ebp
// 0047cfac  57                   push edi
// 0047cfad  8bce                 mov ecx, esi
// 0047cfaf  e8dcf1ffff           call 0x47c190
// 0047cfb4  5f                   pop edi
// 0047cfb5  5e                   pop esi
// 0047cfb6  5d                   pop ebp
// 0047cfb7  5b                   pop ebx
// 0047cfb8  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?resize@?$Array@TSDL_Event@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
