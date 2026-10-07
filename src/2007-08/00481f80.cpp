// roc 2007-08 00481f80  unit: G3D::Win32Window  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00481f80
//
// 00481f80  6aff                 push -1
// 00481f82  68645e7400           push 0x745e64
// 00481f87  64a100000000         mov eax, dword ptr fs:[0]
// 00481f8d  50                   push eax
// 00481f8e  51                   push ecx
// 00481f8f  56                   push esi
// 00481f90  a188518b00           mov eax, dword ptr [0x8b5188]
// 00481f95  33c4                 xor eax, esp
// 00481f97  50                   push eax
// 00481f98  8d44240c             lea eax, [esp + 0xc]
// 00481f9c  64a300000000         mov dword ptr fs:[0], eax
// 00481fa2  8bf1                 mov esi, ecx
// 00481fa4  89742408             mov dword ptr [esp + 8], esi
// 00481fa8  c706c4a57900         mov dword ptr [esi], 0x79a5c4
// 00481fae  a124d98b00           mov eax, dword ptr [0x8bd924]
// 00481fb3  85c0                 test eax, eax
// 00481fb5  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00481fbd  744e                 je 0x48200d
// 00481fbf  833dc0db8b0000       cmp dword ptr [0x8bdbc0], 0
// 00481fc6  743d                 je 0x482005
// 00481fc8  8d460c               lea eax, [esi + 0xc]
// 00481fcb  50                   push eax
// 00481fcc  b9c0db8b00           mov ecx, 0x8bdbc0
// 00481fd1  e86ab5ffff           call 0x47d540
// 00481fd6  a1c4db8b00           mov eax, dword ptr [0x8bdbc4]
// 00481fdb  83f814               cmp eax, 0x14
// 00481fde  7e2d                 jle 0x48200d
// 00481fe0  8b0dc0db8b00         mov ecx, dword ptr [0x8bdbc0]
// 00481fe6  8d5481e8             lea edx, [ecx + eax*4 - 0x18]
// 00481fea  52                   push edx
// 00481feb  83c0fb               add eax, -5
// 00481fee  50                   push eax
// 00481fef  ff1524d98b00         call dword ptr [0x8bd924]
// 00481ff5  6a01                 push 1
// 00481ff7  6a14                 push 0x14
// 00481ff9  b9c0db8b00           mov ecx, 0x8bdbc0
// 00481ffe  e8bdafffff           call 0x47cfc0
// 00482003  eb08                 jmp 0x48200d
// 00482005  8d4e0c               lea ecx, [esi + 0xc]
// 00482008  51                   push ecx
// 00482009  6a01                 push 1
// 0048200b  ffd0                 call eax
// 0048200d  8d4e10               lea ecx, [esi + 0x10]
// 00482010  c644241400           mov byte ptr [esp + 0x14], 0
// 00482015  ff15ace67700         call dword ptr [0x77e6ac]
// 0048201b  c70684797900         mov dword ptr [esi], 0x797984
// 00482021  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00482025  64890d00000000       mov dword ptr fs:[0], ecx
// 0048202c  59                   pop ecx
// 0048202d  5e                   pop esi
// 0048202e  83c410               add esp, 0x10
// 00482031  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??1Milestone@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
