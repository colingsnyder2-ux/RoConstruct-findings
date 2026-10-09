// roc 2007-03 00534aa0  unit: seg_00530000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534aa0
//
// 00534aa0  53                   push ebx
// 00534aa1  55                   push ebp
// 00534aa2  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00534aa8  56                   push esi
// 00534aa9  57                   push edi
// 00534aaa  8bd9                 mov ebx, ecx
// 00534aac  33ff                 xor edi, edi
// 00534aae  8bff                 mov edi, edi
// 00534ab0  8b8384feffff         mov eax, dword ptr [ebx - 0x17c]
// 00534ab6  85c0                 test eax, eax
// 00534ab8  7465                 je 0x534b1f
// 00534aba  8b4804               mov ecx, dword ptr [eax + 4]
// 00534abd  85c9                 test ecx, ecx
// 00534abf  745e                 je 0x534b1f
// 00534ac1  8b4008               mov eax, dword ptr [eax + 8]
// 00534ac4  2bc1                 sub eax, ecx
// 00534ac6  c1f803               sar eax, 3
// 00534ac9  3bf8                 cmp edi, eax
// 00534acb  7352                 jae 0x534b1f
// 00534acd  8bb384feffff         mov esi, dword ptr [ebx - 0x17c]
// 00534ad3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00534ad6  85c9                 test ecx, ecx
// 00534ad8  740c                 je 0x534ae6
// 00534ada  8b4608               mov eax, dword ptr [esi + 8]
// 00534add  2bc1                 sub eax, ecx
// 00534adf  c1f803               sar eax, 3
// 00534ae2  3bf8                 cmp edi, eax
// 00534ae4  7202                 jb 0x534ae8
// 00534ae6  ffd5                 call ebp
// 00534ae8  8b4604               mov eax, dword ptr [esi + 4]
// 00534aeb  8b04f8               mov eax, dword ptr [eax + edi*8]
// 00534aee  6a00                 push 0
// 00534af0  68e4768900           push 0x8976e4
// 00534af5  6864108800           push 0x881064
// 00534afa  6a00                 push 0
// 00534afc  50                   push eax
// 00534afd  e8c4a60e00           call 0x61f1c6
// 00534b02  83c414               add esp, 0x14
// 00534b05  85c0                 test eax, eax
// 00534b07  7411                 je 0x534b1a
// 00534b09  8b10                 mov edx, dword ptr [eax]
// 00534b0b  d9442414             fld dword ptr [esp + 0x14]
// 00534b0f  51                   push ecx
// 00534b10  8bc8                 mov ecx, eax
// 00534b12  d91c24               fstp dword ptr [esp]
// 00534b15  8b4204               mov eax, dword ptr [edx + 4]
// 00534b18  ffd0                 call eax
// 00534b1a  83c701               add edi, 1
// 00534b1d  eb91                 jmp 0x534ab0
// 00534b1f  5f                   pop edi
// 00534b20  5e                   pop esi
// 00534b21  5d                   pop ebp
// 00534b22  5b                   pop ebx
// 00534b23  c20400               ret 4
// library openrbx-client/App\v8datamodel\ModelInstance.cpp (function ?onCameraNear@ModelInstance@RBX@@UAEXM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/ModelInstance.cpp
