// roc 2007-03 004f3050  unit: seg_004f0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3050
//
// 004f3050  53                   push ebx
// 004f3051  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004f3055  57                   push edi
// 004f3056  33ff                 xor edi, edi
// 004f3058  393b                 cmp dword ptr [ebx], edi
// 004f305a  7e35                 jle 0x4f3091
// 004f305c  55                   push ebp
// 004f305d  8b2d30e97700         mov ebp, dword ptr [0x77e930]
// 004f3063  56                   push esi
// 004f3064  8b742414             mov esi, dword ptr [esp + 0x14]
// 004f3068  8b06                 mov eax, dword ptr [esi]
// 004f306a  50                   push eax
// 004f306b  ffd5                 call ebp
// 004f306d  83c701               add edi, 1
// 004f3070  83c404               add esp, 4
// 004f3073  c70600000000         mov dword ptr [esi], 0
// 004f3079  c7460400000000       mov dword ptr [esi + 4], 0
// 004f3080  3b3b                 cmp edi, dword ptr [ebx]
// 004f3082  7ce4                 jl 0x4f3068
// 004f3084  5e                   pop esi
// 004f3085  5d                   pop ebp
// 004f3086  5f                   pop edi
// 004f3087  c70300000000         mov dword ptr [ebx], 0
// 004f308d  5b                   pop ebx
// 004f308e  c20800               ret 8
// 004f3091  893b                 mov dword ptr [ebx], edi
// 004f3093  5f                   pop edi
// 004f3094  5b                   pop ebx
// 004f3095  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?flushPool@BufferPool@G3D@@AAEXPAVMemBlock@12@AAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
