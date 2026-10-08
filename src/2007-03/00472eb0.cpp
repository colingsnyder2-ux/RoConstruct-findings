// roc 2007-03 00472eb0  unit: seg_00470000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00472eb0
//
// 00472eb0  55                   push ebp
// 00472eb1  33ed                 xor ebp, ebp
// 00472eb3  392d84778b00         cmp dword ptr [0x8b7784], ebp
// 00472eb9  0f8eba000000         jle 0x472f79
// 00472ebf  53                   push ebx
// 00472ec0  56                   push esi
// 00472ec1  57                   push edi
// 00472ec2  a180778b00           mov eax, dword ptr [0x8b7780]
// 00472ec7  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 00472eca  8b4804               mov ecx, dword ptr [eax + 4]
// 00472ecd  83c004               add eax, 4
// 00472ed0  83f901               cmp ecx, 1
// 00472ed3  0f858e000000         jne 0x472f67
// 00472ed9  a180778b00           mov eax, dword ptr [0x8b7780]
// 00472ede  8b1584778b00         mov edx, dword ptr [0x8b7784]
// 00472ee4  8b5c90fc             mov ebx, dword ptr [eax + edx*4 - 4]
// 00472ee8  8d3ca8               lea edi, [eax + ebp*4]
// 00472eeb  8b07                 mov eax, dword ptr [edi]
// 00472eed  3bd8                 cmp ebx, eax
// 00472eef  745e                 je 0x472f4f
// 00472ef1  85c0                 test eax, eax
// 00472ef3  744a                 je 0x472f3f
// 00472ef5  83c004               add eax, 4
// 00472ef8  50                   push eax
// 00472ef9  ff15a8d27700         call dword ptr [0x77d2a8]
// 00472eff  85c0                 test eax, eax
// 00472f01  7536                 jne 0x472f39
// 00472f03  8b07                 mov eax, dword ptr [edi]
// 00472f05  8b7008               mov esi, dword ptr [eax + 8]
// 00472f08  85f6                 test esi, esi
// 00472f0a  741f                 je 0x472f2b
// 00472f0c  8d642400             lea esp, [esp]
// 00472f10  8b0e                 mov ecx, dword ptr [esi]
// 00472f12  8b11                 mov edx, dword ptr [ecx]
// 00472f14  8b4204               mov eax, dword ptr [edx + 4]
// 00472f17  ffd0                 call eax
// 00472f19  8bc6                 mov eax, esi
// 00472f1b  8b7604               mov esi, dword ptr [esi + 4]
// 00472f1e  50                   push eax
// 00472f1f  e8ccb11a00           call 0x61e0f0
// 00472f24  83c404               add esp, 4
// 00472f27  85f6                 test esi, esi
// 00472f29  75e5                 jne 0x472f10
// 00472f2b  8b0f                 mov ecx, dword ptr [edi]
// 00472f2d  85c9                 test ecx, ecx
// 00472f2f  7408                 je 0x472f39
// 00472f31  8b11                 mov edx, dword ptr [ecx]
// 00472f33  8b02                 mov eax, dword ptr [edx]
// 00472f35  6a01                 push 1
// 00472f37  ffd0                 call eax
// 00472f39  c70700000000         mov dword ptr [edi], 0
// 00472f3f  85db                 test ebx, ebx
// 00472f41  740c                 je 0x472f4f
// 00472f43  891f                 mov dword ptr [edi], ebx
// 00472f45  83c304               add ebx, 4
// 00472f48  53                   push ebx
// 00472f49  ff15acd27700         call dword ptr [0x77d2ac]
// 00472f4f  8b0d84778b00         mov ecx, dword ptr [0x8b7784]
// 00472f55  83c1ff               add ecx, -1
// 00472f58  6a01                 push 1
// 00472f5a  51                   push ecx
// 00472f5b  b980778b00           mov ecx, 0x8b7780
// 00472f60  e85bfcffff           call 0x472bc0
// 00472f65  eb03                 jmp 0x472f6a
// 00472f67  83c501               add ebp, 1
// 00472f6a  3b2d84778b00         cmp ebp, dword ptr [0x8b7784]
// 00472f70  0f8c4cffffff         jl 0x472ec2
// 00472f76  5f                   pop edi
// 00472f77  5e                   pop esi
// 00472f78  5b                   pop ebx
// 00472f79  5d                   pop ebp
// 00472f7a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\VARArea.cpp (function ?cleanCache@VARArea@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/VARArea.cpp
