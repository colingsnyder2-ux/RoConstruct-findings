// roc 2009-12 00863290  unit: CXTPToolTipContext::COffice2007ToolTip  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863290
//
// 00863290  6aff                 push -1
// 00863292  68c8ea9500           push 0x95eac8
// 00863297  64a100000000         mov eax, dword ptr fs:[0]
// 0086329d  50                   push eax
// 0086329e  51                   push ecx
// 0086329f  56                   push esi
// 008632a0  a10052b600           mov eax, dword ptr [0xb65200]
// 008632a5  33c4                 xor eax, esp
// 008632a7  50                   push eax
// 008632a8  8d44240c             lea eax, [esp + 0xc]
// 008632ac  64a300000000         mov dword ptr fs:[0], eax
// 008632b2  8bf1                 mov esi, ecx
// 008632b4  89742408             mov dword ptr [esp + 8], esi
// 008632b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008632bc  50                   push eax
// 008632bd  e82eebffff           call 0x861df0
// 008632c2  8d8e30010000         lea ecx, [esi + 0x130]
// 008632c8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008632d0  c706d4e49f00         mov dword ptr [esi], 0x9fe4d4
// 008632d6  e8f5c80700           call 0x8dfbd0
// 008632db  8bc6                 mov eax, esi
// 008632dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008632e1  64890d00000000       mov dword ptr fs:[0], ecx
// 008632e8  59                   pop ecx
// 008632e9  5e                   pop esi
// 008632ea  83c410               add esp, 0x10
// 008632ed  c20400               ret 4
// copied from an identical function in another client (function ??0CRichEditToolTip@CXTPToolTipContext@@QAE@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp