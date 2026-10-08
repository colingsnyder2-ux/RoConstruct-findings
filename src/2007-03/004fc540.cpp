// roc 2007-03 004fc540  unit: seg_004f0000  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fc540
//
// 004fc540  8b542404             mov edx, dword ptr [esp + 4]
// 004fc544  53                   push ebx
// 004fc545  56                   push esi
// 004fc546  8bf1                 mov esi, ecx
// 004fc548  8b5e04               mov ebx, dword ptr [esi + 4]
// 004fc54b  3bd3                 cmp edx, ebx
// 004fc54d  57                   push edi
// 004fc54e  895604               mov dword ptr [esi + 4], edx
// 004fc551  7d1f                 jge 0x4fc572
// 004fc553  8d04d2               lea eax, [edx + edx*8]
// 004fc556  03c0                 add eax, eax
// 004fc558  8bcb                 mov ecx, ebx
// 004fc55a  03c0                 add eax, eax
// 004fc55c  2bca                 sub ecx, edx
// 004fc55e  8bff                 mov edi, edi
// 004fc560  8b3e                 mov edi, dword ptr [esi]
// 004fc562  c74438103cfd7900     mov dword ptr [eax + edi + 0x10], 0x79fd3c
// 004fc56a  83c024               add eax, 0x24
// 004fc56d  83e901               sub ecx, 1
// 004fc570  75ee                 jne 0x4fc560
// 004fc572  f60578ae8b0001       test byte ptr [0x8bae78], 1
// 004fc579  55                   push ebp
// 004fc57a  7514                 jne 0x4fc590
// 004fc57c  830d78ae8b0001       or dword ptr [0x8bae78], 1
// 004fc583  bd0a000000           mov ebp, 0xa
// 004fc588  892d74ae8b00         mov dword ptr [0x8bae74], ebp
// 004fc58e  eb06                 jmp 0x4fc596
// 004fc590  8b2d74ae8b00         mov ebp, dword ptr [0x8bae74]
// 004fc596  8b7e04               mov edi, dword ptr [esi + 4]
// 004fc599  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fc59c  3bf9                 cmp edi, ecx
// 004fc59e  7e77                 jle 0x4fc617
// 004fc5a0  85c9                 test ecx, ecx
// 004fc5a2  7509                 jne 0x4fc5ad
// 004fc5a4  895608               mov dword ptr [esi + 8], edx
// 004fc5a7  53                   push ebx
// 004fc5a8  e98e000000           jmp 0x4fc63b
// 004fc5ad  3bfd                 cmp edi, ebp
// 004fc5af  7d09                 jge 0x4fc5ba
// 004fc5b1  896e08               mov dword ptr [esi + 8], ebp
// 004fc5b4  53                   push ebx
// 004fc5b5  e981000000           jmp 0x4fc63b
// 004fc5ba  d905104c7900         fld dword ptr [0x794c10]
// 004fc5c0  8bc1                 mov eax, ecx
// 004fc5c2  8d04c0               lea eax, [eax + eax*8]
// 004fc5c5  d95c2418             fstp dword ptr [esp + 0x18]
// 004fc5c9  03c0                 add eax, eax
// 004fc5cb  03c0                 add eax, eax
// 004fc5cd  3d801a0600           cmp eax, 0x61a80
// 004fc5d2  7608                 jbe 0x4fc5dc
// 004fc5d4  d9050c4c7900         fld dword ptr [0x794c0c]
// 004fc5da  eb0d                 jmp 0x4fc5e9
// 004fc5dc  3d00fa0000           cmp eax, 0xfa00
// 004fc5e1  760a                 jbe 0x4fc5ed
// 004fc5e3  d905084c7900         fld dword ptr [0x794c08]
// 004fc5e9  d95c2418             fstp dword ptr [esp + 0x18]
// 004fc5ed  8be9                 mov ebp, ecx
// 004fc5ef  896c2414             mov dword ptr [esp + 0x14], ebp
// 004fc5f3  db442414             fild dword ptr [esp + 0x14]
// 004fc5f7  d84c2418             fmul dword ptr [esp + 0x18]
// 004fc5fb  e8002c1200           call 0x61f200
// 004fc600  2bc5                 sub eax, ebp
// 004fc602  03c7                 add eax, edi
// 004fc604  894608               mov dword ptr [esi + 8], eax
// 004fc607  8b0d74ae8b00         mov ecx, dword ptr [0x8bae74]
// 004fc60d  3bc1                 cmp eax, ecx
// 004fc60f  7d03                 jge 0x4fc614
// 004fc611  894e08               mov dword ptr [esi + 8], ecx
// 004fc614  53                   push ebx
// 004fc615  eb24                 jmp 0x4fc63b
// 004fc617  b856555555           mov eax, 0x55555556
// 004fc61c  f7e9                 imul ecx
// 004fc61e  8bc2                 mov eax, edx
// 004fc620  c1e81f               shr eax, 0x1f
// 004fc623  03c2                 add eax, edx
// 004fc625  3bf8                 cmp edi, eax
// 004fc627  7f19                 jg 0x4fc642
// 004fc629  807c241800           cmp byte ptr [esp + 0x18], 0
// 004fc62e  7412                 je 0x4fc642
// 004fc630  3bfd                 cmp edi, ebp
// 004fc632  7e0e                 jle 0x4fc642
// 004fc634  3bfb                 cmp edi, ebx
// 004fc636  7c02                 jl 0x4fc63a
// 004fc638  8bfb                 mov edi, ebx
// 004fc63a  57                   push edi
// 004fc63b  8bce                 mov ecx, esi
// 004fc63d  e80efcffff           call 0x4fc250
// 004fc642  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004fc645  8bfb                 mov edi, ebx
// 004fc647  5d                   pop ebp
// 004fc648  7d6f                 jge 0x4fc6b9
// 004fc64a  d9ee                 fldz 
// 004fc64c  8d0cdb               lea ecx, [ebx + ebx*8]
// 004fc64f  d9e8                 fld1 
// 004fc651  03c9                 add ecx, ecx
// 004fc653  03c9                 add ecx, ecx
// 004fc655  8b06                 mov eax, dword ptr [esi]
// 004fc657  03c1                 add eax, ecx
// 004fc659  744f                 je 0x4fc6aa
// 004fc65b  c740103cfd7900       mov dword ptr [eax + 0x10], 0x79fd3c
// 004fc662  f605c4a08b0001       test byte ptr [0x8ba0c4], 1
// 004fc669  751d                 jne 0x4fc688
// 004fc66b  830dc4a08b0001       or dword ptr [0x8ba0c4], 1
// 004fc672  d9c9                 fxch st(1)
// 004fc674  d915b8a08b00         fst dword ptr [0x8ba0b8]
// 004fc67a  d915c0a08b00         fst dword ptr [0x8ba0c0]
// 004fc680  d9c9                 fxch st(1)
// 004fc682  d915bca08b00         fst dword ptr [0x8ba0bc]
// 004fc688  d905b8a08b00         fld dword ptr [0x8ba0b8]
// 004fc68e  d95814               fstp dword ptr [eax + 0x14]
// 004fc691  d905bca08b00         fld dword ptr [0x8ba0bc]
// 004fc697  d95818               fstp dword ptr [eax + 0x18]
// 004fc69a  d905c0a08b00         fld dword ptr [0x8ba0c0]
// 004fc6a0  d9581c               fstp dword ptr [eax + 0x1c]
// 004fc6a3  d9c9                 fxch st(1)
// 004fc6a5  d95020               fst dword ptr [eax + 0x20]
// 004fc6a8  d9c9                 fxch st(1)
// 004fc6aa  83c701               add edi, 1
// 004fc6ad  83c124               add ecx, 0x24
// 004fc6b0  3b7e04               cmp edi, dword ptr [esi + 4]
// 004fc6b3  7ca0                 jl 0x4fc655
// 004fc6b5  ddd9                 fstp st(1)
// 004fc6b7  ddd8                 fstp st(0)
// 004fc6b9  5f                   pop edi
// 004fc6ba  5e                   pop esi
// 004fc6bb  5b                   pop ebx
// 004fc6bc  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?resize@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
