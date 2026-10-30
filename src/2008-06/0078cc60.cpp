// from server: 100% by auto
// roc 2008-06 0078cc60  unit: CXTPRichRender::XTextHost  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078cc60
//
// 0078cc60  56                   push esi
// 0078cc61  8bf1                 mov esi, ecx
// 0078cc63  e842f30200           call 0x7bbfaa
// 0078cc68  33c0                 xor eax, eax
// 0078cc6a  894620               mov dword ptr [esi + 0x20], eax
// 0078cc6d  894624               mov dword ptr [esi + 0x24], eax
// 0078cc70  894630               mov dword ptr [esi + 0x30], eax
// 0078cc73  89462c               mov dword ptr [esi + 0x2c], eax
// 0078cc76  894634               mov dword ptr [esi + 0x34], eax
// 0078cc79  c7062ca98600         mov dword ptr [esi], 0x86a92c
// 0078cc7f  8bc6                 mov eax, esi
// 0078cc81  5e                   pop esi
// 0078cc82  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??0CXTPOffice2007Image@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
