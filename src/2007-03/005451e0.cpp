// roc 2007-03 005451e0  unit: seg_00540000  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005451e0
//
// 005451e0  83ec08               sub esp, 8
// 005451e3  53                   push ebx
// 005451e4  55                   push ebp
// 005451e5  8be9                 mov ebp, ecx
// 005451e7  8b5d00               mov ebx, dword ptr [ebp]
// 005451ea  85db                 test ebx, ebx
// 005451ec  8b4504               mov eax, dword ptr [ebp + 4]
// 005451ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005451f3  56                   push esi
// 005451f4  57                   push edi
// 005451f5  89442414             mov dword ptr [esp + 0x14], eax
// 005451f9  7507                 jne 0x545202
// 005451fb  3d00000080           cmp eax, 0x80000000
// 00545200  744f                 je 0x545251
// 00545202  83fbff               cmp ebx, -1
// 00545205  7507                 jne 0x54520e
// 00545207  3dffffff7f           cmp eax, 0x7fffffff
// 0054520c  7443                 je 0x545251
// 0054520e  83fbfe               cmp ebx, -2
// 00545211  750b                 jne 0x54521e
// 00545213  3dffffff7f           cmp eax, 0x7fffffff
// 00545218  0f8421010000         je 0x54533f
// 0054521e  8b31                 mov esi, dword ptr [ecx]
// 00545220  85f6                 test esi, esi
// 00545222  8b7904               mov edi, dword ptr [ecx + 4]
// 00545225  7508                 jne 0x54522f
// 00545227  81ff00000080         cmp edi, 0x80000000
// 0054522d  7422                 je 0x545251
// 0054522f  83feff               cmp esi, -1
// 00545232  7508                 jne 0x54523c
// 00545234  81ffffffff7f         cmp edi, 0x7fffffff
// 0054523a  7415                 je 0x545251
// 0054523c  83fefe               cmp esi, -2
// 0054523f  0f85e3000000         jne 0x545328
// 00545245  81ffffffff7f         cmp edi, 0x7fffffff
// 0054524b  0f85d7000000         jne 0x545328
// 00545251  83fbfe               cmp ebx, -2
// 00545254  750b                 jne 0x545261
// 00545256  3dffffff7f           cmp eax, 0x7fffffff
// 0054525b  0f84de000000         je 0x54533f
// 00545261  8b31                 mov esi, dword ptr [ecx]
// 00545263  83fefe               cmp esi, -2
// 00545266  8b7904               mov edi, dword ptr [ecx + 4]
// 00545269  750c                 jne 0x545277
// 0054526b  81ffffffff7f         cmp edi, 0x7fffffff
// 00545271  0f84c8000000         je 0x54533f
// 00545277  83fbff               cmp ebx, -1
// 0054527a  7517                 jne 0x545293
// 0054527c  3dffffff7f           cmp eax, 0x7fffffff
// 00545281  7510                 jne 0x545293
// 00545283  85f6                 test esi, esi
// 00545285  750c                 jne 0x545293
// 00545287  81ff00000080         cmp edi, 0x80000000
// 0054528d  0f84ac000000         je 0x54533f
// 00545293  85db                 test ebx, ebx
// 00545295  7518                 jne 0x5452af
// 00545297  3d00000080           cmp eax, 0x80000000
// 0054529c  7511                 jne 0x5452af
// 0054529e  83feff               cmp esi, -1
// 005452a1  750c                 jne 0x5452af
// 005452a3  81ffffffff7f         cmp edi, 0x7fffffff
// 005452a9  0f8490000000         je 0x54533f
// 005452af  8bcd                 mov ecx, ebp
// 005452b1  e8eaf8ffff           call 0x544ba0
// 005452b6  84c0                 test al, al
// 005452b8  7418                 je 0x5452d2
// 005452ba  8b5504               mov edx, dword ptr [ebp + 4]
// 005452bd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005452c1  5f                   pop edi
// 005452c2  5e                   pop esi
// 005452c3  8bcb                 mov ecx, ebx
// 005452c5  5d                   pop ebp
// 005452c6  8908                 mov dword ptr [eax], ecx
// 005452c8  895004               mov dword ptr [eax + 4], edx
// 005452cb  5b                   pop ebx
// 005452cc  83c408               add esp, 8
// 005452cf  c20800               ret 8
// 005452d2  57                   push edi
// 005452d3  56                   push esi
// 005452d4  e8a7f8ffff           call 0x544b80
// 005452d9  83c408               add esp, 8
// 005452dc  84c0                 test al, al
// 005452de  741b                 je 0x5452fb
// 005452e0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005452e4  5f                   pop edi
// 005452e5  5e                   pop esi
// 005452e6  5d                   pop ebp
// 005452e7  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 005452ed  c74004ffffff7f       mov dword ptr [eax + 4], 0x7fffffff
// 005452f4  5b                   pop ebx
// 005452f5  83c408               add esp, 8
// 005452f8  c20800               ret 8
// 005452fb  57                   push edi
// 005452fc  56                   push esi
// 005452fd  e85ef8ffff           call 0x544b60
// 00545302  83c408               add esp, 8
// 00545305  84c0                 test al, al
// 00545307  741b                 je 0x545324
// 00545309  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054530d  5f                   pop edi
// 0054530e  5e                   pop esi
// 0054530f  5d                   pop ebp
// 00545310  c70000000000         mov dword ptr [eax], 0
// 00545316  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 0054531d  5b                   pop ebx
// 0054531e  83c408               add esp, 8
// 00545321  c20800               ret 8
// 00545324  8b442414             mov eax, dword ptr [esp + 0x14]
// 00545328  03f3                 add esi, ebx
// 0054532a  13f8                 adc edi, eax
// 0054532c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00545330  897804               mov dword ptr [eax + 4], edi
// 00545333  5f                   pop edi
// 00545334  8930                 mov dword ptr [eax], esi
// 00545336  5e                   pop esi
// 00545337  5d                   pop ebp
// 00545338  5b                   pop ebx
// 00545339  83c408               add esp, 8
// 0054533c  c20800               ret 8
// 0054533f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00545343  5f                   pop edi
// 00545344  5e                   pop esi
// 00545345  5d                   pop ebp
// 00545346  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 0054534c  c74004ffffff7f       mov dword ptr [eax + 4], 0x7fffffff
// 00545353  5b                   pop ebx
// 00545354  83c408               add esp, 8
// 00545357  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ??$?H_J@?$int_adapter@_J@date_time@boost@@QBE?AV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
