// roc 2009-12 0086f210  unit: PAVCXTPCommandBar::?$CArray  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f210
//
// 0086f210  56                   push esi
// 0086f211  8b742408             mov esi, dword ptr [esp + 8]
// 0086f215  85f6                 test esi, esi
// 0086f217  747c                 je 0x86f295
// 0086f219  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086f21c  85d2                 test edx, edx
// 0086f21e  7475                 je 0x86f295
// 0086f220  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086f224  3d00020000           cmp eax, 0x200
// 0086f229  7747                 ja 0x86f272
// 0086f22b  7411                 je 0x86f23e
// 0086f22d  0560ffffff           add eax, 0xffffff60
// 0086f232  83f807               cmp eax, 7
// 0086f235  775e                 ja 0x86f295
// 0086f237  ff24859cf28600       jmp dword ptr [eax*4 + 0x86f29c]
// 0086f23e  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0086f245  7f4e                 jg 0x86f295
// 0086f247  8d442410             lea eax, [esp + 0x10]
// 0086f24b  50                   push eax
// 0086f24c  52                   push edx
// 0086f24d  ff1534cc9800         call dword ptr [0x98cc34]
// 0086f253  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086f257  8b542414             mov edx, dword ptr [esp + 0x14]
// 0086f25b  83ec08               sub esp, 8
// 0086f25e  8bc4                 mov eax, esp
// 0086f260  8908                 mov dword ptr [eax], ecx
// 0086f262  6a00                 push 0
// 0086f264  8bce                 mov ecx, esi
// 0086f266  895004               mov dword ptr [eax + 4], edx
// 0086f269  e8625bf9ff           call 0x804dd0
// 0086f26e  5e                   pop esi
// 0086f26f  c21000               ret 0x10
// 0086f272  05fffdffff           add eax, 0xfffffdff
// 0086f277  83f806               cmp eax, 6
// 0086f27a  7719                 ja 0x86f295
// 0086f27c  0fb690c8f28600       movzx edx, byte ptr [eax + 0x86f2c8]
// 0086f283  ff2495bcf28600       jmp dword ptr [edx*4 + 0x86f2bc]
// 0086f28a  83790400             cmp dword ptr [ecx + 4], 0
// 0086f28e  7f05                 jg 0x86f295
// 0086f290  e88bfeffff           call 0x86f120
// 0086f295  5e                   pop esi
// 0086f296  c21000               ret 0x10
// 0086f299  8d4900               lea ecx, [ecx]
// 0086f29c  3ef28600             xchg byte ptr ds:[eax], al
// 0086f2a0  90                   nop 
// 0086f2a1  f28600               xacquire xchg byte ptr [eax], al
// 0086f2a4  8af2                 mov dh, dl
// 0086f2a6  8600                 xchg byte ptr [eax], al
// 0086f2a8  95                   xchg ebp, eax
// 0086f2a9  f28600               xacquire xchg byte ptr [eax], al
// 0086f2ac  90                   nop 
// 0086f2ad  f28600               xacquire xchg byte ptr [eax], al
// 0086f2b0  95                   xchg ebp, eax
// 0086f2b1  f28600               xacquire xchg byte ptr [eax], al
// 0086f2b4  95                   xchg ebp, eax
// 0086f2b5  f28600               xacquire xchg byte ptr [eax], al
// 0086f2b8  90                   nop 
// 0086f2b9  f28600               xacquire xchg byte ptr [eax], al
// 0086f2bc  90                   nop 
// 0086f2bd  f28600               xacquire xchg byte ptr [eax], al
// 0086f2c0  8af2                 mov dh, dl
// 0086f2c2  8600                 xchg byte ptr [eax], al
// 0086f2c4  95                   xchg ebp, eax
// 0086f2c5  f28600               xacquire xchg byte ptr [eax], al
// 0086f2c8  0001                 add byte ptr [ecx], al
// 0086f2ca  0200                 add al, byte ptr [eax]
// 0086f2cc  0202                 add al, byte ptr [edx]
// copied from an identical function in another client (function ?DeliverMessage@CXTPMouseManager@@AAEXPAVCXTPCommandBar@@IUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMouseManager.cpp