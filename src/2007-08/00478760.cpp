// roc 2007-08 00478760  unit: CInstanceRecord::CNameItem  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00478760
//
// 00478760  6aff                 push -1
// 00478762  68a3517400           push 0x7451a3
// 00478767  64a100000000         mov eax, dword ptr fs:[0]
// 0047876d  50                   push eax
// 0047876e  81ec6c070000         sub esp, 0x76c
// 00478774  a188518b00           mov eax, dword ptr [0x8b5188]
// 00478779  33c4                 xor eax, esp
// 0047877b  89842468070000       mov dword ptr [esp + 0x768], eax
// 00478782  56                   push esi
// 00478783  57                   push edi
// 00478784  a188518b00           mov eax, dword ptr [0x8b5188]
// 00478789  33c4                 xor eax, esp
// 0047878b  50                   push eax
// 0047878c  8d842478070000       lea eax, [esp + 0x778]
// 00478793  64a300000000         mov dword ptr fs:[0], eax
// 00478799  8bbc2488070000       mov edi, dword ptr [esp + 0x788]
// 004787a0  8bf1                 mov esi, ecx
// 004787a2  8b4604               mov eax, dword ptr [esi + 4]
// 004787a5  3b4608               cmp eax, dword ptr [esi + 8]
// 004787a8  89742410             mov dword ptr [esp + 0x10], esi
// 004787ac  7d27                 jge 0x4787d5
// 004787ae  69c060070000         imul eax, eax, 0x760
// 004787b4  0306                 add eax, dword ptr [esi]
// 004787b6  8944240c             mov dword ptr [esp + 0xc], eax
// 004787ba  c784248007000000000000 mov dword ptr [esp + 0x780], 0
// 004787c5  7408                 je 0x4787cf
// 004787c7  57                   push edi
// 004787c8  8bc8                 mov ecx, eax
// 004787ca  e821f3ffff           call 0x477af0
// 004787cf  83460401             add dword ptr [esi + 4], 1
// 004787d3  eb70                 jmp 0x478845
// 004787d5  8b0e                 mov ecx, dword ptr [esi]
// 004787d7  3bf9                 cmp edi, ecx
// 004787d9  7245                 jb 0x478820
// 004787db  8bd0                 mov edx, eax
// 004787dd  69d260070000         imul edx, edx, 0x760
// 004787e3  03d1                 add edx, ecx
// 004787e5  3bfa                 cmp edi, edx
// 004787e7  7337                 jae 0x478820
// 004787e9  57                   push edi
// 004787ea  8d4c2418             lea ecx, [esp + 0x18]
// 004787ee  e8fdf2ffff           call 0x477af0
// 004787f3  8d442414             lea eax, [esp + 0x14]
// 004787f7  50                   push eax
// 004787f8  8bce                 mov ecx, esi
// 004787fa  c784248407000001000000 mov dword ptr [esp + 0x784], 1
// 00478805  e856ffffff           call 0x478760
// 0047880a  8d4c2414             lea ecx, [esp + 0x14]
// 0047880e  c7842480070000ffffffff mov dword ptr [esp + 0x780], 0xffffffff
// 00478819  e842e0ffff           call 0x476860
// 0047881e  eb25                 jmp 0x478845
// 00478820  6a00                 push 0
// 00478822  83c001               add eax, 1
// 00478825  50                   push eax
// 00478826  8bce                 mov ecx, esi
// 00478828  e893fdffff           call 0x4785c0
// 0047882d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00478830  8b16                 mov edx, dword ptr [esi]
// 00478832  69c960070000         imul ecx, ecx, 0x760
// 00478838  57                   push edi
// 00478839  8d8c11a0f8ffff       lea ecx, [ecx + edx - 0x760]
// 00478840  e84be8ffff           call 0x477090
// 00478845  8b8c2478070000       mov ecx, dword ptr [esp + 0x778]
// 0047884c  64890d00000000       mov dword ptr fs:[0], ecx
// 00478853  59                   pop ecx
// 00478854  5f                   pop edi
// 00478855  5e                   pop esi
// 00478856  8b8c2468070000       mov ecx, dword ptr [esp + 0x768]
// 0047885d  33cc                 xor ecx, esp
// 0047885f  e8ba811b00           call 0x630a1e
// 00478864  81c478070000         add esp, 0x778
// 0047886a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?append@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXABVRenderState@RenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
