// from server: 100% by auto
// roc 2012-06 009676b0  unit: RBX::CellContact  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009676b0
//
// 009676b0  8b4618               mov eax, dword ptr [esi + 0x18]
// 009676b3  57                   push edi
// 009676b4  8b3e                 mov edi, dword ptr [esi]
// 009676b6  50                   push eax
// 009676b7  68ff000000           push 0xff
// 009676bc  50                   push eax
// 009676bd  8b4620               mov eax, dword ptr [esi + 0x20]
// 009676c0  56                   push esi
// 009676c1  e86afaffff           call 0x967130
// 009676c6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 009676c9  8d472c               lea eax, [edi + 0x2c]
// 009676cc  41                   inc ecx
// 009676cd  83c410               add esp, 0x10
// 009676d0  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 009676d7  3b08                 cmp ecx, dword ptr [eax]
// 009676d9  7e20                 jle 0x9676fb
// 009676db  8b570c               mov edx, dword ptr [edi + 0xc]
// 009676de  68a47cc000           push 0xc07ca4
// 009676e3  68fdffff7f           push 0x7ffffffd
// 009676e8  6a04                 push 4
// 009676ea  50                   push eax
// 009676eb  8b4610               mov eax, dword ptr [esi + 0x10]
// 009676ee  52                   push edx
// 009676ef  50                   push eax
// 009676f0  e8bbf8fcff           call 0x936fb0
// 009676f5  83c418               add esp, 0x18
// 009676f8  89470c               mov dword ptr [edi + 0xc], eax
// 009676fb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 009676fe  8b442408             mov eax, dword ptr [esp + 8]
// 00967702  8b570c               mov edx, dword ptr [edi + 0xc]
// 00967705  89048a               mov dword ptr [edx + ecx*4], eax
// 00967708  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0096770b  8d4730               lea eax, [edi + 0x30]
// 0096770e  41                   inc ecx
// 0096770f  3b08                 cmp ecx, dword ptr [eax]
// 00967711  7e20                 jle 0x967733
// 00967713  8b5714               mov edx, dword ptr [edi + 0x14]
// 00967716  68a47cc000           push 0xc07ca4
// 0096771b  68fdffff7f           push 0x7ffffffd
// 00967720  6a04                 push 4
// 00967722  50                   push eax
// 00967723  8b4610               mov eax, dword ptr [esi + 0x10]
// 00967726  52                   push edx
// 00967727  50                   push eax
// 00967728  e883f8fcff           call 0x936fb0
// 0096772d  83c418               add esp, 0x18
// 00967730  894714               mov dword ptr [edi + 0x14], eax
// 00967733  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00967736  8b5714               mov edx, dword ptr [edi + 0x14]
// 00967739  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0096773d  89048a               mov dword ptr [edx + ecx*4], eax
// 00967740  8b4618               mov eax, dword ptr [esi + 0x18]
// 00967743  8d4801               lea ecx, [eax + 1]
// 00967746  894e18               mov dword ptr [esi + 0x18], ecx
// 00967749  5f                   pop edi
// 0096774a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_code)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
