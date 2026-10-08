// from server: 100% by auto
// roc 2009-06 004acab0  unit: G3D::Win32Window  size: 370 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004acab0
//
// 004acab0  6aff                 push -1
// 004acab2  688e7e8500           push 0x857e8e
// 004acab7  64a100000000         mov eax, dword ptr fs:[0]
// 004acabd  50                   push eax
// 004acabe  64892500000000       mov dword ptr fs:[0], esp
// 004acac5  51                   push ecx
// 004acac6  53                   push ebx
// 004acac7  56                   push esi
// 004acac8  8bf1                 mov esi, ecx
// 004acaca  57                   push edi
// 004acacb  8974240c             mov dword ptr [esp + 0xc], esi
// 004acacf  c706cc248c00         mov dword ptr [esi], 0x8c24cc
// 004acad5  33db                 xor ebx, ebx
// 004acad7  c744241804000000     mov dword ptr [esp + 0x18], 4
// 004acadf  393588c8a300         cmp dword ptr [0xa3c888], esi
// 004acae5  7550                 jne 0x4acb37
// 004acae7  53                   push ebx
// 004acae8  53                   push ebx
// 004acae9  ff15bcea8900         call dword ptr [0x89eabc]
// 004acaef  389eec010000         cmp byte ptr [esi + 0x1ec], bl
// 004acaf5  7469                 je 0x4acb60
// 004acaf7  80beac00000001       cmp byte ptr [esi + 0xac], 1
// 004acafe  895e14               mov dword ptr [esi + 0x14], ebx
// 004acb01  741c                 je 0x4acb1f
// 004acb03  8b3d7ced8900         mov edi, dword ptr [0x89ed7c]
// 004acb09  8da42400000000       lea esp, [esp]
// 004acb10  6a01                 push 1
// 004acb12  ffd7                 call edi
// 004acb14  85c0                 test eax, eax
// 004acb16  7cf8                 jl 0x4acb10
// 004acb18  c686ac00000001       mov byte ptr [esi + 0xac], 1
// 004acb1f  895e10               mov dword ptr [esi + 0x10], ebx
// 004acb22  389ead000000         cmp byte ptr [esi + 0xad], bl
// 004acb28  740d                 je 0x4acb37
// 004acb2a  53                   push ebx
// 004acb2b  889ead000000         mov byte ptr [esi + 0xad], bl
// 004acb31  ff1578ed8900         call dword ptr [0x89ed78]
// 004acb37  389eec010000         cmp byte ptr [esi + 0x1ec], bl
// 004acb3d  7421                 je 0x4acb60
// 004acb3f  8b86e8010000         mov eax, dword ptr [esi + 0x1e8]
// 004acb45  53                   push ebx
// 004acb46  6aeb                 push -0x15
// 004acb48  50                   push eax
// 004acb49  ff1534ed8900         call dword ptr [0x89ed34]
// 004acb4f  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 004acb55  53                   push ebx
// 004acb56  53                   push ebx
// 004acb57  6a10                 push 0x10
// 004acb59  51                   push ecx
// 004acb5a  ff159cee8900         call dword ptr [0x89ee9c]
// 004acb60  8bbeb4010000         mov edi, dword ptr [esi + 0x1b4]
// 004acb66  3bfb                 cmp edi, ebx
// 004acb68  7411                 je 0x4acb7b
// 004acb6a  8d4f04               lea ecx, [edi + 4]
// 004acb6d  e80edfffff           call 0x4aaa80
// 004acb72  57                   push edi
// 004acb73  e8babe2600           call 0x718a32
// 004acb78  83c404               add esp, 4
// 004acb7b  8b96d8010000         mov edx, dword ptr [esi + 0x1d8]
// 004acb81  52                   push edx
// 004acb82  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004acb87  e804e70b00           call 0x56b290
// 004acb8c  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 004acb92  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 004acb98  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 004acb9e  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 004acba4  c786b8010000b4228c00 mov dword ptr [esi + 0x1b8], 0x8c22b4
// 004acbae  83c404               add esp, 4
// 004acbb1  c644241802           mov byte ptr [esp + 0x18], 2
// 004acbb6  c701a8208c00         mov dword ptr [ecx], 0x8c20a8
// 004acbbc  e88fe53900           call 0x84b150
// 004acbc1  8d8e88000000         lea ecx, [esi + 0x88]
// 004acbc7  c644241801           mov byte ptr [esp + 0x18], 1
// 004acbcc  ff15c4e48900         call dword ptr [0x89e4c4]
// 004acbd2  8d4e68               lea ecx, [esi + 0x68]
// 004acbd5  885c2418             mov byte ptr [esp + 0x18], bl
// 004acbd9  ff15c4e48900         call dword ptr [0x89e4c4]
// 004acbdf  c706b4208c00         mov dword ptr [esi], 0x8c20b4
// 004acbe5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004acbed  393588c8a300         cmp dword ptr [0xa3c888], esi
// 004acbf3  7506                 jne 0x4acbfb
// 004acbf5  891d88c8a300         mov dword ptr [0xa3c888], ebx
// 004acbfb  8b4604               mov eax, dword ptr [esi + 4]
// 004acbfe  50                   push eax
// 004acbff  e88ce60b00           call 0x56b290
// 004acc04  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004acc08  83c404               add esp, 4
// 004acc0b  895e04               mov dword ptr [esi + 4], ebx
// 004acc0e  895e08               mov dword ptr [esi + 8], ebx
// 004acc11  895e0c               mov dword ptr [esi + 0xc], ebx
// 004acc14  5f                   pop edi
// 004acc15  5e                   pop esi
// 004acc16  5b                   pop ebx
// 004acc17  64890d00000000       mov dword ptr fs:[0], ecx
// 004acc1e  83c410               add esp, 0x10
// 004acc21  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1Win32Window@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
