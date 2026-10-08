// roc 2007-03 00536130  unit: seg_00530000  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536130
//
// 00536130  6aff                 push -1
// 00536132  68e8457500           push 0x7545e8
// 00536137  64a100000000         mov eax, dword ptr fs:[0]
// 0053613d  50                   push eax
// 0053613e  64892500000000       mov dword ptr fs:[0], esp
// 00536145  83ec14               sub esp, 0x14
// 00536148  56                   push esi
// 00536149  8bf1                 mov esi, ecx
// 0053614b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0053614e  85c9                 test ecx, ecx
// 00536150  8b4634               mov eax, dword ptr [esi + 0x34]
// 00536153  57                   push edi
// 00536154  89442408             mov dword ptr [esp + 8], eax
// 00536158  7409                 je 0x536163
// 0053615a  8b11                 mov edx, dword ptr [ecx]
// 0053615c  8b4208               mov eax, dword ptr [edx + 8]
// 0053615f  ffd0                 call eax
// 00536161  eb02                 jmp 0x536165
// 00536163  33c0                 xor eax, eax
// 00536165  8944240c             mov dword ptr [esp + 0xc], eax
// 00536169  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053616d  8b11                 mov edx, dword ptr [ecx]
// 0053616f  8b5204               mov edx, dword ptr [edx + 4]
// 00536172  8d442408             lea eax, [esp + 8]
// 00536176  50                   push eax
// 00536177  6a01                 push 1
// 00536179  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00536181  ffd2                 call edx
// 00536183  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00536187  6a00                 push 0
// 00536189  6848b68800           push 0x88b648
// 0053618e  68d4118800           push 0x8811d4
// 00536193  6a00                 push 0
// 00536195  50                   push eax
// 00536196  e82b900e00           call 0x61f1c6
// 0053619b  8bf8                 mov edi, eax
// 0053619d  83c414               add esp, 0x14
// 005361a0  85ff                 test edi, edi
// 005361a2  751e                 jne 0x5361c2
// 005361a4  68ac5e7800           push 0x785eac
// 005361a9  8d4c2414             lea ecx, [esp + 0x14]
// 005361ad  ff1580e97700         call dword ptr [0x77e980]
// 005361b3  68c0218400           push 0x8421c0
// 005361b8  8d4c2414             lea ecx, [esp + 0x14]
// 005361bc  51                   push ecx
// 005361bd  e86c8e0e00           call 0x61f02e
// 005361c2  8d4c2408             lea ecx, [esp + 8]
// 005361c6  e8f5890300           call 0x56ebc0
// 005361cb  d900                 fld dword ptr [eax]
// 005361cd  8b97f4000000         mov edx, dword ptr [edi + 0xf4]
// 005361d3  83ec0c               sub esp, 0xc
// 005361d6  8bcc                 mov ecx, esp
// 005361d8  d919                 fstp dword ptr [ecx]
// 005361da  d94004               fld dword ptr [eax + 4]
// 005361dd  d95904               fstp dword ptr [ecx + 4]
// 005361e0  d94008               fld dword ptr [eax + 8]
// 005361e3  8b4630               mov eax, dword ptr [esi + 0x30]
// 005361e6  d95908               fstp dword ptr [ecx + 8]
// 005361e9  8b0c02               mov ecx, dword ptr [edx + eax]
// 005361ec  034e2c               add ecx, dword ptr [esi + 0x2c]
// 005361ef  8b5628               mov edx, dword ptr [esi + 0x28]
// 005361f2  8d8c39f4000000       lea ecx, [ecx + edi + 0xf4]
// 005361f9  ffd2                 call edx
// 005361fb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005361ff  85c9                 test ecx, ecx
// 00536201  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00536209  7408                 je 0x536213
// 0053620b  8b01                 mov eax, dword ptr [ecx]
// 0053620d  8b10                 mov edx, dword ptr [eax]
// 0053620f  6a01                 push 1
// 00536211  ffd2                 call edx
// 00536213  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00536217  5f                   pop edi
// 00536218  64890d00000000       mov dword ptr fs:[0], ecx
// 0053621f  5e                   pop esi
// 00536220  83c420               add esp, 0x20
// 00536223  c20800               ret 8
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?execute@?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
