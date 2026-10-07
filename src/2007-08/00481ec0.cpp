// roc 2007-08 00481ec0  unit: G3D::Win32Window  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00481ec0
//
// 00481ec0  6aff                 push -1
// 00481ec2  68345e7400           push 0x745e34
// 00481ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00481ecd  50                   push eax
// 00481ece  51                   push ecx
// 00481ecf  53                   push ebx
// 00481ed0  56                   push esi
// 00481ed1  57                   push edi
// 00481ed2  a188518b00           mov eax, dword ptr [0x8b5188]
// 00481ed7  33c4                 xor eax, esp
// 00481ed9  50                   push eax
// 00481eda  8d442414             lea eax, [esp + 0x14]
// 00481ede  64a300000000         mov dword ptr fs:[0], eax
// 00481ee4  8bf1                 mov esi, ecx
// 00481ee6  89742410             mov dword ptr [esp + 0x10], esi
// 00481eea  33db                 xor ebx, ebx
// 00481eec  c70684797900         mov dword ptr [esi], 0x797984
// 00481ef2  895e04               mov dword ptr [esi + 4], ebx
// 00481ef5  895e08               mov dword ptr [esi + 8], ebx
// 00481ef8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00481efc  50                   push eax
// 00481efd  8d4e10               lea ecx, [esi + 0x10]
// 00481f00  895c2420             mov dword ptr [esp + 0x20], ebx
// 00481f04  c706c4a57900         mov dword ptr [esi], 0x79a5c4
// 00481f0a  ff159ce67700         call dword ptr [0x77e69c]
// 00481f10  885e2c               mov byte ptr [esi + 0x2c], bl
// 00481f13  391d20d98b00         cmp dword ptr [0x8bd920], ebx
// 00481f19  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00481f1e  7446                 je 0x481f66
// 00481f20  a1c4db8b00           mov eax, dword ptr [0x8bdbc4]
// 00481f25  3bc3                 cmp eax, ebx
// 00481f27  7521                 jne 0x481f4a
// 00481f29  53                   push ebx
// 00481f2a  6a0a                 push 0xa
// 00481f2c  b9c0db8b00           mov ecx, 0x8bdbc0
// 00481f31  e88ab0ffff           call 0x47cfc0
// 00481f36  8b0dc0db8b00         mov ecx, dword ptr [0x8bdbc0]
// 00481f3c  51                   push ecx
// 00481f3d  6a0a                 push 0xa
// 00481f3f  ff1520d98b00         call dword ptr [0x8bd920]
// 00481f45  a1c4db8b00           mov eax, dword ptr [0x8bdbc4]
// 00481f4a  8b15c0db8b00         mov edx, dword ptr [0x8bdbc0]
// 00481f50  8b7c82fc             mov edi, dword ptr [edx + eax*4 - 4]
// 00481f54  53                   push ebx
// 00481f55  83c0ff               add eax, -1
// 00481f58  50                   push eax
// 00481f59  b9c0db8b00           mov ecx, 0x8bdbc0
// 00481f5e  e85db0ffff           call 0x47cfc0
// 00481f63  897e0c               mov dword ptr [esi + 0xc], edi
// 00481f66  8bc6                 mov eax, esi
// 00481f68  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00481f6c  64890d00000000       mov dword ptr fs:[0], ecx
// 00481f73  59                   pop ecx
// 00481f74  5f                   pop edi
// 00481f75  5e                   pop esi
// 00481f76  5b                   pop ebx
// 00481f77  83c410               add esp, 0x10
// 00481f7a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??0Milestone@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
