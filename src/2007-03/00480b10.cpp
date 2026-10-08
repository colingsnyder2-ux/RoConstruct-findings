// roc 2007-03 00480b10  unit: seg_00480000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480b10
//
// 00480b10  53                   push ebx
// 00480b11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00480b15  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00480b19  55                   push ebp
// 00480b1a  56                   push esi
// 00480b1b  8bf1                 mov esi, ecx
// 00480b1d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00480b20  57                   push edi
// 00480b21  7205                 jb 0x480b28
// 00480b23  8b4304               mov eax, dword ptr [ebx + 4]
// 00480b26  eb03                 jmp 0x480b2b
// 00480b28  8d4304               lea eax, [ebx + 4]
// 00480b2b  51                   push ecx
// 00480b2c  50                   push eax
// 00480b2d  e88ecf0700           call 0x4fdac0
// 00480b32  33d2                 xor edx, edx
// 00480b34  8bf8                 mov edi, eax
// 00480b36  f7760c               div dword ptr [esi + 0xc]
// 00480b39  8b4608               mov eax, dword ptr [esi + 8]
// 00480b3c  83c408               add esp, 8
// 00480b3f  8b3490               mov esi, dword ptr [eax + edx*4]
// 00480b42  85f6                 test esi, esi
// 00480b44  7423                 je 0x480b69
// 00480b46  8b2dece67700         mov ebp, dword ptr [0x77e6ec]
// 00480b4c  8d642400             lea esp, [esp]
// 00480b50  393e                 cmp dword ptr [esi], edi
// 00480b52  750e                 jne 0x480b62
// 00480b54  8d4e04               lea ecx, [esi + 4]
// 00480b57  53                   push ebx
// 00480b58  51                   push ecx
// 00480b59  ffd5                 call ebp
// 00480b5b  83c408               add esp, 8
// 00480b5e  84c0                 test al, al
// 00480b60  7507                 jne 0x480b69
// 00480b62  8b7668               mov esi, dword ptr [esi + 0x68]
// 00480b65  85f6                 test esi, esi
// 00480b67  75e7                 jne 0x480b50
// 00480b69  5f                   pop edi
// 00480b6a  8d4620               lea eax, [esi + 0x20]
// 00480b6d  5e                   pop esi
// 00480b6e  5d                   pop ebp
// 00480b6f  5b                   pop ebx
// 00480b70  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GPUProgram.cpp (function ?get@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBEAAVArg@ArgList@GPUProgram@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GPUProgram.cpp
