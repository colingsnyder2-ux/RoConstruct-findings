// from server: 100% by auto
// roc 2008-06 0047bdc0  unit: CInstanceRecord::CNameItem  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047bdc0
//
// 0047bdc0  6aff                 push -1
// 0047bdc2  68634c7c00           push 0x7c4c63
// 0047bdc7  64a100000000         mov eax, dword ptr fs:[0]
// 0047bdcd  50                   push eax
// 0047bdce  64892500000000       mov dword ptr fs:[0], esp
// 0047bdd5  81ec68070000         sub esp, 0x768
// 0047bddb  56                   push esi
// 0047bddc  8bf1                 mov esi, ecx
// 0047bdde  8b4604               mov eax, dword ptr [esi + 4]
// 0047bde1  3b4608               cmp eax, dword ptr [esi + 8]
// 0047bde4  89742408             mov dword ptr [esp + 8], esi
// 0047bde8  7d43                 jge 0x47be2d
// 0047bdea  69c060070000         imul eax, eax, 0x760
// 0047bdf0  0306                 add eax, dword ptr [esi]
// 0047bdf2  89442404             mov dword ptr [esp + 4], eax
// 0047bdf6  c784247407000000000000 mov dword ptr [esp + 0x774], 0
// 0047be01  740f                 je 0x47be12
// 0047be03  8b8c247c070000       mov ecx, dword ptr [esp + 0x77c]
// 0047be0a  51                   push ecx
// 0047be0b  8bc8                 mov ecx, eax
// 0047be0d  e8bef2ffff           call 0x47b0d0
// 0047be12  ff4604               inc dword ptr [esi + 4]
// 0047be15  5e                   pop esi
// 0047be16  8b8c2468070000       mov ecx, dword ptr [esp + 0x768]
// 0047be1d  64890d00000000       mov dword ptr fs:[0], ecx
// 0047be24  81c474070000         add esp, 0x774
// 0047be2a  c20400               ret 4
// 0047be2d  8b0e                 mov ecx, dword ptr [esi]
// 0047be2f  57                   push edi
// 0047be30  8bbc2480070000       mov edi, dword ptr [esp + 0x780]
// 0047be37  3bf9                 cmp edi, ecx
// 0047be39  7245                 jb 0x47be80
// 0047be3b  8bd0                 mov edx, eax
// 0047be3d  69d260070000         imul edx, edx, 0x760
// 0047be43  03d1                 add edx, ecx
// 0047be45  3bfa                 cmp edi, edx
// 0047be47  7337                 jae 0x47be80
// 0047be49  57                   push edi
// 0047be4a  8d4c2414             lea ecx, [esp + 0x14]
// 0047be4e  e87df2ffff           call 0x47b0d0
// 0047be53  8d442410             lea eax, [esp + 0x10]
// 0047be57  50                   push eax
// 0047be58  8bce                 mov ecx, esi
// 0047be5a  c784247c07000001000000 mov dword ptr [esp + 0x77c], 1
// 0047be65  e856ffffff           call 0x47bdc0
// 0047be6a  8d4c2410             lea ecx, [esp + 0x10]
// 0047be6e  c7842478070000ffffffff mov dword ptr [esp + 0x778], 0xffffffff
// 0047be79  e8f2dbffff           call 0x479a70
// 0047be7e  eb23                 jmp 0x47bea3
// 0047be80  6a00                 push 0
// 0047be82  40                   inc eax
// 0047be83  50                   push eax
// 0047be84  8bce                 mov ecx, esi
// 0047be86  e8b5fdffff           call 0x47bc40
// 0047be8b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047be8e  8b16                 mov edx, dword ptr [esi]
// 0047be90  69c960070000         imul ecx, ecx, 0x760
// 0047be96  57                   push edi
// 0047be97  8d8c11a0f8ffff       lea ecx, [ecx + edx - 0x760]
// 0047be9e  e85de3ffff           call 0x47a200
// 0047bea3  8b8c2470070000       mov ecx, dword ptr [esp + 0x770]
// 0047beaa  5f                   pop edi
// 0047beab  5e                   pop esi
// 0047beac  64890d00000000       mov dword ptr fs:[0], ecx
// 0047beb3  81c474070000         add esp, 0x774
// 0047beb9  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?append@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXABVRenderState@RenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
