// from server: 100% by auto
// roc 2009-06 006ec780  unit: RBX::PartDropTool  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ec780
//
// 006ec780  83ec7c               sub esp, 0x7c
// 006ec783  53                   push ebx
// 006ec784  8bd8                 mov ebx, eax
// 006ec786  33c0                 xor eax, eax
// 006ec788  89442414             mov dword ptr [esp + 0x14], eax
// 006ec78c  89442418             mov dword ptr [esp + 0x18], eax
// 006ec790  8944241c             mov dword ptr [esp + 0x1c], eax
// 006ec794  89442420             mov dword ptr [esp + 0x20], eax
// 006ec798  89442424             mov dword ptr [esp + 0x24], eax
// 006ec79c  89442428             mov dword ptr [esp + 0x28], eax
// 006ec7a0  8944242c             mov dword ptr [esp + 0x2c], eax
// 006ec7a4  89442430             mov dword ptr [esp + 0x30], eax
// 006ec7a8  89442434             mov dword ptr [esp + 0x34], eax
// 006ec7ac  89442438             mov dword ptr [esp + 0x38], eax
// 006ec7b0  8944243c             mov dword ptr [esp + 0x3c], eax
// 006ec7b4  89442440             mov dword ptr [esp + 0x40], eax
// 006ec7b8  89442444             mov dword ptr [esp + 0x44], eax
// 006ec7bc  89442448             mov dword ptr [esp + 0x48], eax
// 006ec7c0  8944244c             mov dword ptr [esp + 0x4c], eax
// 006ec7c4  89442450             mov dword ptr [esp + 0x50], eax
// 006ec7c8  89442454             mov dword ptr [esp + 0x54], eax
// 006ec7cc  89442458             mov dword ptr [esp + 0x58], eax
// 006ec7d0  8944245c             mov dword ptr [esp + 0x5c], eax
// 006ec7d4  89442460             mov dword ptr [esp + 0x60], eax
// 006ec7d8  89442464             mov dword ptr [esp + 0x64], eax
// 006ec7dc  89442468             mov dword ptr [esp + 0x68], eax
// 006ec7e0  8944246c             mov dword ptr [esp + 0x6c], eax
// 006ec7e4  89442470             mov dword ptr [esp + 0x70], eax
// 006ec7e8  89442474             mov dword ptr [esp + 0x74], eax
// 006ec7ec  89442478             mov dword ptr [esp + 0x78], eax
// 006ec7f0  8944247c             mov dword ptr [esp + 0x7c], eax
// 006ec7f4  56                   push esi
// 006ec7f5  8d442418             lea eax, [esp + 0x18]
// 006ec7f9  50                   push eax
// 006ec7fa  53                   push ebx
// 006ec7fb  e8f0f6ffff           call 0x6ebef0
// 006ec800  8d4c2410             lea ecx, [esp + 0x10]
// 006ec804  51                   push ecx
// 006ec805  8d542424             lea edx, [esp + 0x24]
// 006ec809  52                   push edx
// 006ec80a  89442418             mov dword ptr [esp + 0x18], eax
// 006ec80e  8bf0                 mov esi, eax
// 006ec810  e85bf7ffff           call 0x6ebf70
// 006ec815  83c410               add esp, 0x10
// 006ec818  03f0                 add esi, eax
// 006ec81a  837f0803             cmp dword ptr [edi + 8], 3
// 006ec81e  7543                 jne 0x6ec863
// 006ec820  dd07                 fld qword ptr [edi]
// 006ec822  dd5c2410             fstp qword ptr [esp + 0x10]
// 006ec826  dd442410             fld qword ptr [esp + 0x10]
// 006ec82a  db5c240c             fistp dword ptr [esp + 0xc]
// 006ec82e  db44240c             fild dword ptr [esp + 0xc]
// 006ec832  dc5c2410             fcomp qword ptr [esp + 0x10]
// 006ec836  dfe0                 fnstsw ax
// 006ec838  f6c444               test ah, 0x44
// 006ec83b  7a26                 jp 0x6ec863
// 006ec83d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ec841  85c0                 test eax, eax
// 006ec843  7e1e                 jle 0x6ec863
// 006ec845  3d00000004           cmp eax, 0x4000000
// 006ec84a  7f17                 jg 0x6ec863
// 006ec84c  48                   dec eax
// 006ec84d  50                   push eax
// 006ec84e  e8cdc3fdff           call 0x6c8c20
// 006ec853  8d448420             lea eax, [esp + eax*4 + 0x20]
// 006ec857  83c404               add esp, 4
// 006ec85a  ff00                 inc dword ptr [eax]
// 006ec85c  b801000000           mov eax, 1
// 006ec861  eb02                 jmp 0x6ec865
// 006ec863  33c0                 xor eax, eax
// 006ec865  01442408             add dword ptr [esp + 8], eax
// 006ec869  8d442408             lea eax, [esp + 8]
// 006ec86d  50                   push eax
// 006ec86e  8d44241c             lea eax, [esp + 0x1c]
// 006ec872  e819f6ffff           call 0x6ebe90
// 006ec877  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ec87b  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 006ec882  2bf0                 sub esi, eax
// 006ec884  46                   inc esi
// 006ec885  56                   push esi
// 006ec886  51                   push ecx
// 006ec887  52                   push edx
// 006ec888  8bc3                 mov eax, ebx
// 006ec88a  e8c1fcffff           call 0x6ec550
// 006ec88f  83c410               add esp, 0x10
// 006ec892  5e                   pop esi
// 006ec893  5b                   pop ebx
// 006ec894  83c47c               add esp, 0x7c
// 006ec897  c3                   ret 
// library lua-5.1.4/ltable.c (function _rehash)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c
