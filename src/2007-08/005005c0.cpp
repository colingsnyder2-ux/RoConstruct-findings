// roc 2007-08 005005c0  unit: G3D::Shader  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005005c0
//
// 005005c0  56                   push esi
// 005005c1  57                   push edi
// 005005c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005005c6  85ff                 test edi, edi
// 005005c8  8bf1                 mov esi, ecx
// 005005ca  750f                 jne 0x5005db
// 005005cc  8b442410             mov eax, dword ptr [esp + 0x10]
// 005005d0  50                   push eax
// 005005d1  e8aaefffff           call 0x4ff580
// 005005d6  5f                   pop edi
// 005005d7  5e                   pop esi
// 005005d8  c20800               ret 8
// 005005db  8b860c280400         mov eax, dword ptr [esi + 0x4280c]
// 005005e1  3bf8                 cmp edi, eax
// 005005e3  53                   push ebx
// 005005e4  724f                 jb 0x500635
// 005005e6  0500007d00           add eax, 0x7d0000
// 005005eb  3bf8                 cmp edi, eax
// 005005ed  7346                 jae 0x500635
// 005005ef  8b442414             mov eax, dword ptr [esp + 0x14]
// 005005f3  3d80000000           cmp eax, 0x80
// 005005f8  7708                 ja 0x500602
// 005005fa  5b                   pop ebx
// 005005fb  8bc7                 mov eax, edi
// 005005fd  5f                   pop edi
// 005005fe  5e                   pop esi
// 005005ff  c20800               ret 8
// 00500602  50                   push eax
// 00500603  e878efffff           call 0x4ff580
// 00500608  6880000000           push 0x80
// 0050060d  8bd8                 mov ebx, eax
// 0050060f  57                   push edi
// 00500610  53                   push ebx
// 00500611  e82affffff           call 0x500540
// 00500616  8b8e08280400         mov ecx, dword ptr [esi + 0x42808]
// 0050061c  83c40c               add esp, 0xc
// 0050061f  89bc8e08400000       mov dword ptr [esi + ecx*4 + 0x4008], edi
// 00500626  83860828040001       add dword ptr [esi + 0x42808], 1
// 0050062d  8bc3                 mov eax, ebx
// 0050062f  5b                   pop ebx
// 00500630  5f                   pop edi
// 00500631  5e                   pop esi
// 00500632  c20800               ret 8
// 00500635  8b442414             mov eax, dword ptr [esp + 0x14]
// 00500639  55                   push ebp
// 0050063a  8b6ffc               mov ebp, dword ptr [edi - 4]
// 0050063d  3bc5                 cmp eax, ebp
// 0050063f  7709                 ja 0x50064a
// 00500641  5d                   pop ebp
// 00500642  5b                   pop ebx
// 00500643  8bc7                 mov eax, edi
// 00500645  5f                   pop edi
// 00500646  5e                   pop esi
// 00500647  c20800               ret 8
// 0050064a  50                   push eax
// 0050064b  e830efffff           call 0x4ff580
// 00500650  55                   push ebp
// 00500651  8bd8                 mov ebx, eax
// 00500653  57                   push edi
// 00500654  53                   push ebx
// 00500655  e8e6feffff           call 0x500540
// 0050065a  83c40c               add esp, 0xc
// 0050065d  57                   push edi
// 0050065e  8bce                 mov ecx, esi
// 00500660  e88bf0ffff           call 0x4ff6f0
// 00500665  5d                   pop ebp
// 00500666  8bc3                 mov eax, ebx
// 00500668  5b                   pop ebx
// 00500669  5f                   pop edi
// 0050066a  5e                   pop esi
// 0050066b  c20800               ret 8
// library g3d-6.09/G3Dcpp\System.cpp (function ?realloc@BufferPool@G3D@@QAEPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
