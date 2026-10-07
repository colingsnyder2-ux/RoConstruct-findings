// roc 2009-06 006c87b0  unit: seg_006c0000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c87b0
//
// 006c87b0  56                   push esi
// 006c87b1  8b742408             mov esi, dword ptr [esp + 8]
// 006c87b5  8b4674               mov eax, dword ptr [esi + 0x74]
// 006c87b8  85c0                 test eax, eax
// 006c87ba  746e                 je 0x6c882a
// 006c87bc  57                   push edi
// 006c87bd  8b7e20               mov edi, dword ptr [esi + 0x20]
// 006c87c0  03f8                 add edi, eax
// 006c87c2  837f0806             cmp dword ptr [edi + 8], 6
// 006c87c6  740b                 je 0x6c87d3
// 006c87c8  6a05                 push 5
// 006c87ca  56                   push esi
// 006c87cb  e810abffff           call 0x6c32e0
// 006c87d0  83c408               add esp, 8
// 006c87d3  8b4608               mov eax, dword ptr [esi + 8]
// 006c87d6  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 006c87d9  8908                 mov dword ptr [eax], ecx
// 006c87db  8b50f4               mov edx, dword ptr [eax - 0xc]
// 006c87de  895004               mov dword ptr [eax + 4], edx
// 006c87e1  8b48f8               mov ecx, dword ptr [eax - 8]
// 006c87e4  894808               mov dword ptr [eax + 8], ecx
// 006c87e7  8b4608               mov eax, dword ptr [esi + 8]
// 006c87ea  8b17                 mov edx, dword ptr [edi]
// 006c87ec  83e810               sub eax, 0x10
// 006c87ef  8910                 mov dword ptr [eax], edx
// 006c87f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006c87f4  894804               mov dword ptr [eax + 4], ecx
// 006c87f7  8b5708               mov edx, dword ptr [edi + 8]
// 006c87fa  895008               mov dword ptr [eax + 8], edx
// 006c87fd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006c8800  2b4608               sub eax, dword ptr [esi + 8]
// 006c8803  5f                   pop edi
// 006c8804  83f810               cmp eax, 0x10
// 006c8807  7f0b                 jg 0x6c8814
// 006c8809  6a01                 push 1
// 006c880b  56                   push esi
// 006c880c  e8afa5ffff           call 0x6c2dc0
// 006c8811  83c408               add esp, 8
// 006c8814  83460810             add dword ptr [esi + 8], 0x10
// 006c8818  8b4608               mov eax, dword ptr [esi + 8]
// 006c881b  6a01                 push 1
// 006c881d  83c0e0               add eax, -0x20
// 006c8820  50                   push eax
// 006c8821  56                   push esi
// 006c8822  e869adffff           call 0x6c3590
// 006c8827  83c40c               add esp, 0xc
// 006c882a  6a02                 push 2
// 006c882c  56                   push esi
// 006c882d  e8aeaaffff           call 0x6c32e0
// 006c8832  83c408               add esp, 8
// 006c8835  5e                   pop esi
// 006c8836  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_errormsg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
