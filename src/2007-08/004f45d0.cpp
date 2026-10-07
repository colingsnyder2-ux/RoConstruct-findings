// roc 2007-08 004f45d0  unit: boost::bad_lexical_cast  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f45d0
//
// 004f45d0  6aff                 push -1
// 004f45d2  68b0db7400           push 0x74dbb0
// 004f45d7  64a100000000         mov eax, dword ptr fs:[0]
// 004f45dd  50                   push eax
// 004f45de  83ec08               sub esp, 8
// 004f45e1  56                   push esi
// 004f45e2  57                   push edi
// 004f45e3  a188518b00           mov eax, dword ptr [0x8b5188]
// 004f45e8  33c4                 xor eax, esp
// 004f45ea  50                   push eax
// 004f45eb  8d442414             lea eax, [esp + 0x14]
// 004f45ef  64a300000000         mov dword ptr fs:[0], eax
// 004f45f5  8bf1                 mov esi, ecx
// 004f45f7  8974240c             mov dword ptr [esp + 0xc], esi
// 004f45fb  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004f4603  c70600000000         mov dword ptr [esi], 0
// 004f4609  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004f460d  6a0c                 push 0xc
// 004f460f  6806140000           push 0x1406
// 004f4614  51                   push ecx
// 004f4615  8bcc                 mov ecx, esp
// 004f4617  8964241c             mov dword ptr [esp + 0x1c], esp
// 004f461b  57                   push edi
// 004f461c  c644242c01           mov byte ptr [esp + 0x2c], 1
// 004f4621  c70100000000         mov dword ptr [ecx], 0
// 004f4627  e84409f8ff           call 0x474f70
// 004f462c  8b442430             mov eax, dword ptr [esp + 0x30]
// 004f4630  8b4804               mov ecx, dword ptr [eax + 4]
// 004f4633  8b00                 mov eax, dword ptr [eax]
// 004f4635  51                   push ecx
// 004f4636  50                   push eax
// 004f4637  8bce                 mov ecx, esi
// 004f4639  e8421ef9ff           call 0x486480
// 004f463e  85ff                 test edi, edi
// 004f4640  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004f4648  741f                 je 0x4f4669
// 004f464a  8d4704               lea eax, [edi + 4]
// 004f464d  50                   push eax
// 004f464e  ff15e8d27700         call dword ptr [0x77d2e8]
// 004f4654  85c0                 test eax, eax
// 004f4656  7511                 jne 0x4f4669
// 004f4658  8bcf                 mov ecx, edi
// 004f465a  e87137f6ff           call 0x457dd0
// 004f465f  8b17                 mov edx, dword ptr [edi]
// 004f4661  8b02                 mov eax, dword ptr [edx]
// 004f4663  6a01                 push 1
// 004f4665  8bcf                 mov ecx, edi
// 004f4667  ffd0                 call eax
// 004f4669  8bc6                 mov eax, esi
// 004f466b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f466f  64890d00000000       mov dword ptr fs:[0], ecx
// 004f4676  59                   pop ecx
// 004f4677  5f                   pop edi
// 004f4678  5e                   pop esi
// 004f4679  83c414               add esp, 0x14
// 004f467c  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??$?0VVector3@G3D@@@VAR@G3D@@QAE@ABV?$Array@VVector3@G3D@@@1@V?$ReferenceCountedPointer@VVARArea@G3D@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
