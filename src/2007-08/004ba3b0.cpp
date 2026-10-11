// from server: 100% by auto
// roc 2007-08 004ba3b0  unit: RakPeer  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba3b0
//
// 004ba3b0  6aff                 push -1
// 004ba3b2  681bb67400           push 0x74b61b
// 004ba3b7  64a100000000         mov eax, dword ptr fs:[0]
// 004ba3bd  50                   push eax
// 004ba3be  81ec28010000         sub esp, 0x128
// 004ba3c4  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ba3c9  33c4                 xor eax, esp
// 004ba3cb  89842424010000       mov dword ptr [esp + 0x124], eax
// 004ba3d2  53                   push ebx
// 004ba3d3  55                   push ebp
// 004ba3d4  56                   push esi
// 004ba3d5  57                   push edi
// 004ba3d6  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ba3db  33c4                 xor eax, esp
// 004ba3dd  50                   push eax
// 004ba3de  8d84243c010000       lea eax, [esp + 0x13c]
// 004ba3e5  64a300000000         mov dword ptr fs:[0], eax
// 004ba3eb  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 004ba3f2  33f6                 xor esi, esi
// 004ba3f4  3bde                 cmp ebx, esi
// 004ba3f6  8bf9                 mov edi, ecx
// 004ba3f8  0f8402010000         je 0x4ba500
// 004ba3fe  8a03                 mov al, byte ptr [ebx]
// 004ba400  3c30                 cmp al, 0x30
// 004ba402  7c04                 jl 0x4ba408
// 004ba404  3c32                 cmp al, 0x32
// 004ba406  7e0d                 jle 0x4ba415
// 004ba408  53                   push ebx
// 004ba409  b9e9ef8b00           mov ecx, 0x8befe9
// 004ba40e  e8eda20000           call 0x4c4700
// 004ba413  8bd8                 mov ebx, eax
// 004ba415  53                   push ebx
// 004ba416  8d4c2420             lea ecx, [esp + 0x20]
// 004ba41a  e87191feff           call 0x4a3590
// 004ba41f  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 004ba426  6a05                 push 5
// 004ba428  8d4c2428             lea ecx, [esp + 0x28]
// 004ba42c  66896c2424           mov word ptr [esp + 0x24], bp
// 004ba431  e81a54feff           call 0x49f850
// 004ba436  80bc245401000000     cmp byte ptr [esp + 0x154], 0
// 004ba43e  6a01                 push 1
// 004ba440  89b42448010000       mov dword ptr [esp + 0x148], esi
// 004ba447  6a08                 push 8
// 004ba449  740c                 je 0x4ba457
// 004ba44b  8d44241c             lea eax, [esp + 0x1c]
// 004ba44f  c644241c02           mov byte ptr [esp + 0x1c], 2
// 004ba454  50                   push eax
// 004ba455  eb0a                 jmp 0x4ba461
// 004ba457  8d4c241c             lea ecx, [esp + 0x1c]
// 004ba45b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004ba460  51                   push ecx
// 004ba461  8d4c2430             lea ecx, [esp + 0x30]
// 004ba465  e82659feff           call 0x49fd90
// 004ba46a  e801dbffff           call 0x4b7f70
// 004ba46f  6a01                 push 1
// 004ba471  6a20                 push 0x20
// 004ba473  8d542420             lea edx, [esp + 0x20]
// 004ba477  52                   push edx
// 004ba478  8d4c2430             lea ecx, [esp + 0x30]
// 004ba47c  89442424             mov dword ptr [esp + 0x24], eax
// 004ba480  e80b59feff           call 0x49fd90
// 004ba485  39b7ac020000         cmp dword ptr [edi + 0x2ac], esi
// 004ba48b  7632                 jbe 0x4ba4bf
// 004ba48d  8d4900               lea ecx, [ecx]
// 004ba490  8b87a8020000         mov eax, dword ptr [edi + 0x2a8]
// 004ba496  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 004ba499  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ba49d  8b11                 mov edx, dword ptr [ecx]
// 004ba49f  8b5220               mov edx, dword ptr [edx + 0x20]
// 004ba4a2  50                   push eax
// 004ba4a3  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ba4a7  50                   push eax
// 004ba4a8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004ba4ac  50                   push eax
// 004ba4ad  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004ba4b1  50                   push eax
// 004ba4b2  ffd2                 call edx
// 004ba4b4  83c601               add esi, 1
// 004ba4b7  3bb7ac020000         cmp esi, dword ptr [edi + 0x2ac]
// 004ba4bd  72d1                 jb 0x4ba490
// 004ba4bf  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ba4c3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004ba4c7  8b9714070000         mov edx, dword ptr [edi + 0x714]
// 004ba4cd  55                   push ebp
// 004ba4ce  83c007               add eax, 7
// 004ba4d1  53                   push ebx
// 004ba4d2  c1f803               sar eax, 3
// 004ba4d5  50                   push eax
// 004ba4d6  8b842464010000       mov eax, dword ptr [esp + 0x164]
// 004ba4dd  51                   push ecx
// 004ba4de  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004ba4e1  51                   push ecx
// 004ba4e2  b9e9ef8b00           mov ecx, 0x8befe9
// 004ba4e7  e8c4a30000           call 0x4c48b0
// 004ba4ec  8d4c2424             lea ecx, [esp + 0x24]
// 004ba4f0  c7842444010000ffffffff mov dword ptr [esp + 0x144], 0xffffffff
// 004ba4fb  e83054feff           call 0x49f930
// 004ba500  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 004ba507  64890d00000000       mov dword ptr fs:[0], ecx
// 004ba50e  59                   pop ecx
// 004ba50f  5f                   pop edi
// 004ba510  5e                   pop esi
// 004ba511  5d                   pop ebp
// 004ba512  5b                   pop ebx
// 004ba513  8b8c2424010000       mov ecx, dword ptr [esp + 0x124]
// 004ba51a  33cc                 xor ecx, esp
// 004ba51c  e8fd641700           call 0x630a1e
// 004ba521  81c434010000         add esp, 0x134
// 004ba527  c21000               ret 0x10

// from server: 31% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctltrack.cpp