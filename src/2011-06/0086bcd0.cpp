// roc 2011-06 0086bcd0  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bcd0
//
// 0086bcd0  33c0                 xor eax, eax
// 0086bcd2  56                   push esi
// 0086bcd3  8bf1                 mov esi, ecx
// 0086bcd5  c70670bdac00         mov dword ptr [esi], 0xacbd70
// 0086bcdb  894604               mov dword ptr [esi + 4], eax
// 0086bcde  894608               mov dword ptr [esi + 8], eax
// 0086bce1  89460c               mov dword ptr [esi + 0xc], eax
// 0086bce4  894610               mov dword ptr [esi + 0x10], eax
// 0086bce7  e8c4ffffff           call 0x86bcb0
// 0086bcec  83c024               add eax, 0x24
// 0086bcef  56                   push esi
// 0086bcf0  8bc8                 mov ecx, eax
// 0086bcf2  e8c50d1600           call 0x9ccabc
// 0086bcf7  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 0086bcfe  8bc6                 mov eax, esi
// 0086bd00  5e                   pop esi
// 0086bd01  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ??0CXTThemeManagerStyleFactory@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
