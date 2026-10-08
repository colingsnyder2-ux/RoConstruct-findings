// roc 2007-03 0047a110  unit: seg_00470000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a110
//
// 0047a110  53                   push ebx
// 0047a111  8a5c2408             mov bl, byte ptr [esp + 8]
// 0047a115  33c0                 xor eax, eax
// 0047a117  84db                 test bl, bl
// 0047a119  0f94c0               sete al
// 0047a11c  56                   push esi
// 0047a11d  8bf1                 mov esi, ecx
// 0047a11f  389eac000000         cmp byte ptr [esi + 0xac], bl
// 0047a125  894614               mov dword ptr [esi + 0x14], eax
// 0047a128  7435                 je 0x47a15f
// 0047a12a  84db                 test bl, bl
// 0047a12c  57                   push edi
// 0047a12d  8b3de4ed7700         mov edi, dword ptr [0x77ede4]
// 0047a133  741b                 je 0x47a150
// 0047a135  6a01                 push 1
// 0047a137  ffd7                 call edi
// 0047a139  85c0                 test eax, eax
// 0047a13b  7cf8                 jl 0x47a135
// 0047a13d  5f                   pop edi
// 0047a13e  889eac000000         mov byte ptr [esi + 0xac], bl
// 0047a144  5e                   pop esi
// 0047a145  5b                   pop ebx
// 0047a146  c20400               ret 4
// 0047a149  8da42400000000       lea esp, [esp]
// 0047a150  6a00                 push 0
// 0047a152  ffd7                 call edi
// 0047a154  85c0                 test eax, eax
// 0047a156  7df8                 jge 0x47a150
// 0047a158  889eac000000         mov byte ptr [esi + 0xac], bl
// 0047a15e  5f                   pop edi
// 0047a15f  5e                   pop esi
// 0047a160  5b                   pop ebx
// 0047a161  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?setMouseVisible@Win32Window@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
