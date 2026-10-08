// from server: 100% by auto
// roc 2008-06 00663620  unit: RBX::FilterStairs  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663620
//
// 00663620  51                   push ecx
// 00663621  8b4e04               mov ecx, dword ptr [esi + 4]
// 00663624  6a04                 push 4
// 00663626  8d442404             lea eax, [esp + 4]
// 0066362a  50                   push eax
// 0066362b  51                   push ecx
// 0066362c  e8cfc2ffff           call 0x65f900
// 00663631  83c40c               add esp, 0xc
// 00663634  85c0                 test eax, eax
// 00663636  7423                 je 0x66365b
// 00663638  8b560c               mov edx, dword ptr [esi + 0xc]
// 0066363b  8b06                 mov eax, dword ptr [esi]
// 0066363d  6830c78400           push 0x84c730
// 00663642  52                   push edx
// 00663643  6814c78400           push 0x84c714
// 00663648  50                   push eax
// 00663649  e872f4fbff           call 0x622ac0
// 0066364e  8b0e                 mov ecx, dword ptr [esi]
// 00663650  6a03                 push 3
// 00663652  51                   push ecx
// 00663653  e8f8e9fbff           call 0x622050
// 00663658  83c418               add esp, 0x18
// 0066365b  8b0424               mov eax, dword ptr [esp]
// 0066365e  85c0                 test eax, eax
// 00663660  7d27                 jge 0x663689
// 00663662  8b560c               mov edx, dword ptr [esi + 0xc]
// 00663665  8b06                 mov eax, dword ptr [esi]
// 00663667  6840c78400           push 0x84c740
// 0066366c  52                   push edx
// 0066366d  6814c78400           push 0x84c714
// 00663672  50                   push eax
// 00663673  e848f4fbff           call 0x622ac0
// 00663678  8b0e                 mov ecx, dword ptr [esi]
// 0066367a  6a03                 push 3
// 0066367c  51                   push ecx
// 0066367d  e8cee9fbff           call 0x622050
// 00663682  8b442418             mov eax, dword ptr [esp + 0x18]
// 00663686  83c418               add esp, 0x18
// 00663689  59                   pop ecx
// 0066368a  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadInt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
