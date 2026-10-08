// roc 2007-08 00579cd0  unit: RBX::VSpecialShape::?$FactoryProduct  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579cd0
//
// 00579cd0  6aff                 push -1
// 00579cd2  6843ab7500           push 0x75ab43
// 00579cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00579cdd  50                   push eax
// 00579cde  64892500000000       mov dword ptr fs:[0], esp
// 00579ce5  51                   push ecx
// 00579ce6  53                   push ebx
// 00579ce7  55                   push ebp
// 00579ce8  56                   push esi
// 00579ce9  57                   push edi
// 00579cea  6848158a00           push 0x8a1548
// 00579cef  8bf1                 mov esi, ecx
// 00579cf1  6838b27a00           push 0x7ab238
// 00579cf6  89742418             mov dword ptr [esp + 0x18], esi
// 00579cfa  e861d60000           call 0x587360
// 00579cff  8d6e28               lea ebp, [esi + 0x28]
// 00579d02  33ff                 xor edi, edi
// 00579d04  8bcd                 mov ecx, ebp
// 00579d06  897c241c             mov dword ptr [esp + 0x1c], edi
// 00579d0a  c706fcb17a00         mov dword ptr [esi], 0x7ab1fc
// 00579d10  e89b980000           call 0x5835b0
// 00579d15  894504               mov dword ptr [ebp + 4], eax
// 00579d18  bb01000000           mov ebx, 1
// 00579d1d  885815               mov byte ptr [eax + 0x15], bl
// 00579d20  8b4504               mov eax, dword ptr [ebp + 4]
// 00579d23  894004               mov dword ptr [eax + 4], eax
// 00579d26  8b4504               mov eax, dword ptr [ebp + 4]
// 00579d29  8900                 mov dword ptr [eax], eax
// 00579d2b  8b4504               mov eax, dword ptr [ebp + 4]
// 00579d2e  894008               mov dword ptr [eax + 8], eax
// 00579d31  897d08               mov dword ptr [ebp + 8], edi
// 00579d34  8d6e34               lea ebp, [esi + 0x34]
// 00579d37  8bcd                 mov ecx, ebp
// 00579d39  885c241c             mov byte ptr [esp + 0x1c], bl
// 00579d3d  e86e980000           call 0x5835b0
// 00579d42  894504               mov dword ptr [ebp + 4], eax
// 00579d45  885815               mov byte ptr [eax + 0x15], bl
// 00579d48  8b4504               mov eax, dword ptr [ebp + 4]
// 00579d4b  894004               mov dword ptr [eax + 4], eax
// 00579d4e  8b4504               mov eax, dword ptr [ebp + 4]
// 00579d51  8900                 mov dword ptr [eax], eax
// 00579d53  8b4504               mov eax, dword ptr [ebp + 4]
// 00579d56  894008               mov dword ptr [eax + 8], eax
// 00579d59  897d08               mov dword ptr [ebp + 8], edi
// 00579d5c  897e44               mov dword ptr [esi + 0x44], edi
// 00579d5f  897e48               mov dword ptr [esi + 0x48], edi
// 00579d62  897e4c               mov dword ptr [esi + 0x4c], edi
// 00579d65  8d6e50               lea ebp, [esi + 0x50]
// 00579d68  8bcd                 mov ecx, ebp
// 00579d6a  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00579d6f  e81cfbffff           call 0x579890
// 00579d74  894504               mov dword ptr [ebp + 4], eax
// 00579d77  88582d               mov byte ptr [eax + 0x2d], bl
// 00579d7a  8b4504               mov eax, dword ptr [ebp + 4]
// 00579d7d  894004               mov dword ptr [eax + 4], eax
// 00579d80  8b4504               mov eax, dword ptr [ebp + 4]
// 00579d83  8900                 mov dword ptr [eax], eax
// 00579d85  8b4504               mov eax, dword ptr [ebp + 4]
// 00579d88  894008               mov dword ptr [eax + 8], eax
// 00579d8b  897d08               mov dword ptr [ebp + 8], edi
// 00579d8e  8d6e5c               lea ebp, [esi + 0x5c]
// 00579d91  8bcd                 mov ecx, ebp
// 00579d93  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00579d98  e8f3faffff           call 0x579890
// 00579d9d  894504               mov dword ptr [ebp + 4], eax
// 00579da0  88582d               mov byte ptr [eax + 0x2d], bl
// 00579da3  8b4504               mov eax, dword ptr [ebp + 4]
// 00579da6  894004               mov dword ptr [eax + 4], eax
// 00579da9  8b4504               mov eax, dword ptr [ebp + 4]
// 00579dac  8900                 mov dword ptr [eax], eax
// 00579dae  8b4504               mov eax, dword ptr [ebp + 4]
// 00579db1  894008               mov dword ptr [eax + 8], eax
// 00579db4  897d08               mov dword ptr [ebp + 8], edi
// 00579db7  897e6c               mov dword ptr [esi + 0x6c], edi
// 00579dba  897e70               mov dword ptr [esi + 0x70], edi
// 00579dbd  897e74               mov dword ptr [esi + 0x74], edi
// 00579dc0  897e7c               mov dword ptr [esi + 0x7c], edi
// 00579dc3  89be80000000         mov dword ptr [esi + 0x80], edi
// 00579dc9  89be84000000         mov dword ptr [esi + 0x84], edi
// 00579dcf  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 00579dd5  89be90000000         mov dword ptr [esi + 0x90], edi
// 00579ddb  89be94000000         mov dword ptr [esi + 0x94], edi
// 00579de1  6830b27a00           push 0x7ab230
// 00579de6  57                   push edi
// 00579de7  8bce                 mov ecx, esi
// 00579de9  c644242408           mov byte ptr [esp + 0x24], 8
// 00579dee  e86d920600           call 0x5e3060
// 00579df3  6828b27a00           push 0x7ab228
// 00579df8  53                   push ebx
// 00579df9  8bce                 mov ecx, esi
// 00579dfb  e860920600           call 0x5e3060
// 00579e00  6820b27a00           push 0x7ab220
// 00579e05  6a02                 push 2
// 00579e07  8bce                 mov ecx, esi
// 00579e09  e852920600           call 0x5e3060
// 00579e0e  6828ac7a00           push 0x7aac28
// 00579e13  6a06                 push 6
// 00579e15  8bce                 mov ecx, esi
// 00579e17  e844920600           call 0x5e3060
// 00579e1c  6818b27a00           push 0x7ab218
// 00579e21  6a03                 push 3
// 00579e23  8bce                 mov ecx, esi
// 00579e25  e836920600           call 0x5e3060
// 00579e2a  680cb27a00           push 0x7ab20c
// 00579e2f  6a04                 push 4
// 00579e31  8bce                 mov ecx, esi
// 00579e33  e828920600           call 0x5e3060
// 00579e38  6800b27a00           push 0x7ab200
// 00579e3d  6a05                 push 5
// 00579e3f  8bce                 mov ecx, esi
// 00579e41  e81a920600           call 0x5e3060
// 00579e46  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00579e4a  5f                   pop edi
// 00579e4b  8bc6                 mov eax, esi
// 00579e4d  5e                   pop esi
// 00579e4e  5d                   pop ebp
// 00579e4f  5b                   pop ebx
// 00579e50  64890d00000000       mov dword ptr fs:[0], ecx
// 00579e57  83c410               add esp, 0x10
// 00579e5a  c3                   ret 
// library openrbx-client/App\v8datamodel\custommesh.cpp (function ??0?$EnumDesc@W4MeshType@SpecialShape@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/custommesh.cpp
