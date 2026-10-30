// from server: 100% by auto
// roc 2008-06 007287f0  unit: RBX::KeyboardPrimaryController  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007287f0
//
// 007287f0  83ec10               sub esp, 0x10
// 007287f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007287f7  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 007287fd  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00728803  890c24               mov dword ptr [esp], ecx
// 00728806  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0072880c  894c2408             mov dword ptr [esp + 8], ecx
// 00728810  89542404             mov dword ptr [esp + 4], edx
// 00728814  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0072881a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00728820  8d0c24               lea ecx, [esp]
// 00728823  51                   push ecx
// 00728824  50                   push eax
// 00728825  89542414             mov dword ptr [esp + 0x14], edx
// 00728829  e812ffffff           call 0x728740
// 0072882e  f7d8                 neg eax
// 00728830  1bc0                 sbb eax, eax
// 00728832  f7d8                 neg eax
// 00728834  83c418               add esp, 0x18
// 00728837  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetDrawImageFlags@@YAKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
