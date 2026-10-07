// roc 2007-08 00628e80  unit: RBX::AssemblyStage  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628e80
//
// 00628e80  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00628e84  53                   push ebx
// 00628e85  56                   push esi
// 00628e86  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00628e8a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00628e8d  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 00628e90  57                   push edi
// 00628e91  7e54                 jle 0x628ee7
// 00628e93  85c0                 test eax, eax
// 00628e95  7473                 je 0x628f0a
// 00628e97  8b16                 mov edx, dword ptr [esi]
// 00628e99  8b520c               mov edx, dword ptr [edx + 0xc]
// 00628e9c  8d7c82fc             lea edi, [edx + eax*4 - 4]
// 00628ea0  8b07                 mov eax, dword ptr [edi]
// 00628ea2  8bd0                 mov edx, eax
// 00628ea4  83e23f               and edx, 0x3f
// 00628ea7  80fa03               cmp dl, 3
// 00628eaa  753b                 jne 0x628ee7
// 00628eac  8bd8                 mov ebx, eax
// 00628eae  c1eb06               shr ebx, 6
// 00628eb1  8bd0                 mov edx, eax
// 00628eb3  81e3ff000000         and ebx, 0xff
// 00628eb9  c1ea17               shr edx, 0x17
// 00628ebc  3bd9                 cmp ebx, ecx
// 00628ebe  7f27                 jg 0x628ee7
// 00628ec0  8d5a01               lea ebx, [edx + 1]
// 00628ec3  3bcb                 cmp ecx, ebx
// 00628ec5  7f20                 jg 0x628ee7
// 00628ec7  8b742418             mov esi, dword ptr [esp + 0x18]
// 00628ecb  8d5c31ff             lea ebx, [ecx + esi - 1]
// 00628ecf  3bda                 cmp ebx, edx
// 00628ed1  7e37                 jle 0x628f0a
// 00628ed3  8d4c31ff             lea ecx, [ecx + esi - 1]
// 00628ed7  c1e117               shl ecx, 0x17
// 00628eda  25ffff7f00           and eax, 0x7fffff
// 00628edf  0bc8                 or ecx, eax
// 00628ee1  890f                 mov dword ptr [edi], ecx
// 00628ee3  5f                   pop edi
// 00628ee4  5e                   pop esi
// 00628ee5  5b                   pop ebx
// 00628ee6  c3                   ret 
// 00628ee7  8b560c               mov edx, dword ptr [esi + 0xc]
// 00628eea  8b4208               mov eax, dword ptr [edx + 8]
// 00628eed  8b542418             mov edx, dword ptr [esp + 0x18]
// 00628ef1  50                   push eax
// 00628ef2  8d4411ff             lea eax, [ecx + edx - 1]
// 00628ef6  c1e011               shl eax, 0x11
// 00628ef9  0bc1                 or eax, ecx
// 00628efb  c1e006               shl eax, 6
// 00628efe  83c803               or eax, 3
// 00628f01  50                   push eax
// 00628f02  e8d9fdffff           call 0x628ce0
// 00628f07  83c408               add esp, 8
// 00628f0a  5f                   pop edi
// 00628f0b  5e                   pop esi
// 00628f0c  5b                   pop ebx
// 00628f0d  c3                   ret 
// library lua-5.1.1/lcode.c (function _luaK_nil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lcode.c
