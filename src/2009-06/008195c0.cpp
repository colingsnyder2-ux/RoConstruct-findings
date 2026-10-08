// roc 2009-06 008195c0  unit: CXTCaptionButtonThemeOfficeXP  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008195c0
//
// 008195c0  56                   push esi
// 008195c1  57                   push edi
// 008195c2  8bf1                 mov esi, ecx
// 008195c4  e8d7fcffff           call 0x8192a0
// 008195c9  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 008195cf  f7df                 neg edi
// 008195d1  1bff                 sbb edi, edi
// 008195d3  83e70f               and edi, 0xf
// 008195d6  83c70f               add edi, 0xf
// 008195d9  e842b5f3ff           call 0x754b20
// 008195de  57                   push edi
// 008195df  8bc8                 mov ecx, eax
// 008195e1  e8baacf3ff           call 0x7542a0
// 008195e6  894624               mov dword ptr [esi + 0x24], eax
// 008195e9  e832b5f3ff           call 0x754b20
// 008195ee  6a21                 push 0x21
// 008195f0  8bc8                 mov ecx, eax
// 008195f2  e8a9acf3ff           call 0x7542a0
// 008195f7  898690000000         mov dword ptr [esi + 0x90], eax
// 008195fd  e81eb5f3ff           call 0x754b20
// 00819602  6a1f                 push 0x1f
// 00819604  8bc8                 mov ecx, eax
// 00819606  e895acf3ff           call 0x7542a0
// 0081960b  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00819611  e80ab5f3ff           call 0x754b20
// 00819616  6a10                 push 0x10
// 00819618  8bc8                 mov ecx, eax
// 0081961a  e881acf3ff           call 0x7542a0
// 0081961f  894654               mov dword ptr [esi + 0x54], eax
// 00819622  e8f9b4f3ff           call 0x754b20
// 00819627  6a20                 push 0x20
// 00819629  8bc8                 mov ecx, eax
// 0081962b  e870acf3ff           call 0x7542a0
// 00819630  894648               mov dword ptr [esi + 0x48], eax
// 00819633  e8e8b4f3ff           call 0x754b20
// 00819638  6a2e                 push 0x2e
// 0081963a  8bc8                 mov ecx, eax
// 0081963c  e85facf3ff           call 0x7542a0
// 00819641  894630               mov dword ptr [esi + 0x30], eax
// 00819644  e8d7b4f3ff           call 0x754b20
// 00819649  6a2d                 push 0x2d
// 0081964b  8bc8                 mov ecx, eax
// 0081964d  e84eacf3ff           call 0x7542a0
// 00819652  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00819658  e8c3b4f3ff           call 0x754b20
// 0081965d  6a2f                 push 0x2f
// 0081965f  8bc8                 mov ecx, eax
// 00819661  e83aacf3ff           call 0x7542a0
// 00819666  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0081966c  e8afb4f3ff           call 0x754b20
// 00819671  6a24                 push 0x24
// 00819673  8bc8                 mov ecx, eax
// 00819675  e826acf3ff           call 0x7542a0
// 0081967a  5f                   pop edi
// 0081967b  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00819681  5e                   pop esi
// 00819682  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?RefreshMetrics@CXTButtonThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
