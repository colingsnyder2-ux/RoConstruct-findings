// roc 2011-06 007f2100  unit: RBX::AdvLuaDragTool  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2100
//
// 007f2100  55                   push ebp
// 007f2101  8b6c2408             mov ebp, dword ptr [esp + 8]
// 007f2105  56                   push esi
// 007f2106  8bf0                 mov esi, eax
// 007f2108  83feff               cmp esi, -1
// 007f210b  7472                 je 0x7f217f
// 007f210d  53                   push ebx
// 007f210e  b280                 mov dl, 0x80
// 007f2110  57                   push edi
// 007f2111  8b4500               mov eax, dword ptr [ebp]
// 007f2114  8b400c               mov eax, dword ptr [eax + 0xc]
// 007f2117  8d3cb500000000       lea edi, [esi*4]
// 007f211e  03c7                 add eax, edi
// 007f2120  83fe01               cmp esi, 1
// 007f2123  7c11                 jl 0x7f2136
// 007f2125  8b58fc               mov ebx, dword ptr [eax - 4]
// 007f2128  8d48fc               lea ecx, [eax - 4]
// 007f212b  83e33f               and ebx, 0x3f
// 007f212e  8493bce0ab00         test byte ptr [ebx + 0xabe0bc], dl
// 007f2134  7502                 jne 0x7f2138
// 007f2136  8bc8                 mov ecx, eax
// 007f2138  8b01                 mov eax, dword ptr [ecx]
// 007f213a  8bd8                 mov ebx, eax
// 007f213c  83e33f               and ebx, 0x3f
// 007f213f  80fb1b               cmp bl, 0x1b
// 007f2142  751a                 jne 0x7f215e
// 007f2144  8bd8                 mov ebx, eax
// 007f2146  81e3ffffb5ff         and ebx, 0xffb5ffff
// 007f214c  81cb00003400         or ebx, 0x340000
// 007f2152  c1eb11               shr ebx, 0x11
// 007f2155  2500c07f00           and eax, 0x7fc000
// 007f215a  0bd8                 or ebx, eax
// 007f215c  8919                 mov dword ptr [ecx], ebx
// 007f215e  8b4d00               mov ecx, dword ptr [ebp]
// 007f2161  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007f2164  8b0407               mov eax, dword ptr [edi + eax]
// 007f2167  c1e80e               shr eax, 0xe
// 007f216a  2dffff0100           sub eax, 0x1ffff
// 007f216f  83f8ff               cmp eax, -1
// 007f2172  7409                 je 0x7f217d
// 007f2174  8d740601             lea esi, [esi + eax + 1]
// 007f2178  83feff               cmp esi, -1
// 007f217b  7594                 jne 0x7f2111
// 007f217d  5f                   pop edi
// 007f217e  5b                   pop ebx
// 007f217f  5e                   pop esi
// 007f2180  5d                   pop ebp
// 007f2181  c3                   ret 
// library lua-5.1.4/lcode.c (function _removevalues)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
