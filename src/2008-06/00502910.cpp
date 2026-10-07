// roc 2008-06 00502910  unit: G3D::Sphere  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502910
//
// 00502910  6aff                 push -1
// 00502912  6860b47c00           push 0x7cb460
// 00502917  64a100000000         mov eax, dword ptr fs:[0]
// 0050291d  50                   push eax
// 0050291e  64892500000000       mov dword ptr fs:[0], esp
// 00502925  83ec08               sub esp, 8
// 00502928  56                   push esi
// 00502929  8bf1                 mov esi, ecx
// 0050292b  89742404             mov dword ptr [esp + 4], esi
// 0050292f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00502937  c70600000000         mov dword ptr [esi], 0
// 0050293d  6a0c                 push 0xc
// 0050293f  6806140000           push 0x1406
// 00502944  51                   push ecx
// 00502945  8bcc                 mov ecx, esp
// 00502947  c70100000000         mov dword ptr [ecx], 0
// 0050294d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00502951  89642414             mov dword ptr [esp + 0x14], esp
// 00502955  50                   push eax
// 00502956  c644242401           mov byte ptr [esp + 0x24], 1
// 0050295b  e840660900           call 0x598fa0
// 00502960  8b442428             mov eax, dword ptr [esp + 0x28]
// 00502964  8b4804               mov ecx, dword ptr [eax + 4]
// 00502967  8b00                 mov eax, dword ptr [eax]
// 00502969  51                   push ecx
// 0050296a  50                   push eax
// 0050296b  8bce                 mov ecx, esi
// 0050296d  e81e6bf8ff           call 0x489490
// 00502972  8b442420             mov eax, dword ptr [esp + 0x20]
// 00502976  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0050297e  85c0                 test eax, eax
// 00502980  7427                 je 0x5029a9
// 00502982  83c004               add eax, 4
// 00502985  50                   push eax
// 00502986  ff15ac218000         call dword ptr [0x8021ac]
// 0050298c  85c0                 test eax, eax
// 0050298e  7519                 jne 0x5029a9
// 00502990  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00502994  e8f783f5ff           call 0x45ad90
// 00502999  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050299d  85c9                 test ecx, ecx
// 0050299f  7408                 je 0x5029a9
// 005029a1  8b11                 mov edx, dword ptr [ecx]
// 005029a3  8b02                 mov eax, dword ptr [edx]
// 005029a5  6a01                 push 1
// 005029a7  ffd0                 call eax
// 005029a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005029ad  8bc6                 mov eax, esi
// 005029af  64890d00000000       mov dword ptr fs:[0], ecx
// 005029b6  5e                   pop esi
// 005029b7  83c414               add esp, 0x14
// 005029ba  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??$?0VVector3@G3D@@@VAR@G3D@@QAE@ABV?$Array@VVector3@G3D@@@1@V?$ReferenceCountedPointer@VVARArea@G3D@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
