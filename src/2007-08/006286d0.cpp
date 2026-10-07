// roc 2007-08 006286d0  unit: RBX::AssemblyStage  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006286d0
//
// 006286d0  55                   push ebp
// 006286d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006286d5  56                   push esi
// 006286d6  8bf0                 mov esi, eax
// 006286d8  83feff               cmp esi, -1
// 006286db  7472                 je 0x62874f
// 006286dd  53                   push ebx
// 006286de  b280                 mov dl, 0x80
// 006286e0  57                   push edi
// 006286e1  8b4500               mov eax, dword ptr [ebp]
// 006286e4  8b400c               mov eax, dword ptr [eax + 0xc]
// 006286e7  8d3cb500000000       lea edi, [esi*4]
// 006286ee  03c7                 add eax, edi
// 006286f0  83fe01               cmp esi, 1
// 006286f3  7c11                 jl 0x628706
// 006286f5  8b58fc               mov ebx, dword ptr [eax - 4]
// 006286f8  8d48fc               lea ecx, [eax - 4]
// 006286fb  83e33f               and ebx, 0x3f
// 006286fe  8493f4377c00         test byte ptr [ebx + 0x7c37f4], dl
// 00628704  7502                 jne 0x628708
// 00628706  8bc8                 mov ecx, eax
// 00628708  8b01                 mov eax, dword ptr [ecx]
// 0062870a  8bd8                 mov ebx, eax
// 0062870c  83e33f               and ebx, 0x3f
// 0062870f  80fb1b               cmp bl, 0x1b
// 00628712  751a                 jne 0x62872e
// 00628714  8bd8                 mov ebx, eax
// 00628716  81e3ffffb5ff         and ebx, 0xffb5ffff
// 0062871c  81cb00003400         or ebx, 0x340000
// 00628722  c1eb11               shr ebx, 0x11
// 00628725  2500c07f00           and eax, 0x7fc000
// 0062872a  0bd8                 or ebx, eax
// 0062872c  8919                 mov dword ptr [ecx], ebx
// 0062872e  8b4d00               mov ecx, dword ptr [ebp]
// 00628731  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00628734  8b0407               mov eax, dword ptr [edi + eax]
// 00628737  c1e80e               shr eax, 0xe
// 0062873a  2dffff0100           sub eax, 0x1ffff
// 0062873f  83f8ff               cmp eax, -1
// 00628742  7409                 je 0x62874d
// 00628744  8d740601             lea esi, [esi + eax + 1]
// 00628748  83feff               cmp esi, -1
// 0062874b  7594                 jne 0x6286e1
// 0062874d  5f                   pop edi
// 0062874e  5b                   pop ebx
// 0062874f  5e                   pop esi
// 00628750  5d                   pop ebp
// 00628751  c3                   ret 
// library lua-5.1.4/lcode.c (function _removevalues)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
