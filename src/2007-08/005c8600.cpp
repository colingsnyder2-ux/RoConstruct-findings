// from server: 100% by auto
// roc 2007-08 005c8600  unit: lua_exception  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8600
//
// 005c8600  53                   push ebx
// 005c8601  56                   push esi
// 005c8602  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c8606  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 005c8609  57                   push edi
// 005c860a  8bfe                 mov edi, esi
// 005c860c  e86fffffff           call 0x5c8580
// 005c8611  6a02                 push 2
// 005c8613  6a00                 push 0
// 005c8615  56                   push esi
// 005c8616  e8659d0400           call 0x612380
// 005c861b  6a02                 push 2
// 005c861d  894648               mov dword ptr [esi + 0x48], eax
// 005c8620  c7465005000000       mov dword ptr [esi + 0x50], 5
// 005c8627  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005c862a  6a00                 push 0
// 005c862c  56                   push esi
// 005c862d  83c760               add edi, 0x60
// 005c8630  e84b9d0400           call 0x612380
// 005c8635  6a20                 push 0x20
// 005c8637  56                   push esi
// 005c8638  8907                 mov dword ptr [edi], eax
// 005c863a  c7470805000000       mov dword ptr [edi + 8], 5
// 005c8641  e8caa50400           call 0x612c10
// 005c8646  56                   push esi
// 005c8647  e894790400           call 0x60ffe0
// 005c864c  56                   push esi
// 005c864d  e81eee0400           call 0x617470
// 005c8652  6a11                 push 0x11
// 005c8654  6864967b00           push 0x7b9664
// 005c8659  56                   push esi
// 005c865a  e811a70400           call 0x612d70
// 005c865f  80480520             or byte ptr [eax + 5], 0x20
// 005c8663  83c005               add eax, 5
// 005c8666  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005c8669  83c434               add esp, 0x34
// 005c866c  03c0                 add eax, eax
// 005c866e  5f                   pop edi
// 005c866f  03c0                 add eax, eax
// 005c8671  5e                   pop esi
// 005c8672  894340               mov dword ptr [ebx + 0x40], eax
// 005c8675  5b                   pop ebx
// 005c8676  c3                   ret 
// library lua-5.1.4/lstate.c (function _f_luaopen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
