// roc 2008-06 0078c8b0  unit: CXTPRichRender::XTextHost  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c8b0
//
// 0078c8b0  83ec10               sub esp, 0x10
// 0078c8b3  56                   push esi
// 0078c8b4  8b742418             mov esi, dword ptr [esp + 0x18]
// 0078c8b8  8b46fc               mov eax, dword ptr [esi - 4]
// 0078c8bb  83c6e0               add esi, -0x20
// 0078c8be  50                   push eax
// 0078c8bf  8d4c2408             lea ecx, [esp + 8]
// 0078c8c3  e89a40f1ff           call 0x6a0962
// 0078c8c8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078c8cc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0078c8d0  51                   push ecx
// 0078c8d1  52                   push edx
// 0078c8d2  8bce                 mov ecx, esi
// 0078c8d4  e871ff0200           call 0x7bc84a
// 0078c8d9  8bf0                 mov esi, eax
// 0078c8db  8b442408             mov eax, dword ptr [esp + 8]
// 0078c8df  85c0                 test eax, eax
// 0078c8e1  7407                 je 0x78c8ea
// 0078c8e3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078c8e7  894804               mov dword ptr [eax + 4], ecx
// 0078c8ea  837c241000           cmp dword ptr [esp + 0x10], 0
// 0078c8ef  740c                 je 0x78c8fd
// 0078c8f1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078c8f5  52                   push edx
// 0078c8f6  6a00                 push 0
// 0078c8f8  e85f40f1ff           call 0x6a095c
// 0078c8fd  8bc6                 mov eax, esi
// 0078c8ff  5e                   pop esi
// 0078c900  83c410               add esp, 0x10
// 0078c903  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Common\XTPRichRender.cpp (function ?QueryInterface@XTextHost@CXTPRichRender@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp
