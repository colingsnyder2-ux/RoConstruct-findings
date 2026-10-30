// roc 2009-12 008dfa40  unit: CXTPRichRender::XTextHost  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfa40
//
// 008dfa40  83ec10               sub esp, 0x10
// 008dfa43  56                   push esi
// 008dfa44  8b742418             mov esi, dword ptr [esp + 0x18]
// 008dfa48  8b46fc               mov eax, dword ptr [esi - 4]
// 008dfa4b  83c6e0               add esi, -0x20
// 008dfa4e  50                   push eax
// 008dfa4f  8d4c2408             lea ecx, [esp + 8]
// 008dfa53  e8d840f1ff           call 0x7f3b30
// 008dfa58  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dfa5c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dfa60  51                   push ecx
// 008dfa61  52                   push edx
// 008dfa62  8bce                 mov ecx, esi
// 008dfa64  e8fb710400           call 0x926c64
// 008dfa69  8bf0                 mov esi, eax
// 008dfa6b  8b442408             mov eax, dword ptr [esp + 8]
// 008dfa6f  85c0                 test eax, eax
// 008dfa71  7407                 je 0x8dfa7a
// 008dfa73  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008dfa77  894804               mov dword ptr [eax + 4], ecx
// 008dfa7a  837c241000           cmp dword ptr [esp + 0x10], 0
// 008dfa7f  740c                 je 0x8dfa8d
// 008dfa81  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008dfa85  52                   push edx
// 008dfa86  6a00                 push 0
// 008dfa88  e89740f1ff           call 0x7f3b24
// 008dfa8d  8bc6                 mov eax, esi
// 008dfa8f  5e                   pop esi
// 008dfa90  83c410               add esp, 0x10
// 008dfa93  c20c00               ret 0xc
// copied from an identical function in another client (function ?QueryInterface@XTextHost@CXTPRichRender@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp