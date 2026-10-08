// roc 2007-03 004fe240  unit: seg_004f0000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe240
//
// 004fe240  56                   push esi
// 004fe241  57                   push edi
// 004fe242  8bf1                 mov esi, ecx
// 004fe244  33ff                 xor edi, edi
// 004fe246  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 004fe249  732e                 jae 0x4fe279
// 004fe24b  55                   push ebp
// 004fe24c  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 004fe252  7602                 jbe 0x4fe256
// 004fe254  ffd5                 call ebp
// 004fe256  837e6c10             cmp dword ptr [esi + 0x6c], 0x10
// 004fe25a  7205                 jb 0x4fe261
// 004fe25c  8b4658               mov eax, dword ptr [esi + 0x58]
// 004fe25f  eb03                 jmp 0x4fe264
// 004fe261  8d4658               lea eax, [esi + 0x58]
// 004fe264  0fb60438             movzx eax, byte ptr [eax + edi]
// 004fe268  50                   push eax
// 004fe269  8bce                 mov ecx, esi
// 004fe26b  e840fdffff           call 0x4fdfb0
// 004fe270  83c701               add edi, 1
// 004fe273  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 004fe276  72de                 jb 0x4fe256
// 004fe278  5d                   pop ebp
// 004fe279  5f                   pop edi
// 004fe27a  5e                   pop esi
// 004fe27b  c3                   ret 
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?writeNewline@TextOutput@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp
