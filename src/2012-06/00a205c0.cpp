// roc 2012-06 00a205c0  unit: CXTPRibbonBar  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a205c0
//
// 00a205c0  83ec08               sub esp, 8
// 00a205c3  56                   push esi
// 00a205c4  57                   push edi
// 00a205c5  8d442408             lea eax, [esp + 8]
// 00a205c9  50                   push eax
// 00a205ca  8bf1                 mov esi, ecx
// 00a205cc  ff158c3ab200         call dword ptr [0xb23a8c]
// 00a205d2  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a205d5  8d4c2408             lea ecx, [esp + 8]
// 00a205d9  51                   push ecx
// 00a205da  52                   push edx
// 00a205db  ff15883ab200         call dword ptr [0xb23a88]
// 00a205e1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a205e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a205e9  50                   push eax
// 00a205ea  51                   push ecx
// 00a205eb  8bce                 mov ecx, esi
// 00a205ed  e8bee2ffff           call 0xa1e8b0
// 00a205f2  8bf8                 mov edi, eax
// 00a205f4  8d57f6               lea edx, [edi - 0xa]
// 00a205f7  83fa07               cmp edx, 7
// 00a205fa  772f                 ja 0xa2062b
// 00a205fc  8bce                 mov ecx, esi
// 00a205fe  e83d53f7ff           call 0x995940
// 00a20603  0fb74c241c           movzx ecx, word ptr [esp + 0x1c]
// 00a20608  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a2060b  0fb7d7               movzx edx, di
// 00a2060e  c1e110               shl ecx, 0x10
// 00a20611  0bca                 or ecx, edx
// 00a20613  51                   push ecx
// 00a20614  50                   push eax
// 00a20615  6a20                 push 0x20
// 00a20617  50                   push eax
// 00a20618  ff15043cb200         call dword ptr [0xb23c04]
// 00a2061e  5f                   pop edi
// 00a2061f  b801000000           mov eax, 1
// 00a20624  5e                   pop esi
// 00a20625  83c408               add esp, 8
// 00a20628  c20c00               ret 0xc
// 00a2062b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a2062f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a20633  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a20637  50                   push eax
// 00a20638  51                   push ecx
// 00a20639  52                   push edx
// 00a2063a  8bce                 mov ecx, esi
// 00a2063c  e8eff9f7ff           call 0x9a0030
// 00a20641  5f                   pop edi
// 00a20642  5e                   pop esi
// 00a20643  83c408               add esp, 8
// 00a20646  c20c00               ret 0xc
// library xtp-15.2.1/Source\Ribbon\XTPRibbonBar.cpp (function ?OnSetCursor@CXTPRibbonBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonBar.cpp
