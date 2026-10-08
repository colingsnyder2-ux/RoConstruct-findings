// from server: 100% by auto
// roc 2008-06 0066b320  unit: RBX::GroupDragTool  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b320
//
// 0066b320  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066b324  53                   push ebx
// 0066b325  56                   push esi
// 0066b326  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066b32a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0066b32d  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 0066b330  57                   push edi
// 0066b331  7e54                 jle 0x66b387
// 0066b333  85c0                 test eax, eax
// 0066b335  7473                 je 0x66b3aa
// 0066b337  8b16                 mov edx, dword ptr [esi]
// 0066b339  8b520c               mov edx, dword ptr [edx + 0xc]
// 0066b33c  8d7c82fc             lea edi, [edx + eax*4 - 4]
// 0066b340  8b07                 mov eax, dword ptr [edi]
// 0066b342  8bd0                 mov edx, eax
// 0066b344  83e23f               and edx, 0x3f
// 0066b347  80fa03               cmp dl, 3
// 0066b34a  753b                 jne 0x66b387
// 0066b34c  8bd8                 mov ebx, eax
// 0066b34e  c1eb06               shr ebx, 6
// 0066b351  8bd0                 mov edx, eax
// 0066b353  81e3ff000000         and ebx, 0xff
// 0066b359  c1ea17               shr edx, 0x17
// 0066b35c  3bd9                 cmp ebx, ecx
// 0066b35e  7f27                 jg 0x66b387
// 0066b360  8d5a01               lea ebx, [edx + 1]
// 0066b363  3bcb                 cmp ecx, ebx
// 0066b365  7f20                 jg 0x66b387
// 0066b367  8b742418             mov esi, dword ptr [esp + 0x18]
// 0066b36b  8d5c31ff             lea ebx, [ecx + esi - 1]
// 0066b36f  3bda                 cmp ebx, edx
// 0066b371  7e37                 jle 0x66b3aa
// 0066b373  8d4c31ff             lea ecx, [ecx + esi - 1]
// 0066b377  c1e117               shl ecx, 0x17
// 0066b37a  25ffff7f00           and eax, 0x7fffff
// 0066b37f  0bc8                 or ecx, eax
// 0066b381  890f                 mov dword ptr [edi], ecx
// 0066b383  5f                   pop edi
// 0066b384  5e                   pop esi
// 0066b385  5b                   pop ebx
// 0066b386  c3                   ret 
// 0066b387  8b560c               mov edx, dword ptr [esi + 0xc]
// 0066b38a  8b4208               mov eax, dword ptr [edx + 8]
// 0066b38d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066b391  50                   push eax
// 0066b392  8d4411ff             lea eax, [ecx + edx - 1]
// 0066b396  c1e011               shl eax, 0x11
// 0066b399  0bc1                 or eax, ecx
// 0066b39b  c1e006               shl eax, 6
// 0066b39e  83c803               or eax, 3
// 0066b3a1  50                   push eax
// 0066b3a2  e8e9fdffff           call 0x66b190
// 0066b3a7  83c408               add esp, 8
// 0066b3aa  5f                   pop edi
// 0066b3ab  5e                   pop esi
// 0066b3ac  5b                   pop ebx
// 0066b3ad  c3                   ret 
// library lua-5.1.1/lcode.c (function _luaK_nil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lcode.c
