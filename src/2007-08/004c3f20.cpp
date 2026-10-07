// roc 2007-08 004c3f20  unit: RakPeer  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c3f20
//
// 004c3f20  56                   push esi
// 004c3f21  8bf1                 mov esi, ecx
// 004c3f23  8b06                 mov eax, dword ptr [esi]
// 004c3f25  85c0                 test eax, eax
// 004c3f27  6a0c                 push 0xc
// 004c3f29  752f                 jne 0x4c3f5a
// 004c3f2b  e8c6bf1600           call 0x62fef6
// 004c3f30  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c3f34  894604               mov dword ptr [esi + 4], eax
// 004c3f37  8b11                 mov edx, dword ptr [ecx]
// 004c3f39  8910                 mov dword ptr [eax], edx
// 004c3f3b  8b4604               mov eax, dword ptr [esi + 4]
// 004c3f3e  894008               mov dword ptr [eax + 8], eax
// 004c3f41  8b4604               mov eax, dword ptr [esi + 4]
// 004c3f44  894004               mov dword ptr [eax + 4], eax
// 004c3f47  8b4604               mov eax, dword ptr [esi + 4]
// 004c3f4a  83c404               add esp, 4
// 004c3f4d  c70601000000         mov dword ptr [esi], 1
// 004c3f53  894608               mov dword ptr [esi + 8], eax
// 004c3f56  5e                   pop esi
// 004c3f57  c20400               ret 4
// 004c3f5a  83f801               cmp eax, 1
// 004c3f5d  7547                 jne 0x4c3fa6
// 004c3f5f  e892bf1600           call 0x62fef6
// 004c3f64  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c3f67  894608               mov dword ptr [esi + 8], eax
// 004c3f6a  894108               mov dword ptr [ecx + 8], eax
// 004c3f6d  8b5604               mov edx, dword ptr [esi + 4]
// 004c3f70  8b4608               mov eax, dword ptr [esi + 8]
// 004c3f73  894204               mov dword ptr [edx + 4], eax
// 004c3f76  8b5604               mov edx, dword ptr [esi + 4]
// 004c3f79  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c3f7c  895104               mov dword ptr [ecx + 4], edx
// 004c3f7f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c3f82  8b4608               mov eax, dword ptr [esi + 8]
// 004c3f85  894808               mov dword ptr [eax + 8], ecx
// 004c3f88  8b5608               mov edx, dword ptr [esi + 8]
// 004c3f8b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c3f8f  8b08                 mov ecx, dword ptr [eax]
// 004c3f91  890a                 mov dword ptr [edx], ecx
// 004c3f93  8b5608               mov edx, dword ptr [esi + 8]
// 004c3f96  83c404               add esp, 4
// 004c3f99  895604               mov dword ptr [esi + 4], edx
// 004c3f9c  c70602000000         mov dword ptr [esi], 2
// 004c3fa2  5e                   pop esi
// 004c3fa3  c20400               ret 4
// 004c3fa6  e84bbf1600           call 0x62fef6
// 004c3fab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c3faf  8b11                 mov edx, dword ptr [ecx]
// 004c3fb1  8910                 mov dword ptr [eax], edx
// 004c3fb3  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c3fb6  8b5104               mov edx, dword ptr [ecx + 4]
// 004c3fb9  894208               mov dword ptr [edx + 8], eax
// 004c3fbc  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c3fbf  8b5104               mov edx, dword ptr [ecx + 4]
// 004c3fc2  895004               mov dword ptr [eax + 4], edx
// 004c3fc5  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c3fc8  894104               mov dword ptr [ecx + 4], eax
// 004c3fcb  8b5608               mov edx, dword ptr [esi + 8]
// 004c3fce  895008               mov dword ptr [eax + 8], edx
// 004c3fd1  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c3fd4  83c404               add esp, 4
// 004c3fd7  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004c3fda  7506                 jne 0x4c3fe2
// 004c3fdc  894604               mov dword ptr [esi + 4], eax
// 004c3fdf  894608               mov dword ptr [esi + 8], eax
// 004c3fe2  830601               add dword ptr [esi], 1
// 004c3fe5  5e                   pop esi
// 004c3fe6  c20400               ret 4
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Insert@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXABQAUHuffmanEncodingTreeNode@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
