// roc 2007-08 004f4680  unit: boost::bad_lexical_cast  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4680
//
// 004f4680  6aff                 push -1
// 004f4682  68b0db7400           push 0x74dbb0
// 004f4687  64a100000000         mov eax, dword ptr fs:[0]
// 004f468d  50                   push eax
// 004f468e  83ec08               sub esp, 8
// 004f4691  56                   push esi
// 004f4692  57                   push edi
// 004f4693  a188518b00           mov eax, dword ptr [0x8b5188]
// 004f4698  33c4                 xor eax, esp
// 004f469a  50                   push eax
// 004f469b  8d442414             lea eax, [esp + 0x14]
// 004f469f  64a300000000         mov dword ptr fs:[0], eax
// 004f46a5  8bf1                 mov esi, ecx
// 004f46a7  8974240c             mov dword ptr [esp + 0xc], esi
// 004f46ab  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004f46b3  c70600000000         mov dword ptr [esi], 0
// 004f46b9  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004f46bd  6a08                 push 8
// 004f46bf  6806140000           push 0x1406
// 004f46c4  51                   push ecx
// 004f46c5  8bcc                 mov ecx, esp
// 004f46c7  8964241c             mov dword ptr [esp + 0x1c], esp
// 004f46cb  57                   push edi
// 004f46cc  c644242c01           mov byte ptr [esp + 0x2c], 1
// 004f46d1  c70100000000         mov dword ptr [ecx], 0
// 004f46d7  e89408f8ff           call 0x474f70
// 004f46dc  8b442430             mov eax, dword ptr [esp + 0x30]
// 004f46e0  8b4804               mov ecx, dword ptr [eax + 4]
// 004f46e3  8b00                 mov eax, dword ptr [eax]
// 004f46e5  51                   push ecx
// 004f46e6  50                   push eax
// 004f46e7  8bce                 mov ecx, esi
// 004f46e9  e8921df9ff           call 0x486480
// 004f46ee  85ff                 test edi, edi
// 004f46f0  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004f46f8  741f                 je 0x4f4719
// 004f46fa  8d4704               lea eax, [edi + 4]
// 004f46fd  50                   push eax
// 004f46fe  ff15e8d27700         call dword ptr [0x77d2e8]
// 004f4704  85c0                 test eax, eax
// 004f4706  7511                 jne 0x4f4719
// 004f4708  8bcf                 mov ecx, edi
// 004f470a  e8c136f6ff           call 0x457dd0
// 004f470f  8b17                 mov edx, dword ptr [edi]
// 004f4711  8b02                 mov eax, dword ptr [edx]
// 004f4713  6a01                 push 1
// 004f4715  8bcf                 mov ecx, edi
// 004f4717  ffd0                 call eax
// 004f4719  8bc6                 mov eax, esi
// 004f471b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f471f  64890d00000000       mov dword ptr fs:[0], ecx
// 004f4726  59                   pop ecx
// 004f4727  5f                   pop edi
// 004f4728  5e                   pop esi
// 004f4729  83c414               add esp, 0x14
// 004f472c  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??$?0VVector2@G3D@@@VAR@G3D@@QAE@ABV?$Array@VVector2@G3D@@@1@V?$ReferenceCountedPointer@VVARArea@G3D@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
