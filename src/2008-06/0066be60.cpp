// from server: 100% by auto
// roc 2008-06 0066be60  unit: RBX::GroupDragTool  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066be60
//
// 0066be60  8b442404             mov eax, dword ptr [esp + 4]
// 0066be64  55                   push ebp
// 0066be65  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0066be69  56                   push esi
// 0066be6a  50                   push eax
// 0066be6b  8bc5                 mov eax, ebp
// 0066be6d  8bf3                 mov esi, ebx
// 0066be6f  e80cf2ffff           call 0x66b080
// 0066be74  83c404               add esp, 4
// 0066be77  85c0                 test eax, eax
// 0066be79  0f8588000000         jne 0x66bf07
// 0066be7f  53                   push ebx
// 0066be80  57                   push edi
// 0066be81  e89afaffff           call 0x66b920
// 0066be86  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066be8a  83c408               add esp, 8
// 0066be8d  8bf0                 mov esi, eax
// 0066be8f  83fa12               cmp edx, 0x12
// 0066be92  7415                 je 0x66bea9
// 0066be94  83fa14               cmp edx, 0x14
// 0066be97  7410                 je 0x66bea9
// 0066be99  55                   push ebp
// 0066be9a  57                   push edi
// 0066be9b  e880faffff           call 0x66b920
// 0066bea0  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066bea4  83c408               add esp, 8
// 0066bea7  eb02                 jmp 0x66beab
// 0066bea9  33c0                 xor eax, eax
// 0066beab  837d000c             cmp dword ptr [ebp], 0xc
// 0066beaf  7516                 jne 0x66bec7
// 0066beb1  8b6d08               mov ebp, dword ptr [ebp + 8]
// 0066beb4  f7c500010000         test ebp, 0x100
// 0066beba  750b                 jne 0x66bec7
// 0066bebc  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 0066bec0  3be9                 cmp ebp, ecx
// 0066bec2  7c03                 jl 0x66bec7
// 0066bec4  ff4f24               dec dword ptr [edi + 0x24]
// 0066bec7  833b0c               cmp dword ptr [ebx], 0xc
// 0066beca  7516                 jne 0x66bee2
// 0066becc  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0066becf  f7c100010000         test ecx, 0x100
// 0066bed5  750b                 jne 0x66bee2
// 0066bed7  0fb66f32             movzx ebp, byte ptr [edi + 0x32]
// 0066bedb  3bcd                 cmp ecx, ebp
// 0066bedd  7c03                 jl 0x66bee2
// 0066bedf  ff4f24               dec dword ptr [edi + 0x24]
// 0066bee2  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0066bee5  8b4908               mov ecx, dword ptr [ecx + 8]
// 0066bee8  c1e609               shl esi, 9
// 0066beeb  0bf0                 or esi, eax
// 0066beed  c1e60e               shl esi, 0xe
// 0066bef0  0bf2                 or esi, edx
// 0066bef2  51                   push ecx
// 0066bef3  56                   push esi
// 0066bef4  8bf7                 mov esi, edi
// 0066bef6  e895f2ffff           call 0x66b190
// 0066befb  83c408               add esp, 8
// 0066befe  894308               mov dword ptr [ebx + 8], eax
// 0066bf01  c7030b000000         mov dword ptr [ebx], 0xb
// 0066bf07  5e                   pop esi
// 0066bf08  5d                   pop ebp
// 0066bf09  c3                   ret 
// library lua-5.1.1/lcode.c (function _codearith)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lcode.c
