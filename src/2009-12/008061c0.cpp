// roc 2009-12 008061c0  unit: CXTPControlComboBoxPopupBar  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008061c0
//
// 008061c0  83ec18               sub esp, 0x18
// 008061c3  56                   push esi
// 008061c4  8b742428             mov esi, dword ptr [esp + 0x28]
// 008061c8  57                   push edi
// 008061c9  8bf9                 mov edi, ecx
// 008061cb  85f6                 test esi, esi
// 008061cd  750d                 jne 0x8061dc
// 008061cf  5f                   pop edi
// 008061d0  b857000780           mov eax, 0x80070057
// 008061d5  5e                   pop esi
// 008061d6  83c418               add esp, 0x18
// 008061d9  c20c00               ret 0xc
// 008061dc  33c0                 xor eax, eax
// 008061de  668906               mov word ptr [esi], ax
// 008061e1  8d47a4               lea eax, [edi - 0x5c]
// 008061e4  85c0                 test eax, eax
// 008061e6  7406                 je 0x8061ee
// 008061e8  83782000             cmp dword ptr [eax + 0x20], 0
// 008061ec  750d                 jne 0x8061fb
// 008061ee  5f                   pop edi
// 008061ef  b801000000           mov eax, 1
// 008061f4  5e                   pop esi
// 008061f5  83c418               add esp, 0x18
// 008061f8  c20c00               ret 0xc
// 008061fb  53                   push ebx
// 008061fc  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00806200  55                   push ebp
// 00806201  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00806205  50                   push eax
// 00806206  8d4c241c             lea ecx, [esp + 0x1c]
// 0080620a  e861500400           call 0x84b270
// 0080620f  55                   push ebp
// 00806210  53                   push ebx
// 00806211  50                   push eax
// 00806212  ff155cca9800         call dword ptr [0x98ca5c]
// 00806218  85c0                 test eax, eax
// 0080621a  750f                 jne 0x80622b
// 0080621c  5d                   pop ebp
// 0080621d  5b                   pop ebx
// 0080621e  5f                   pop edi
// 0080621f  b801000000           mov eax, 1
// 00806224  5e                   pop esi
// 00806225  83c418               add esp, 0x18
// 00806228  c20c00               ret 0xc
// 0080622b  b903000000           mov ecx, 3
// 00806230  8d542410             lea edx, [esp + 0x10]
// 00806234  66890e               mov word ptr [esi], cx
// 00806237  c7460800000000       mov dword ptr [esi + 8], 0
// 0080623e  8b47c4               mov eax, dword ptr [edi - 0x3c]
// 00806241  52                   push edx
// 00806242  50                   push eax
// 00806243  895c2418             mov dword ptr [esp + 0x18], ebx
// 00806247  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0080624b  ff1534cc9800         call dword ptr [0x98cc34]
// 00806251  8b542414             mov edx, dword ptr [esp + 0x14]
// 00806255  8b442410             mov eax, dword ptr [esp + 0x10]
// 00806259  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 0080625f  52                   push edx
// 00806260  50                   push eax
// 00806261  e8baf30300           call 0x845620
// 00806266  85c0                 test eax, eax
// 00806268  7414                 je 0x80627e
// 0080626a  b909000000           mov ecx, 9
// 0080626f  66890e               mov word ptr [esi], cx
// 00806272  6a01                 push 1
// 00806274  8bc8                 mov ecx, eax
// 00806276  e8bb011200           call 0x926436
// 0080627b  894608               mov dword ptr [esi + 8], eax
// 0080627e  5d                   pop ebp
// 0080627f  5b                   pop ebx
// 00806280  5f                   pop edi
// 00806281  33c0                 xor eax, eax
// 00806283  5e                   pop esi
// 00806284  83c418               add esp, 0x18
// 00806287  c20c00               ret 0xc
// copied from an identical function in another client (function ?AccessibleHitTest@CXTPCommandBar@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp