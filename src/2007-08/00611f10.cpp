// from server: 100% by auto
// roc 2007-08 00611f10  unit: seg_00610000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00611f10
//
// 00611f10  8b4708               mov eax, dword ptr [edi + 8]
// 00611f13  83ec0c               sub esp, 0xc
// 00611f16  85c0                 test eax, eax
// 00611f18  55                   push ebp
// 00611f19  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00611f1d  7508                 jne 0x611f27
// 00611f1f  83c8ff               or eax, 0xffffffff
// 00611f22  5d                   pop ebp
// 00611f23  83c40c               add esp, 0xc
// 00611f26  c3                   ret 
// 00611f27  83f803               cmp eax, 3
// 00611f2a  7532                 jne 0x611f5e
// 00611f2c  dd07                 fld qword ptr [edi]
// 00611f2e  dd5c2408             fstp qword ptr [esp + 8]
// 00611f32  dd442408             fld qword ptr [esp + 8]
// 00611f36  db5c2404             fistp dword ptr [esp + 4]
// 00611f3a  db442404             fild dword ptr [esp + 4]
// 00611f3e  dc5c2408             fcomp qword ptr [esp + 8]
// 00611f42  dfe0                 fnstsw ax
// 00611f44  f6c444               test ah, 0x44
// 00611f47  7a15                 jp 0x611f5e
// 00611f49  8b442404             mov eax, dword ptr [esp + 4]
// 00611f4d  85c0                 test eax, eax
// 00611f4f  7e0d                 jle 0x611f5e
// 00611f51  3b451c               cmp eax, dword ptr [ebp + 0x1c]
// 00611f54  7f08                 jg 0x611f5e
// 00611f56  83c0ff               add eax, -1
// 00611f59  5d                   pop ebp
// 00611f5a  83c40c               add esp, 0xc
// 00611f5d  c3                   ret 
// 00611f5e  56                   push esi
// 00611f5f  8bd7                 mov edx, edi
// 00611f61  8bc5                 mov eax, ebp
// 00611f63  e818ffffff           call 0x611e80
// 00611f68  8bf0                 mov esi, eax
// 00611f6a  53                   push ebx
// 00611f6b  eb03                 jmp 0x611f70
// 00611f6d  8d4900               lea ecx, [ecx]
// 00611f70  8d5e10               lea ebx, [esi + 0x10]
// 00611f73  57                   push edi
// 00611f74  53                   push ebx
// 00611f75  e806cbffff           call 0x60ea80
// 00611f7a  83c408               add esp, 8
// 00611f7d  85c0                 test eax, eax
// 00611f7f  7534                 jne 0x611fb5
// 00611f81  837e180b             cmp dword ptr [esi + 0x18], 0xb
// 00611f85  750c                 jne 0x611f93
// 00611f87  837f0804             cmp dword ptr [edi + 8], 4
// 00611f8b  7c06                 jl 0x611f93
// 00611f8d  8b03                 mov eax, dword ptr [ebx]
// 00611f8f  3b07                 cmp eax, dword ptr [edi]
// 00611f91  7422                 je 0x611fb5
// 00611f93  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00611f96  85f6                 test esi, esi
// 00611f98  75d6                 jne 0x611f70
// 00611f9a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00611f9e  68d8327c00           push 0x7c32d8
// 00611fa3  51                   push ecx
// 00611fa4  e85750fbff           call 0x5c7000
// 00611fa9  83c408               add esp, 8
// 00611fac  5b                   pop ebx
// 00611fad  5e                   pop esi
// 00611fae  33c0                 xor eax, eax
// 00611fb0  5d                   pop ebp
// 00611fb1  83c40c               add esp, 0xc
// 00611fb4  c3                   ret 
// 00611fb5  8bc6                 mov eax, esi
// 00611fb7  2b4510               sub eax, dword ptr [ebp + 0x10]
// 00611fba  5b                   pop ebx
// 00611fbb  c1f805               sar eax, 5
// 00611fbe  03451c               add eax, dword ptr [ebp + 0x1c]
// 00611fc1  5e                   pop esi
// 00611fc2  5d                   pop ebp
// 00611fc3  83c40c               add esp, 0xc
// 00611fc6  c3                   ret 
// library lua-5.1.4/ltable.c (function _findindex)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c
