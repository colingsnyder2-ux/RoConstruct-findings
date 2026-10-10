// roc 2008-06 0075a810  unit: CXTPDockingPaneWindowSelect  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075a810
//
// 0075a810  56                   push esi
// 0075a811  8bf1                 mov esi, ecx
// 0075a813  e8b8f3f9ff           call 0x6f9bd0
// 0075a818  8d442408             lea eax, [esp + 8]
// 0075a81c  50                   push eax
// 0075a81d  56                   push esi
// 0075a81e  e89de1f9ff           call 0x6f89c0
// 0075a823  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075a827  83c408               add esp, 8
// 0075a82a  83f809               cmp eax, 9
// 0075a82d  0f85a4000000         jne 0x75a8d7
// 0075a833  6a10                 push 0x10
// 0075a835  ff15a42d8000         call dword ptr [0x802da4]
// 0075a83b  6685c0               test ax, ax
// 0075a83e  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0075a844  7c48                 jl 0x75a88e
// 0075a846  85c0                 test eax, eax
// 0075a848  7406                 je 0x75a850
// 0075a84a  8b4014               mov eax, dword ptr [eax + 0x14]
// 0075a84d  40                   inc eax
// 0075a84e  eb02                 jmp 0x75a852
// 0075a850  33c0                 xor eax, eax
// 0075a852  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 0075a858  3bc2                 cmp eax, edx
// 0075a85a  7c1c                 jl 0x75a878
// 0075a85c  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0075a862  8bc1                 mov eax, ecx
// 0075a864  2bc2                 sub eax, edx
// 0075a866  f7d8                 neg eax
// 0075a868  1bc0                 sbb eax, eax
// 0075a86a  23c1                 and eax, ecx
// 0075a86c  50                   push eax
// 0075a86d  8bce                 mov ecx, esi
// 0075a86f  e86cffffff           call 0x75a7e0
// 0075a874  5e                   pop esi
// 0075a875  c20c00               ret 0xc
// 0075a878  3b8630010000         cmp eax, dword ptr [esi + 0x130]
// 0075a87e  7502                 jne 0x75a882
// 0075a880  33c0                 xor eax, eax
// 0075a882  50                   push eax
// 0075a883  8bce                 mov ecx, esi
// 0075a885  e856ffffff           call 0x75a7e0
// 0075a88a  5e                   pop esi
// 0075a88b  c20c00               ret 0xc
// 0075a88e  85c0                 test eax, eax
// 0075a890  7405                 je 0x75a897
// 0075a892  8b4014               mov eax, dword ptr [eax + 0x14]
// 0075a895  eb06                 jmp 0x75a89d
// 0075a897  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0075a89d  48                   dec eax
// 0075a89e  85c0                 test eax, eax
// 0075a8a0  7d17                 jge 0x75a8b9
// 0075a8a2  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0075a8a8  85c0                 test eax, eax
// 0075a8aa  7418                 je 0x75a8c4
// 0075a8ac  48                   dec eax
// 0075a8ad  50                   push eax
// 0075a8ae  8bce                 mov ecx, esi
// 0075a8b0  e82bffffff           call 0x75a7e0
// 0075a8b5  5e                   pop esi
// 0075a8b6  c20c00               ret 0xc
// 0075a8b9  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0075a8bf  49                   dec ecx
// 0075a8c0  3bc1                 cmp eax, ecx
// 0075a8c2  7507                 jne 0x75a8cb
// 0075a8c4  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0075a8ca  48                   dec eax
// 0075a8cb  50                   push eax
// 0075a8cc  8bce                 mov ecx, esi
// 0075a8ce  e80dffffff           call 0x75a7e0
// 0075a8d3  5e                   pop esi
// 0075a8d4  c20c00               ret 0xc
// 0075a8d7  57                   push edi
// 0075a8d8  83f825               cmp eax, 0x25
// 0075a8db  755d                 jne 0x75a93a
// 0075a8dd  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 0075a8e3  83ff01               cmp edi, 1
// 0075a8e6  0f8e19010000         jle 0x75aa05
// 0075a8ec  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0075a8f2  85c0                 test eax, eax
// 0075a8f4  0f840b010000         je 0x75aa05
// 0075a8fa  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0075a8fd  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0075a900  8d41ff               lea eax, [ecx - 1]
// 0075a903  85c9                 test ecx, ecx
// 0075a905  7f03                 jg 0x75a90a
// 0075a907  8d47ff               lea eax, [edi - 1]
// 0075a90a  85c0                 test eax, eax
// 0075a90c  7c27                 jl 0x75a935
// 0075a90e  3bc7                 cmp eax, edi
// 0075a910  7d23                 jge 0x75a935
// 0075a912  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0075a918  8d04c1               lea eax, [ecx + eax*8]
// 0075a91b  8b08                 mov ecx, dword ptr [eax]
// 0075a91d  8b4004               mov eax, dword ptr [eax + 4]
// 0075a920  03ca                 add ecx, edx
// 0075a922  3bc8                 cmp ecx, eax
// 0075a924  7f02                 jg 0x75a928
// 0075a926  8bc1                 mov eax, ecx
// 0075a928  50                   push eax
// 0075a929  8bce                 mov ecx, esi
// 0075a92b  e8b0feffff           call 0x75a7e0
// 0075a930  5f                   pop edi
// 0075a931  5e                   pop esi
// 0075a932  c20c00               ret 0xc
// 0075a935  e80a60f4ff           call 0x6a0944
// 0075a93a  83f827               cmp eax, 0x27
// 0075a93d  7556                 jne 0x75a995
// 0075a93f  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 0075a945  83fa01               cmp edx, 1
// 0075a948  0f8eb7000000         jle 0x75aa05
// 0075a94e  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0075a954  85c0                 test eax, eax
// 0075a956  0f84a9000000         je 0x75aa05
// 0075a95c  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0075a95f  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0075a962  4a                   dec edx
// 0075a963  3bca                 cmp ecx, edx
// 0075a965  7d05                 jge 0x75a96c
// 0075a967  8d4101               lea eax, [ecx + 1]
// 0075a96a  eb02                 jmp 0x75a96e
// 0075a96c  33c0                 xor eax, eax
// 0075a96e  50                   push eax
// 0075a96f  8d8e10010000         lea ecx, [esi + 0x110]
// 0075a975  e816ebffff           call 0x759490
// 0075a97a  8b10                 mov edx, dword ptr [eax]
// 0075a97c  8b4004               mov eax, dword ptr [eax + 4]
// 0075a97f  8d0c3a               lea ecx, [edx + edi]
// 0075a982  3bc8                 cmp ecx, eax
// 0075a984  7f02                 jg 0x75a988
// 0075a986  8bc1                 mov eax, ecx
// 0075a988  50                   push eax
// 0075a989  8bce                 mov ecx, esi
// 0075a98b  e850feffff           call 0x75a7e0
// 0075a990  5f                   pop edi
// 0075a991  5e                   pop esi
// 0075a992  c20c00               ret 0xc
// 0075a995  83f828               cmp eax, 0x28
// 0075a998  752d                 jne 0x75a9c7
// 0075a99a  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0075a9a0  85c0                 test eax, eax
// 0075a9a2  7406                 je 0x75a9aa
// 0075a9a4  8b4014               mov eax, dword ptr [eax + 0x14]
// 0075a9a7  40                   inc eax
// 0075a9a8  eb02                 jmp 0x75a9ac
// 0075a9aa  33c0                 xor eax, eax
// 0075a9ac  33c9                 xor ecx, ecx
// 0075a9ae  3b8604010000         cmp eax, dword ptr [esi + 0x104]
// 0075a9b4  0f9dc1               setge cl
// 0075a9b7  49                   dec ecx
// 0075a9b8  23c8                 and ecx, eax
// 0075a9ba  51                   push ecx
// 0075a9bb  8bce                 mov ecx, esi
// 0075a9bd  e81efeffff           call 0x75a7e0
// 0075a9c2  5f                   pop edi
// 0075a9c3  5e                   pop esi
// 0075a9c4  c20c00               ret 0xc
// 0075a9c7  83f826               cmp eax, 0x26
// 0075a9ca  7526                 jne 0x75a9f2
// 0075a9cc  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0075a9d2  85c0                 test eax, eax
// 0075a9d4  7408                 je 0x75a9de
// 0075a9d6  8b4014               mov eax, dword ptr [eax + 0x14]
// 0075a9d9  83e801               sub eax, 1
// 0075a9dc  7907                 jns 0x75a9e5
// 0075a9de  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0075a9e4  48                   dec eax
// 0075a9e5  50                   push eax
// 0075a9e6  8bce                 mov ecx, esi
// 0075a9e8  e8f3fdffff           call 0x75a7e0
// 0075a9ed  5f                   pop edi
// 0075a9ee  5e                   pop esi
// 0075a9ef  c20c00               ret 0xc
// 0075a9f2  83f810               cmp eax, 0x10
// 0075a9f5  740e                 je 0x75aa05
// 0075a9f7  8b16                 mov edx, dword ptr [esi]
// 0075a9f9  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 0075a9ff  6a01                 push 1
// 0075aa01  8bce                 mov ecx, esi
// 0075aa03  ffd0                 call eax
// 0075aa05  5f                   pop edi
// 0075aa06  5e                   pop esi
// 0075aa07  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnKeyDown@CXTPDockingPaneWindowSelect@@QAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
