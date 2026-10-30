// roc 2009-12 00816d40  unit: MyXTPCommandBars  size: 393 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816d40
//
// 00816d40  6aff                 push -1
// 00816d42  687aa69500           push 0x95a67a
// 00816d47  64a100000000         mov eax, dword ptr fs:[0]
// 00816d4d  50                   push eax
// 00816d4e  51                   push ecx
// 00816d4f  53                   push ebx
// 00816d50  55                   push ebp
// 00816d51  56                   push esi
// 00816d52  57                   push edi
// 00816d53  a10052b600           mov eax, dword ptr [0xb65200]
// 00816d58  33c4                 xor eax, esp
// 00816d5a  50                   push eax
// 00816d5b  8d442418             lea eax, [esp + 0x18]
// 00816d5f  64a300000000         mov dword ptr fs:[0], eax
// 00816d65  8bf1                 mov esi, ecx
// 00816d67  89742414             mov dword ptr [esp + 0x14], esi
// 00816d6b  c7066c3e9f00         mov dword ptr [esi], 0x9f3e6c
// 00816d71  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00816d74  33db                 xor ebx, ebx
// 00816d76  c744242003000000     mov dword ptr [esp + 0x20], 3
// 00816d7e  3bcb                 cmp ecx, ebx
// 00816d80  7408                 je 0x816d8a
// 00816d82  e855d0fdff           call 0x7f3ddc
// 00816d87  895e58               mov dword ptr [esi + 0x58], ebx
// 00816d8a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00816d8d  3bcb                 cmp ecx, ebx
// 00816d8f  7408                 je 0x816d99
// 00816d91  e846d0fdff           call 0x7f3ddc
// 00816d96  895e20               mov dword ptr [esi + 0x20], ebx
// 00816d99  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00816d9c  e87ff5feff           call 0x806320
// 00816da1  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00816da4  3bcb                 cmp ecx, ebx
// 00816da6  7408                 je 0x816db0
// 00816da8  e82fd0fdff           call 0x7f3ddc
// 00816dad  895e78               mov dword ptr [esi + 0x78], ebx
// 00816db0  8bce                 mov ecx, esi
// 00816db2  e8b9fcffff           call 0x816a70
// 00816db7  8dbe90000000         lea edi, [esi + 0x90]
// 00816dbd  bd04000000           mov ebp, 4
// 00816dc2  391f                 cmp dword ptr [edi], ebx
// 00816dc4  7418                 je 0x816dde
// 00816dc6  8b0f                 mov ecx, dword ptr [edi]
// 00816dc8  8b01                 mov eax, dword ptr [ecx]
// 00816dca  8b5068               mov edx, dword ptr [eax + 0x68]
// 00816dcd  ffd2                 call edx
// 00816dcf  8b0f                 mov ecx, dword ptr [edi]
// 00816dd1  3bcb                 cmp ecx, ebx
// 00816dd3  7409                 je 0x816dde
// 00816dd5  8b01                 mov eax, dword ptr [ecx]
// 00816dd7  8b5004               mov edx, dword ptr [eax + 4]
// 00816dda  6a01                 push 1
// 00816ddc  ffd2                 call edx
// 00816dde  83c704               add edi, 4
// 00816de1  83ed01               sub ebp, 1
// 00816de4  75dc                 jne 0x816dc2
// 00816de6  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 00816de9  3bfb                 cmp edi, ebx
// 00816deb  7410                 je 0x816dfd
// 00816ded  8bcf                 mov ecx, edi
// 00816def  e84c8f0500           call 0x86fd40
// 00816df4  57                   push edi
// 00816df5  e860cafdff           call 0x7f385a
// 00816dfa  83c404               add esp, 4
// 00816dfd  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 00816e00  3bcb                 cmp ecx, ebx
// 00816e02  7408                 je 0x816e0c
// 00816e04  e8d3cffdff           call 0x7f3ddc
// 00816e09  895e50               mov dword ptr [esi + 0x50], ebx
// 00816e0c  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00816e0f  3bcb                 cmp ecx, ebx
// 00816e11  7408                 je 0x816e1b
// 00816e13  e8c4cffdff           call 0x7f3ddc
// 00816e18  895e54               mov dword ptr [esi + 0x54], ebx
// 00816e1b  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 00816e21  3bcb                 cmp ecx, ebx
// 00816e23  740b                 je 0x816e30
// 00816e25  e8b2cffdff           call 0x7f3ddc
// 00816e2a  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 00816e30  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00816e36  3bcb                 cmp ecx, ebx
// 00816e38  740b                 je 0x816e45
// 00816e3a  e89dcffdff           call 0x7f3ddc
// 00816e3f  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 00816e45  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00816e48  3bcb                 cmp ecx, ebx
// 00816e4a  7408                 je 0x816e54
// 00816e4c  e88bcffdff           call 0x7f3ddc
// 00816e51  895e74               mov dword ptr [esi + 0x74], ebx
// 00816e54  e837950500           call 0x870390
// 00816e59  8bc8                 mov ecx, eax
// 00816e5b  e8a0940500           call 0x870300
// 00816e60  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00816e66  3bcb                 cmp ecx, ebx
// 00816e68  741a                 je 0x816e84
// 00816e6a  e8910ffeff           call 0x7f7e00
// 00816e6f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00816e75  3bcb                 cmp ecx, ebx
// 00816e77  740b                 je 0x816e84
// 00816e79  e85ecffdff           call 0x7f3ddc
// 00816e7e  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 00816e84  8d4e7c               lea ecx, [esi + 0x7c]
// 00816e87  c644242002           mov byte ptr [esp + 0x20], 2
// 00816e8c  e8afd8ffff           call 0x814740
// 00816e91  8d4e70               lea ecx, [esi + 0x70]
// 00816e94  ff15c0de9800         call dword ptr [0x98dec0]
// 00816e9a  8d4e2c               lea ecx, [esi + 0x2c]
// 00816e9d  885c2420             mov byte ptr [esp + 0x20], bl
// 00816ea1  e8fad8ffff           call 0x8147a0
// 00816ea6  8bce                 mov ecx, esi
// 00816ea8  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00816eb0  e82dd5fdff           call 0x7f43e2
// 00816eb5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00816eb9  64890d00000000       mov dword ptr fs:[0], ecx
// 00816ec0  59                   pop ecx
// 00816ec1  5f                   pop edi
// 00816ec2  5e                   pop esi
// 00816ec3  5d                   pop ebp
// 00816ec4  5b                   pop ebx
// 00816ec5  83c410               add esp, 0x10
// 00816ec8  c3                   ret 
// copied from an identical function in another client (function ??1CXTPCommandBars@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp