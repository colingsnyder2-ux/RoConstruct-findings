// from server: 100% by auto
// roc 2007-08 005bf180  unit: boost::detail::H::?$sp_counted_impl_p  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf180
//
// 005bf180  83ec64               sub esp, 0x64
// 005bf183  53                   push ebx
// 005bf184  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 005bf188  8d442404             lea eax, [esp + 4]
// 005bf18c  50                   push eax
// 005bf18d  6a00                 push 0
// 005bf18f  53                   push ebx
// 005bf190  e87b740000           call 0x5c6610
// 005bf195  83c40c               add esp, 0xc
// 005bf198  85c0                 test eax, eax
// 005bf19a  751d                 jne 0x5bf1b9
// 005bf19c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005bf1a0  8b542470             mov edx, dword ptr [esp + 0x70]
// 005bf1a4  51                   push ecx
// 005bf1a5  52                   push edx
// 005bf1a6  681c917b00           push 0x7b911c
// 005bf1ab  53                   push ebx
// 005bf1ac  e82ff7ffff           call 0x5be8e0
// 005bf1b1  83c410               add esp, 0x10
// 005bf1b4  5b                   pop ebx
// 005bf1b5  83c464               add esp, 0x64
// 005bf1b8  c3                   ret 
// 005bf1b9  56                   push esi
// 005bf1ba  57                   push edi
// 005bf1bb  8d44240c             lea eax, [esp + 0xc]
// 005bf1bf  50                   push eax
// 005bf1c0  6818917b00           push 0x7b9118
// 005bf1c5  53                   push ebx
// 005bf1c6  e8b57f0000           call 0x5c7180
// 005bf1cb  8b742420             mov esi, dword ptr [esp + 0x20]
// 005bf1cf  83c40c               add esp, 0xc
// 005bf1d2  bf10917b00           mov edi, 0x7b9110
// 005bf1d7  b907000000           mov ecx, 7
// 005bf1dc  33d2                 xor edx, edx
// 005bf1de  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bf1e0  5f                   pop edi
// 005bf1e1  5e                   pop esi
// 005bf1e2  7524                 jne 0x5bf208
// 005bf1e4  836c247001           sub dword ptr [esp + 0x70], 1
// 005bf1e9  751d                 jne 0x5bf208
// 005bf1eb  8b442474             mov eax, dword ptr [esp + 0x74]
// 005bf1ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bf1f3  50                   push eax
// 005bf1f4  51                   push ecx
// 005bf1f5  68f0907b00           push 0x7b90f0
// 005bf1fa  53                   push ebx
// 005bf1fb  e8e0f6ffff           call 0x5be8e0
// 005bf200  83c410               add esp, 0x10
// 005bf203  5b                   pop ebx
// 005bf204  83c464               add esp, 0x64
// 005bf207  c3                   ret 
// 005bf208  8b442408             mov eax, dword ptr [esp + 8]
// 005bf20c  85c0                 test eax, eax
// 005bf20e  7509                 jne 0x5bf219
// 005bf210  b8d8de7900           mov eax, 0x79ded8
// 005bf215  89442408             mov dword ptr [esp + 8], eax
// 005bf219  8b542474             mov edx, dword ptr [esp + 0x74]
// 005bf21d  52                   push edx
// 005bf21e  50                   push eax
// 005bf21f  8b442478             mov eax, dword ptr [esp + 0x78]
// 005bf223  50                   push eax
// 005bf224  68d0907b00           push 0x7b90d0
// 005bf229  53                   push ebx
// 005bf22a  e8b1f6ffff           call 0x5be8e0
// 005bf22f  83c414               add esp, 0x14
// 005bf232  5b                   pop ebx
// 005bf233  83c464               add esp, 0x64
// 005bf236  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_argerror)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
