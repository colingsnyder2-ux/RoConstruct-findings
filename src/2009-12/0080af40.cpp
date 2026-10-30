// roc 2009-12 0080af40  unit: CXTPImageManagerResource::CBitmapDC  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080af40
//
// 0080af40  6aff                 push -1
// 0080af42  6868989500           push 0x959868
// 0080af47  64a100000000         mov eax, dword ptr fs:[0]
// 0080af4d  50                   push eax
// 0080af4e  83ec10               sub esp, 0x10
// 0080af51  53                   push ebx
// 0080af52  55                   push ebp
// 0080af53  56                   push esi
// 0080af54  57                   push edi
// 0080af55  a10052b600           mov eax, dword ptr [0xb65200]
// 0080af5a  33c4                 xor eax, esp
// 0080af5c  50                   push eax
// 0080af5d  8d442424             lea eax, [esp + 0x24]
// 0080af61  64a300000000         mov dword ptr fs:[0], eax
// 0080af67  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0080af6b  8bcd                 mov ecx, ebp
// 0080af6d  e87c94feff           call 0x7f43ee
// 0080af72  8bd8                 mov ebx, eax
// 0080af74  85db                 test ebx, ebx
// 0080af76  0f861f010000         jbe 0x80b09b
// 0080af7c  8b3d78b79800         mov edi, dword ptr [0x98b778]
// 0080af82  53                   push ebx
// 0080af83  ffd7                 call edi
// 0080af85  83c404               add esp, 4
// 0080af88  8bf0                 mov esi, eax
// 0080af8a  53                   push ebx
// 0080af8b  56                   push esi
// 0080af8c  8bcd                 mov ecx, ebp
// 0080af8e  e84394feff           call 0x7f43d6
// 0080af93  8bcd                 mov ecx, ebp
// 0080af95  e85494feff           call 0x7f43ee
// 0080af9a  8bd8                 mov ebx, eax
// 0080af9c  53                   push ebx
// 0080af9d  ffd7                 call edi
// 0080af9f  83c404               add esp, 4
// 0080afa2  8bf8                 mov edi, eax
// 0080afa4  53                   push ebx
// 0080afa5  57                   push edi
// 0080afa6  8bcd                 mov ecx, ebp
// 0080afa8  e82994feff           call 0x7f43d6
// 0080afad  33ed                 xor ebp, ebp
// 0080afaf  3bf5                 cmp esi, ebp
// 0080afb1  0f84ca000000         je 0x80b081
// 0080afb7  3bdd                 cmp ebx, ebp
// 0080afb9  0f84c2000000         je 0x80b081
// 0080afbf  8d4c2414             lea ecx, [esp + 0x14]
// 0080afc3  e8e6b41100           call 0x9264ae
// 0080afc8  55                   push ebp
// 0080afc9  896c2430             mov dword ptr [esp + 0x30], ebp
// 0080afcd  ff1554b19800         call dword ptr [0x98b154]
// 0080afd3  50                   push eax
// 0080afd4  8d4c2418             lea ecx, [esp + 0x18]
// 0080afd8  e8bfb41100           call 0x92649c
// 0080afdd  396e14               cmp dword ptr [esi + 0x14], ebp
// 0080afe0  7503                 jne 0x80afe5
// 0080afe2  895e14               mov dword ptr [esi + 0x14], ebx
// 0080afe5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080afe9  55                   push ebp
// 0080afea  55                   push ebp
// 0080afeb  8d44243c             lea eax, [esp + 0x3c]
// 0080afef  50                   push eax
// 0080aff0  55                   push ebp
// 0080aff1  56                   push esi
// 0080aff2  51                   push ecx
// 0080aff3  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0080aff7  ff1560b19800         call dword ptr [0x98b160]
// 0080affd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080b001  8be8                 mov ebp, eax
// 0080b003  85c9                 test ecx, ecx
// 0080b005  7451                 je 0x80b058
// 0080b007  85ed                 test ebp, ebp
// 0080b009  744d                 je 0x80b058
// 0080b00b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0080b00e  3bd8                 cmp ebx, eax
// 0080b010  7202                 jb 0x80b014
// 0080b012  8bd8                 mov ebx, eax
// 0080b014  53                   push ebx
// 0080b015  57                   push edi
// 0080b016  51                   push ecx
// 0080b017  e8f4d5ffff           call 0x808610
// 0080b01c  8b1d40b79800         mov ebx, dword ptr [0x98b740]
// 0080b022  83c40c               add esp, 0xc
// 0080b025  85ff                 test edi, edi
// 0080b027  7406                 je 0x80b02f
// 0080b029  57                   push edi
// 0080b02a  ffd3                 call ebx
// 0080b02c  83c404               add esp, 4
// 0080b02f  56                   push esi
// 0080b030  ffd3                 call ebx
// 0080b032  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0080b036  83c404               add esp, 4
// 0080b039  85c0                 test eax, eax
// 0080b03b  7406                 je 0x80b043
// 0080b03d  8b542434             mov edx, dword ptr [esp + 0x34]
// 0080b041  8910                 mov dword ptr [eax], edx
// 0080b043  8d4c2414             lea ecx, [esp + 0x14]
// 0080b047  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0080b04f  e854b41100           call 0x9264a8
// 0080b054  8bc5                 mov eax, ebp
// 0080b056  eb45                 jmp 0x80b09d
// 0080b058  8b1d40b79800         mov ebx, dword ptr [0x98b740]
// 0080b05e  85ff                 test edi, edi
// 0080b060  7406                 je 0x80b068
// 0080b062  57                   push edi
// 0080b063  ffd3                 call ebx
// 0080b065  83c404               add esp, 4
// 0080b068  56                   push esi
// 0080b069  ffd3                 call ebx
// 0080b06b  83c404               add esp, 4
// 0080b06e  8d4c2414             lea ecx, [esp + 0x14]
// 0080b072  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0080b07a  e829b41100           call 0x9264a8
// 0080b07f  eb1a                 jmp 0x80b09b
// 0080b081  8b1d40b79800         mov ebx, dword ptr [0x98b740]
// 0080b087  3bfd                 cmp edi, ebp
// 0080b089  7406                 je 0x80b091
// 0080b08b  57                   push edi
// 0080b08c  ffd3                 call ebx
// 0080b08e  83c404               add esp, 4
// 0080b091  3bf5                 cmp esi, ebp
// 0080b093  7406                 je 0x80b09b
// 0080b095  56                   push esi
// 0080b096  ffd3                 call ebx
// 0080b098  83c404               add esp, 4
// 0080b09b  33c0                 xor eax, eax
// 0080b09d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080b0a1  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b0a8  59                   pop ecx
// 0080b0a9  5f                   pop edi
// 0080b0aa  5e                   pop esi
// 0080b0ab  5d                   pop ebp
// 0080b0ac  5b                   pop ebx
// 0080b0ad  83c41c               add esp, 0x1c
// 0080b0b0  c20800               ret 8
// copied from an identical function in another client (function ?ReadDIBBitmap@CXTPImageManagerIcon@@AAEPAUHBITMAP__@@AAVCArchive@@PAPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp