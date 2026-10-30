// from server: 100% by auto
// roc 2007-08 006a1140  unit: CXTPDockBar  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a1140
//
// 006a1140  8b4108               mov eax, dword ptr [ecx + 8]
// 006a1143  33d2                 xor edx, edx
// 006a1145  85c0                 test eax, eax
// 006a1147  7e3f                 jle 0x6a1188
// 006a1149  56                   push esi
// 006a114a  53                   push ebx
// 006a114b  33f6                 xor esi, esi
// 006a114d  57                   push edi
// 006a114e  8bff                 mov edi, edi
// 006a1150  85f6                 test esi, esi
// 006a1152  7c35                 jl 0x6a1189
// 006a1154  3bd0                 cmp edx, eax
// 006a1156  7d31                 jge 0x6a1189
// 006a1158  8b4104               mov eax, dword ptr [ecx + 4]
// 006a115b  8b5c3004             mov ebx, dword ptr [eax + esi + 4]
// 006a115f  8b7c3008             mov edi, dword ptr [eax + esi + 8]
// 006a1163  8d443004             lea eax, [eax + esi + 4]
// 006a1167  895804               mov dword ptr [eax + 4], ebx
// 006a116a  8938                 mov dword ptr [eax], edi
// 006a116c  8b5808               mov ebx, dword ptr [eax + 8]
// 006a116f  8b780c               mov edi, dword ptr [eax + 0xc]
// 006a1172  89580c               mov dword ptr [eax + 0xc], ebx
// 006a1175  897808               mov dword ptr [eax + 8], edi
// 006a1178  8b4108               mov eax, dword ptr [ecx + 8]
// 006a117b  83c201               add edx, 1
// 006a117e  83c630               add esi, 0x30
// 006a1181  3bd0                 cmp edx, eax
// 006a1183  7ccb                 jl 0x6a1150
// 006a1185  5f                   pop edi
// 006a1186  5b                   pop ebx
// 006a1187  5e                   pop esi
// 006a1188  c3                   ret 
// 006a1189  e992edf8ff           jmp 0x62ff20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ?InvertRects@CDockInfoArray@CXTPDockBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
