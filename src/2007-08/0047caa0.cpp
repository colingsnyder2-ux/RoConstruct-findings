// roc 2007-08 0047caa0  unit: G3D::Win32Window  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047caa0
//
// 0047caa0  8b442404             mov eax, dword ptr [esp + 4]
// 0047caa4  53                   push ebx
// 0047caa5  55                   push ebp
// 0047caa6  56                   push esi
// 0047caa7  8bf1                 mov esi, ecx
// 0047caa9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047caac  b901000000           mov ecx, 1
// 0047cab1  894604               mov dword ptr [esi + 4], eax
// 0047cab4  840d90d88b00         test byte ptr [0x8bd890], cl
// 0047caba  57                   push edi
// 0047cabb  7513                 jne 0x47cad0
// 0047cabd  090d90d88b00         or dword ptr [0x8bd890], ecx
// 0047cac3  bb0a000000           mov ebx, 0xa
// 0047cac8  891d8cd88b00         mov dword ptr [0x8bd88c], ebx
// 0047cace  eb06                 jmp 0x47cad6
// 0047cad0  8b1d8cd88b00         mov ebx, dword ptr [0x8bd88c]
// 0047cad6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047cad9  8b7e04               mov edi, dword ptr [esi + 4]
// 0047cadc  3bf9                 cmp edi, ecx
// 0047cade  0f8e92000000         jle 0x47cb76
// 0047cae4  85c9                 test ecx, ecx
// 0047cae6  7512                 jne 0x47cafa
// 0047cae8  55                   push ebp
// 0047cae9  8bce                 mov ecx, esi
// 0047caeb  894608               mov dword ptr [esi + 8], eax
// 0047caee  e80dcc1100           call 0x599700
// 0047caf3  5f                   pop edi
// 0047caf4  5e                   pop esi
// 0047caf5  5d                   pop ebp
// 0047caf6  5b                   pop ebx
// 0047caf7  c20800               ret 8
// 0047cafa  3bfb                 cmp edi, ebx
// 0047cafc  7d12                 jge 0x47cb10
// 0047cafe  55                   push ebp
// 0047caff  8bce                 mov ecx, esi
// 0047cb01  895e08               mov dword ptr [esi + 8], ebx
// 0047cb04  e8f7cb1100           call 0x599700
// 0047cb09  5f                   pop edi
// 0047cb0a  5e                   pop esi
// 0047cb0b  5d                   pop ebp
// 0047cb0c  5b                   pop ebx
// 0047cb0d  c20800               ret 8
// 0047cb10  d905387b7900         fld dword ptr [0x797b38]
// 0047cb16  8bc1                 mov eax, ecx
// 0047cb18  03c0                 add eax, eax
// 0047cb1a  d95c2418             fstp dword ptr [esp + 0x18]
// 0047cb1e  03c0                 add eax, eax
// 0047cb20  3d801a0600           cmp eax, 0x61a80
// 0047cb25  7608                 jbe 0x47cb2f
// 0047cb27  d905347b7900         fld dword ptr [0x797b34]
// 0047cb2d  eb0d                 jmp 0x47cb3c
// 0047cb2f  3d00fa0000           cmp eax, 0xfa00
// 0047cb34  760a                 jbe 0x47cb40
// 0047cb36  d90588797900         fld dword ptr [0x797988]
// 0047cb3c  d95c2418             fstp dword ptr [esp + 0x18]
// 0047cb40  8bd9                 mov ebx, ecx
// 0047cb42  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047cb46  db442414             fild dword ptr [esp + 0x14]
// 0047cb4a  d84c2418             fmul dword ptr [esp + 0x18]
// 0047cb4e  e80d421b00           call 0x630d60
// 0047cb53  2bc3                 sub eax, ebx
// 0047cb55  03c7                 add eax, edi
// 0047cb57  894608               mov dword ptr [esi + 8], eax
// 0047cb5a  8b0d8cd88b00         mov ecx, dword ptr [0x8bd88c]
// 0047cb60  3bc1                 cmp eax, ecx
// 0047cb62  7d03                 jge 0x47cb67
// 0047cb64  894e08               mov dword ptr [esi + 8], ecx
// 0047cb67  55                   push ebp
// 0047cb68  8bce                 mov ecx, esi
// 0047cb6a  e891cb1100           call 0x599700
// 0047cb6f  5f                   pop edi
// 0047cb70  5e                   pop esi
// 0047cb71  5d                   pop ebp
// 0047cb72  5b                   pop ebx
// 0047cb73  c20800               ret 8
// 0047cb76  b856555555           mov eax, 0x55555556
// 0047cb7b  f7e9                 imul ecx
// 0047cb7d  8bc2                 mov eax, edx
// 0047cb7f  c1e81f               shr eax, 0x1f
// 0047cb82  03c2                 add eax, edx
// 0047cb84  3bf8                 cmp edi, eax
// 0047cb86  7f19                 jg 0x47cba1
// 0047cb88  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047cb8d  7412                 je 0x47cba1
// 0047cb8f  3bfb                 cmp edi, ebx
// 0047cb91  7e0e                 jle 0x47cba1
// 0047cb93  3bfd                 cmp edi, ebp
// 0047cb95  7c02                 jl 0x47cb99
// 0047cb97  8bfd                 mov edi, ebp
// 0047cb99  57                   push edi
// 0047cb9a  8bce                 mov ecx, esi
// 0047cb9c  e85fcb1100           call 0x599700
// 0047cba1  5f                   pop edi
// 0047cba2  5e                   pop esi
// 0047cba3  5d                   pop ebp
// 0047cba4  5b                   pop ebx
// 0047cba5  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
