// roc 2009-12 00867280  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00867280
//
// 00867280  6aff                 push -1
// 00867282  68a9df9500           push 0x95dfa9
// 00867287  64a100000000         mov eax, dword ptr fs:[0]
// 0086728d  50                   push eax
// 0086728e  56                   push esi
// 0086728f  57                   push edi
// 00867290  a10052b600           mov eax, dword ptr [0xb65200]
// 00867295  33c4                 xor eax, esp
// 00867297  50                   push eax
// 00867298  8d44240c             lea eax, [esp + 0xc]
// 0086729c  64a300000000         mov dword ptr fs:[0], eax
// 008672a2  8bf1                 mov esi, ecx
// 008672a4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008672a8  81ff2c270000         cmp edi, 0x272c
// 008672ae  757f                 jne 0x86732f
// 008672b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 008672b4  50                   push eax
// 008672b5  8d4c2424             lea ecx, [esp + 0x24]
// 008672b9  51                   push ecx
// 008672ba  e831feffff           call 0x8670f0
// 008672bf  83c408               add esp, 8
// 008672c2  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 008672c8  8b11                 mov edx, dword ptr [ecx]
// 008672ca  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008672d0  8d442420             lea eax, [esp + 0x20]
// 008672d4  50                   push eax
// 008672d5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008672dd  ffd2                 call edx
// 008672df  85c0                 test eax, eax
// 008672e1  741f                 je 0x867302
// 008672e3  51                   push ecx
// 008672e4  8d442424             lea eax, [esp + 0x24]
// 008672e8  8bcc                 mov ecx, esp
// 008672ea  89642420             mov dword ptr [esp + 0x20], esp
// 008672ee  50                   push eax
// 008672ef  ff1594de9800         call dword ptr [0x98de94]
// 008672f5  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 008672fb  8b11                 mov edx, dword ptr [ecx]
// 008672fd  8b4264               mov eax, dword ptr [edx + 0x64]
// 00867300  ffd0                 call eax
// 00867302  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00867306  c70100000000         mov dword ptr [ecx], 0
// 0086730c  8d4c2420             lea ecx, [esp + 0x20]
// 00867310  ff15c0de9800         call dword ptr [0x98dec0]
// 00867316  b801000000           mov eax, 1
// 0086731b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086731f  64890d00000000       mov dword ptr fs:[0], ecx
// 00867326  59                   pop ecx
// 00867327  5f                   pop edi
// 00867328  5e                   pop esi
// 00867329  83c40c               add esp, 0xc
// 0086732c  c21000               ret 0x10
// 0086732f  81ff2d270000         cmp edi, 0x272d
// 00867335  7510                 jne 0x867347
// 00867337  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0086733d  8b11                 mov edx, dword ptr [ecx]
// 0086733f  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 00867345  ffd0                 call eax
// 00867347  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0086734b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0086734f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00867353  51                   push ecx
// 00867354  52                   push edx
// 00867355  50                   push eax
// 00867356  57                   push edi
// 00867357  8bce                 mov ecx, esi
// 00867359  e8c2e40700           call 0x8e5820
// 0086735e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00867362  64890d00000000       mov dword ptr fs:[0], ecx
// 00867369  59                   pop ecx
// 0086736a  5f                   pop edi
// 0086736b  5e                   pop esi
// 0086736c  83c40c               add esp, 0xc
// 0086736f  c21000               ret 0x10
// copied from an identical function in another client (function ?OnWndMsg@CPropertyGridItemColorColorPopup@?8??OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z@UAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemColor.cpp