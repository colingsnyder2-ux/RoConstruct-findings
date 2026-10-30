// roc 2009-12 00807eb0  unit: CXTPCommandBarsContextMenus  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807eb0
//
// 00807eb0  6aff                 push -1
// 00807eb2  68ad979500           push 0x9597ad
// 00807eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00807ebd  50                   push eax
// 00807ebe  51                   push ecx
// 00807ebf  53                   push ebx
// 00807ec0  55                   push ebp
// 00807ec1  56                   push esi
// 00807ec2  57                   push edi
// 00807ec3  a10052b600           mov eax, dword ptr [0xb65200]
// 00807ec8  33c4                 xor eax, esp
// 00807eca  50                   push eax
// 00807ecb  8d442418             lea eax, [esp + 0x18]
// 00807ecf  64a300000000         mov dword ptr fs:[0], eax
// 00807ed5  8bf1                 mov esi, ecx
// 00807ed7  89742414             mov dword ptr [esp + 0x14], esi
// 00807edb  8d6e54               lea ebp, [esi + 0x54]
// 00807ede  c706842b9f00         mov dword ptr [esi], 0x9f2b84
// 00807ee4  c74500742b9f00       mov dword ptr [ebp], 0x9f2b74
// 00807eeb  c7465c142b9f00       mov dword ptr [esi + 0x5c], 0x9f2b14
// 00807ef2  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00807ef8  33db                 xor ebx, ebx
// 00807efa  c744242003000000     mov dword ptr [esp + 0x20], 3
// 00807f02  3bc3                 cmp eax, ebx
// 00807f04  7409                 je 0x807f0f
// 00807f06  53                   push ebx
// 00807f07  6a01                 push 1
// 00807f09  53                   push ebx
// 00807f0a  e871faffff           call 0x807980
// 00807f0f  55                   push ebp
// 00807f10  e8cb890600           call 0x8708e0
// 00807f15  8bc8                 mov ecx, eax
// 00807f17  e8f48d0600           call 0x870d10
// 00807f1c  68b0647f00           push 0x7f64b0
// 00807f21  b9d0bab900           mov ecx, 0xb9bad0
// 00807f26  e811e51100           call 0x92643c
// 00807f2b  33c9                 xor ecx, ecx
// 00807f2d  3bc3                 cmp eax, ebx
// 00807f2f  0f95c1               setne cl
// 00807f32  3bcb                 cmp ecx, ebx
// 00807f34  7505                 jne 0x807f3b
// 00807f36  e8d1bbfeff           call 0x7f3b0c
// 00807f3b  397020               cmp dword ptr [eax + 0x20], esi
// 00807f3e  7503                 jne 0x807f43
// 00807f40  895820               mov dword ptr [eax + 0x20], ebx
// 00807f43  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00807f49  3bcb                 cmp ecx, ebx
// 00807f4b  7426                 je 0x807f73
// 00807f4d  e88ed30300           call 0x8452e0
// 00807f52  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00807f58  53                   push ebx
// 00807f59  e862d30300           call 0x8452c0
// 00807f5e  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00807f64  3bcb                 cmp ecx, ebx
// 00807f66  740b                 je 0x807f73
// 00807f68  e86fbefeff           call 0x7f3ddc
// 00807f6d  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 00807f73  8b8e64010000         mov ecx, dword ptr [esi + 0x164]
// 00807f79  3bcb                 cmp ecx, ebx
// 00807f7b  740b                 je 0x807f88
// 00807f7d  e85abefeff           call 0x7f3ddc
// 00807f82  899e64010000         mov dword ptr [esi + 0x164], ebx
// 00807f88  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 00807f8e  3bcb                 cmp ecx, ebx
// 00807f90  740b                 je 0x807f9d
// 00807f92  e845befeff           call 0x7f3ddc
// 00807f97  899e68010000         mov dword ptr [esi + 0x168], ebx
// 00807f9d  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00807fa3  3bcb                 cmp ecx, ebx
// 00807fa5  740b                 je 0x807fb2
// 00807fa7  e830befeff           call 0x7f3ddc
// 00807fac  899e74010000         mov dword ptr [esi + 0x174], ebx
// 00807fb2  8bbe78010000         mov edi, dword ptr [esi + 0x178]
// 00807fb8  3bfb                 cmp edi, ebx
// 00807fba  7410                 je 0x807fcc
// 00807fbc  8bcf                 mov ecx, edi
// 00807fbe  e88d610800           call 0x88e150
// 00807fc3  57                   push edi
// 00807fc4  e891b8feff           call 0x7f385a
// 00807fc9  83c404               add esp, 4
// 00807fcc  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00807fd2  ff15c0de9800         call dword ptr [0x98dec0]
// 00807fd8  8d4e5c               lea ecx, [esi + 0x5c]
// 00807fdb  c644242001           mov byte ptr [esp + 0x20], 1
// 00807fe0  e85b440300           call 0x83c440
// 00807fe5  8bcd                 mov ecx, ebp
// 00807fe7  885c2420             mov byte ptr [esp + 0x20], bl
// 00807feb  e8c0840600           call 0x8704b0
// 00807ff0  8bce                 mov ecx, esi
// 00807ff2  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00807ffa  e817c3feff           call 0x7f4316
// 00807fff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00808003  64890d00000000       mov dword ptr fs:[0], ecx
// 0080800a  59                   pop ecx
// 0080800b  5f                   pop edi
// 0080800c  5e                   pop esi
// 0080800d  5d                   pop ebp
// 0080800e  5b                   pop ebx
// 0080800f  83c410               add esp, 0x10
// 00808012  c3                   ret 
// copied from an identical function in another client (function ??1CXTPCommandBar@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp