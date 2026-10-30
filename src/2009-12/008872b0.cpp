// roc 2009-12 008872b0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008872b0
//
// 008872b0  83ec20               sub esp, 0x20
// 008872b3  56                   push esi
// 008872b4  57                   push edi
// 008872b5  8bf9                 mov edi, ecx
// 008872b7  e854f9ffff           call 0x886c10
// 008872bc  85c0                 test eax, eax
// 008872be  0f8483000000         je 0x887347
// 008872c4  8b742430             mov esi, dword ptr [esp + 0x30]
// 008872c8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008872cb  8d442408             lea eax, [esp + 8]
// 008872cf  50                   push eax
// 008872d0  51                   push ecx
// 008872d1  ff1550cc9800         call dword ptr [0x98cc50]
// 008872d7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008872db  8b542408             mov edx, dword ptr [esp + 8]
// 008872df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008872e3  8944241c             mov dword ptr [esp + 0x1c], eax
// 008872e7  8b442434             mov eax, dword ptr [esp + 0x34]
// 008872eb  89542418             mov dword ptr [esp + 0x18], edx
// 008872ef  8b542414             mov edx, dword ptr [esp + 0x14]
// 008872f3  894c2420             mov dword ptr [esp + 0x20], ecx
// 008872f7  89542424             mov dword ptr [esp + 0x24], edx
// 008872fb  85c0                 test eax, eax
// 008872fd  741b                 je 0x88731a
// 008872ff  8b5020               mov edx, dword ptr [eax + 0x20]
// 00887302  8d4c2408             lea ecx, [esp + 8]
// 00887306  51                   push ecx
// 00887307  52                   push edx
// 00887308  ff1570cc9800         call dword ptr [0x98cc70]
// 0088730e  8d442408             lea eax, [esp + 8]
// 00887312  50                   push eax
// 00887313  8bce                 mov ecx, esi
// 00887315  e8bed4f6ff           call 0x7f47d8
// 0088731a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088731e  85c0                 test eax, eax
// 00887320  7403                 je 0x887325
// 00887322  8b4004               mov eax, dword ptr [eax + 4]
// 00887325  8d4c2418             lea ecx, [esp + 0x18]
// 00887329  51                   push ecx
// 0088732a  8d54240c             lea edx, [esp + 0xc]
// 0088732e  52                   push edx
// 0088732f  6a00                 push 0
// 00887331  6a00                 push 0
// 00887333  50                   push eax
// 00887334  8d8f60040000         lea ecx, [edi + 0x460]
// 0088733a  e80145feff           call 0x86b840
// 0088733f  5f                   pop edi
// 00887340  5e                   pop esi
// 00887341  83c420               add esp, 0x20
// 00887344  c20c00               ret 0xc
// 00887347  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088734b  50                   push eax
// 0088734c  8d4c241c             lea ecx, [esp + 0x1c]
// 00887350  e87b3ffcff           call 0x84b2d0
// 00887355  6a0f                 push 0xf
// 00887357  8bcf                 mov ecx, edi
// 00887359  8bf0                 mov esi, eax
// 0088735b  e8e062f7ff           call 0x7fd640
// 00887360  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00887364  50                   push eax
// 00887365  56                   push esi
// 00887366  e893d2f6ff           call 0x7f45fe
// 0088736b  5f                   pop edi
// 0088736c  5e                   pop esi
// 0088736d  83c420               add esp, 0x20
// 00887370  c20c00               ret 0xc
// copied from an identical function in another client (function ?FillDockBarRect@CXTPNativeXPTheme@XTPPaintThemes@@IAEXPAVCDC@@PAVCWnd@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp