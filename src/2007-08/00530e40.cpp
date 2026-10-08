// roc 2007-08 00530e40  unit: RBX::ModelInstance  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530e40
//
// 00530e40  53                   push ebx
// 00530e41  55                   push ebp
// 00530e42  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00530e48  56                   push esi
// 00530e49  57                   push edi
// 00530e4a  8bd9                 mov ebx, ecx
// 00530e4c  33ff                 xor edi, edi
// 00530e4e  8bff                 mov edi, edi
// 00530e50  8b8384feffff         mov eax, dword ptr [ebx - 0x17c]
// 00530e56  85c0                 test eax, eax
// 00530e58  7465                 je 0x530ebf
// 00530e5a  8b4804               mov ecx, dword ptr [eax + 4]
// 00530e5d  85c9                 test ecx, ecx
// 00530e5f  745e                 je 0x530ebf
// 00530e61  8b4008               mov eax, dword ptr [eax + 8]
// 00530e64  2bc1                 sub eax, ecx
// 00530e66  c1f803               sar eax, 3
// 00530e69  3bf8                 cmp edi, eax
// 00530e6b  7352                 jae 0x530ebf
// 00530e6d  8bb384feffff         mov esi, dword ptr [ebx - 0x17c]
// 00530e73  8b4e04               mov ecx, dword ptr [esi + 4]
// 00530e76  85c9                 test ecx, ecx
// 00530e78  740c                 je 0x530e86
// 00530e7a  8b4608               mov eax, dword ptr [esi + 8]
// 00530e7d  2bc1                 sub eax, ecx
// 00530e7f  c1f803               sar eax, 3
// 00530e82  3bf8                 cmp edi, eax
// 00530e84  7202                 jb 0x530e88
// 00530e86  ffd5                 call ebp
// 00530e88  8b4604               mov eax, dword ptr [esi + 4]
// 00530e8b  8b04f8               mov eax, dword ptr [eax + edi*8]
// 00530e8e  6a00                 push 0
// 00530e90  68088f8900           push 0x898f08
// 00530e95  684c1f8800           push 0x881f4c
// 00530e9a  6a00                 push 0
// 00530e9c  50                   push eax
// 00530e9d  e894fe0f00           call 0x630d36
// 00530ea2  83c414               add esp, 0x14
// 00530ea5  85c0                 test eax, eax
// 00530ea7  7411                 je 0x530eba
// 00530ea9  8b10                 mov edx, dword ptr [eax]
// 00530eab  d9442414             fld dword ptr [esp + 0x14]
// 00530eaf  51                   push ecx
// 00530eb0  8bc8                 mov ecx, eax
// 00530eb2  d91c24               fstp dword ptr [esp]
// 00530eb5  8b4204               mov eax, dword ptr [edx + 4]
// 00530eb8  ffd0                 call eax
// 00530eba  83c701               add edi, 1
// 00530ebd  eb91                 jmp 0x530e50
// 00530ebf  5f                   pop edi
// 00530ec0  5e                   pop esi
// 00530ec1  5d                   pop ebp
// 00530ec2  5b                   pop ebx
// 00530ec3  c20400               ret 4
// library openrbx-client/App\v8datamodel\ModelInstance.cpp (function ?onCameraNear@ModelInstance@RBX@@UAEXM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/ModelInstance.cpp
