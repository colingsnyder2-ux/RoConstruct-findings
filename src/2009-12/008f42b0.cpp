// roc 2009-12 008f42b0  unit: CXTCaptionButtonThemeOfficeXP  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f42b0
//
// 008f42b0  56                   push esi
// 008f42b1  57                   push edi
// 008f42b2  8bf1                 mov esi, ecx
// 008f42b4  e8d7fcffff           call 0x8f3f90
// 008f42b9  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 008f42bf  f7df                 neg edi
// 008f42c1  1bff                 sbb edi, edi
// 008f42c3  83e70f               and edi, 0xf
// 008f42c6  83c70f               add edi, 0xf
// 008f42c9  e802b7f3ff           call 0x82f9d0
// 008f42ce  57                   push edi
// 008f42cf  8bc8                 mov ecx, eax
// 008f42d1  e82aaef3ff           call 0x82f100
// 008f42d6  894624               mov dword ptr [esi + 0x24], eax
// 008f42d9  e8f2b6f3ff           call 0x82f9d0
// 008f42de  6a21                 push 0x21
// 008f42e0  8bc8                 mov ecx, eax
// 008f42e2  e819aef3ff           call 0x82f100
// 008f42e7  898690000000         mov dword ptr [esi + 0x90], eax
// 008f42ed  e8deb6f3ff           call 0x82f9d0
// 008f42f2  6a1f                 push 0x1f
// 008f42f4  8bc8                 mov ecx, eax
// 008f42f6  e805aef3ff           call 0x82f100
// 008f42fb  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008f4301  e8cab6f3ff           call 0x82f9d0
// 008f4306  6a10                 push 0x10
// 008f4308  8bc8                 mov ecx, eax
// 008f430a  e8f1adf3ff           call 0x82f100
// 008f430f  894654               mov dword ptr [esi + 0x54], eax
// 008f4312  e8b9b6f3ff           call 0x82f9d0
// 008f4317  6a20                 push 0x20
// 008f4319  8bc8                 mov ecx, eax
// 008f431b  e8e0adf3ff           call 0x82f100
// 008f4320  894648               mov dword ptr [esi + 0x48], eax
// 008f4323  e8a8b6f3ff           call 0x82f9d0
// 008f4328  6a2e                 push 0x2e
// 008f432a  8bc8                 mov ecx, eax
// 008f432c  e8cfadf3ff           call 0x82f100
// 008f4331  894630               mov dword ptr [esi + 0x30], eax
// 008f4334  e897b6f3ff           call 0x82f9d0
// 008f4339  6a2d                 push 0x2d
// 008f433b  8bc8                 mov ecx, eax
// 008f433d  e8beadf3ff           call 0x82f100
// 008f4342  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 008f4348  e883b6f3ff           call 0x82f9d0
// 008f434d  6a2f                 push 0x2f
// 008f434f  8bc8                 mov ecx, eax
// 008f4351  e8aaadf3ff           call 0x82f100
// 008f4356  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008f435c  e86fb6f3ff           call 0x82f9d0
// 008f4361  6a24                 push 0x24
// 008f4363  8bc8                 mov ecx, eax
// 008f4365  e896adf3ff           call 0x82f100
// 008f436a  5f                   pop edi
// 008f436b  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 008f4371  5e                   pop esi
// 008f4372  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?RefreshMetrics@CXTButtonThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
