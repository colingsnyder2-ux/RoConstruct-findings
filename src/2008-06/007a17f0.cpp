// roc 2008-06 007a17f0  unit: CXTCaptionButtonTheme  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a17f0
//
// 007a17f0  56                   push esi
// 007a17f1  8bf1                 mov esi, ecx
// 007a17f3  e818bccdff           call 0x47d410
// 007a17f8  e81301f4ff           call 0x6e1910
// 007a17fd  6864198500           push 0x851964
// 007a1802  6a00                 push 0
// 007a1804  8d4e74               lea ecx, [esi + 0x74]
// 007a1807  e8646df7ff           call 0x718570
// 007a180c  e82fe5f3ff           call 0x6dfd40
// 007a1811  6a0f                 push 0xf
// 007a1813  8bc8                 mov ecx, eax
// 007a1815  e806ddf3ff           call 0x6df520
// 007a181a  894624               mov dword ptr [esi + 0x24], eax
// 007a181d  e81ee5f3ff           call 0x6dfd40
// 007a1822  6a12                 push 0x12
// 007a1824  8bc8                 mov ecx, eax
// 007a1826  e8f5dcf3ff           call 0x6df520
// 007a182b  894630               mov dword ptr [esi + 0x30], eax
// 007a182e  e80de5f3ff           call 0x6dfd40
// 007a1833  6a11                 push 0x11
// 007a1835  8bc8                 mov ecx, eax
// 007a1837  e8e4dcf3ff           call 0x6df520
// 007a183c  89463c               mov dword ptr [esi + 0x3c], eax
// 007a183f  e8fce4f3ff           call 0x6dfd40
// 007a1844  6a0f                 push 0xf
// 007a1846  8bc8                 mov ecx, eax
// 007a1848  e8d3dcf3ff           call 0x6df520
// 007a184d  894648               mov dword ptr [esi + 0x48], eax
// 007a1850  e8ebe4f3ff           call 0x6dfd40
// 007a1855  6a10                 push 0x10
// 007a1857  8bc8                 mov ecx, eax
// 007a1859  e8c2dcf3ff           call 0x6df520
// 007a185e  894654               mov dword ptr [esi + 0x54], eax
// 007a1861  e8dae4f3ff           call 0x6dfd40
// 007a1866  6a14                 push 0x14
// 007a1868  8bc8                 mov ecx, eax
// 007a186a  e8b1dcf3ff           call 0x6df520
// 007a186f  894660               mov dword ptr [esi + 0x60], eax
// 007a1872  e8c9e4f3ff           call 0x6dfd40
// 007a1877  6a15                 push 0x15
// 007a1879  8bc8                 mov ecx, eax
// 007a187b  e8a0dcf3ff           call 0x6df520
// 007a1880  89466c               mov dword ptr [esi + 0x6c], eax
// 007a1883  5e                   pop esi
// 007a1884  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?RefreshMetrics@CXTButtonTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
