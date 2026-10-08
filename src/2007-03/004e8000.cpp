// roc 2007-03 004e8000  unit: seg_004e0000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8000
//
// 004e8000  6aff                 push -1
// 004e8002  68f0e97400           push 0x74e9f0
// 004e8007  64a100000000         mov eax, dword ptr fs:[0]
// 004e800d  50                   push eax
// 004e800e  83ec08               sub esp, 8
// 004e8011  56                   push esi
// 004e8012  57                   push edi
// 004e8013  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004e8018  33c4                 xor eax, esp
// 004e801a  50                   push eax
// 004e801b  8d442414             lea eax, [esp + 0x14]
// 004e801f  64a300000000         mov dword ptr fs:[0], eax
// 004e8025  8bf1                 mov esi, ecx
// 004e8027  8974240c             mov dword ptr [esp + 0xc], esi
// 004e802b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004e8033  c70600000000         mov dword ptr [esi], 0
// 004e8039  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004e803d  6a08                 push 8
// 004e803f  6806140000           push 0x1406
// 004e8044  51                   push ecx
// 004e8045  8bcc                 mov ecx, esp
// 004e8047  8964241c             mov dword ptr [esp + 0x1c], esp
// 004e804b  57                   push edi
// 004e804c  c644242c01           mov byte ptr [esp + 0x2c], 1
// 004e8051  c70100000000         mov dword ptr [ecx], 0
// 004e8057  e834d0f8ff           call 0x475090
// 004e805c  8b442430             mov eax, dword ptr [esp + 0x30]
// 004e8060  8b4804               mov ecx, dword ptr [eax + 4]
// 004e8063  8b00                 mov eax, dword ptr [eax]
// 004e8065  51                   push ecx
// 004e8066  50                   push eax
// 004e8067  8bce                 mov ecx, esi
// 004e8069  e882c8f9ff           call 0x4848f0
// 004e806e  85ff                 test edi, edi
// 004e8070  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004e8078  741f                 je 0x4e8099
// 004e807a  8d4704               lea eax, [edi + 4]
// 004e807d  50                   push eax
// 004e807e  ff15a8d27700         call dword ptr [0x77d2a8]
// 004e8084  85c0                 test eax, eax
// 004e8086  7511                 jne 0x4e8099
// 004e8088  8bcf                 mov ecx, edi
// 004e808a  e831b3f7ff           call 0x4633c0
// 004e808f  8b17                 mov edx, dword ptr [edi]
// 004e8091  8b02                 mov eax, dword ptr [edx]
// 004e8093  6a01                 push 1
// 004e8095  8bcf                 mov ecx, edi
// 004e8097  ffd0                 call eax
// 004e8099  8bc6                 mov eax, esi
// 004e809b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e809f  64890d00000000       mov dword ptr fs:[0], ecx
// 004e80a6  59                   pop ecx
// 004e80a7  5f                   pop edi
// 004e80a8  5e                   pop esi
// 004e80a9  83c414               add esp, 0x14
// 004e80ac  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??$?0VVector2@G3D@@@VAR@G3D@@QAE@ABV?$Array@VVector2@G3D@@@1@V?$ReferenceCountedPointer@VVARArea@G3D@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
