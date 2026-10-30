// from server: 100% by auto
// roc 2007-08 00682da0  unit: CXTPPropertyGrid  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682da0
//
// 00682da0  53                   push ebx
// 00682da1  8b1df8eb7700         mov ebx, dword ptr [0x77ebf8]
// 00682da7  56                   push esi
// 00682da8  57                   push edi
// 00682da9  8bf9                 mov edi, ecx
// 00682dab  8b4720               mov eax, dword ptr [edi + 0x20]
// 00682dae  50                   push eax
// 00682daf  ffd3                 call ebx
// 00682db1  50                   push eax
// 00682db2  e809d4faff           call 0x6301c0
// 00682db7  8bf0                 mov esi, eax
// 00682db9  85f6                 test esi, esi
// 00682dbb  7453                 je 0x682e10
// 00682dbd  8bce                 mov ecx, esi
// 00682dbf  e85e550b00           call 0x738322
// 00682dc4  a900000100           test eax, 0x10000
// 00682dc9  741c                 je 0x682de7
// 00682dcb  8bce                 mov ecx, esi
// 00682dcd  e840560b00           call 0x738412
// 00682dd2  a900000040           test eax, 0x40000000
// 00682dd7  740e                 je 0x682de7
// 00682dd9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00682ddc  51                   push ecx
// 00682ddd  ffd3                 call ebx
// 00682ddf  50                   push eax
// 00682de0  e8dbd3faff           call 0x6301c0
// 00682de5  8bf0                 mov esi, eax
// 00682de7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00682deb  8b4720               mov eax, dword ptr [edi + 0x20]
// 00682dee  52                   push edx
// 00682def  50                   push eax
// 00682df0  8b4620               mov eax, dword ptr [esi + 0x20]
// 00682df3  50                   push eax
// 00682df4  ff1564ee7700         call dword ptr [0x77ee64]
// 00682dfa  50                   push eax
// 00682dfb  e8c0d3faff           call 0x6301c0
// 00682e00  8bc8                 mov ecx, eax
// 00682e02  2bc7                 sub eax, edi
// 00682e04  f7d8                 neg eax
// 00682e06  5f                   pop edi
// 00682e07  1bc0                 sbb eax, eax
// 00682e09  5e                   pop esi
// 00682e0a  23c1                 and eax, ecx
// 00682e0c  5b                   pop ebx
// 00682e0d  c20400               ret 4
// 00682e10  5f                   pop edi
// 00682e11  5e                   pop esi
// 00682e12  33c0                 xor eax, eax
// 00682e14  5b                   pop ebx
// 00682e15  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetNextGridTabItem@CXTPPropertyGrid@@AAEPAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGrid.cpp
