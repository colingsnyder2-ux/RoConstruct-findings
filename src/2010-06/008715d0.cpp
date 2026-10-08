// roc 2010-06 008715d0  unit: CXTPDockingPaneContext  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008715d0
//
// 008715d0  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008715d6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008715da  83ec10               sub esp, 0x10
// 008715dd  55                   push ebp
// 008715de  56                   push esi
// 008715df  8bb0c8000000         mov esi, dword ptr [eax + 0xc8]
// 008715e5  57                   push edi
// 008715e6  51                   push ecx
// 008715e7  8d4c2410             lea ecx, [esp + 0x10]
// 008715eb  e8c0dcf8ff           call 0x7ff2b0
// 008715f0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008715f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008715f8  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008715fb  2bd6                 sub edx, esi
// 008715fd  3bea                 cmp ebp, edx
// 008715ff  0f8cfd000000         jl 0x871702
// 00871605  8b4704               mov eax, dword ptr [edi + 4]
// 00871608  53                   push ebx
// 00871609  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0087160d  8d0c33               lea ecx, [ebx + esi]
// 00871610  3bc1                 cmp eax, ecx
// 00871612  0f8fe9000000         jg 0x871701
// 00871618  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087161c  8b4f08               mov ecx, dword ptr [edi + 8]
// 0087161f  2bd6                 sub edx, esi
// 00871621  3bca                 cmp ecx, edx
// 00871623  0f8cd8000000         jl 0x871701
// 00871629  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087162d  8b0f                 mov ecx, dword ptr [edi]
// 0087162f  03d6                 add edx, esi
// 00871631  3bca                 cmp ecx, edx
// 00871633  0f8fc8000000         jg 0x871701
// 00871639  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087163d  2bc3                 sub eax, ebx
// 0087163f  99                   cdq 
// 00871640  33c2                 xor eax, edx
// 00871642  2bc2                 sub eax, edx
// 00871644  3bc6                 cmp eax, esi
// 00871646  7d12                 jge 0x87165a
// 00871648  83f903               cmp ecx, 3
// 0087164b  740a                 je 0x871657
// 0087164d  83f904               cmp ecx, 4
// 00871650  7405                 je 0x871657
// 00871652  83f905               cmp ecx, 5
// 00871655  7503                 jne 0x87165a
// 00871657  895f04               mov dword ptr [edi + 4], ebx
// 0087165a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0087165e  8bc5                 mov eax, ebp
// 00871660  2bc3                 sub eax, ebx
// 00871662  99                   cdq 
// 00871663  33c2                 xor eax, edx
// 00871665  2bc2                 sub eax, edx
// 00871667  3bc6                 cmp eax, esi
// 00871669  7d12                 jge 0x87167d
// 0087166b  83f906               cmp ecx, 6
// 0087166e  740a                 je 0x87167a
// 00871670  83f907               cmp ecx, 7
// 00871673  7405                 je 0x87167a
// 00871675  83f908               cmp ecx, 8
// 00871678  7503                 jne 0x87167d
// 0087167a  895f0c               mov dword ptr [edi + 0xc], ebx
// 0087167d  8b07                 mov eax, dword ptr [edi]
// 0087167f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00871683  2bc3                 sub eax, ebx
// 00871685  99                   cdq 
// 00871686  33c2                 xor eax, edx
// 00871688  2bc2                 sub eax, edx
// 0087168a  3bc6                 cmp eax, esi
// 0087168c  7d11                 jge 0x87169f
// 0087168e  83f901               cmp ecx, 1
// 00871691  740a                 je 0x87169d
// 00871693  83f904               cmp ecx, 4
// 00871696  7405                 je 0x87169d
// 00871698  83f907               cmp ecx, 7
// 0087169b  7502                 jne 0x87169f
// 0087169d  891f                 mov dword ptr [edi], ebx
// 0087169f  8b07                 mov eax, dword ptr [edi]
// 008716a1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008716a5  2bc5                 sub eax, ebp
// 008716a7  99                   cdq 
// 008716a8  33c2                 xor eax, edx
// 008716aa  2bc2                 sub eax, edx
// 008716ac  3bc6                 cmp eax, esi
// 008716ae  7d11                 jge 0x8716c1
// 008716b0  83f901               cmp ecx, 1
// 008716b3  740a                 je 0x8716bf
// 008716b5  83f904               cmp ecx, 4
// 008716b8  7405                 je 0x8716bf
// 008716ba  83f907               cmp ecx, 7
// 008716bd  7502                 jne 0x8716c1
// 008716bf  892f                 mov dword ptr [edi], ebp
// 008716c1  8b4708               mov eax, dword ptr [edi + 8]
// 008716c4  2bc3                 sub eax, ebx
// 008716c6  99                   cdq 
// 008716c7  33c2                 xor eax, edx
// 008716c9  2bc2                 sub eax, edx
// 008716cb  3bc6                 cmp eax, esi
// 008716cd  7d12                 jge 0x8716e1
// 008716cf  83f902               cmp ecx, 2
// 008716d2  740a                 je 0x8716de
// 008716d4  83f905               cmp ecx, 5
// 008716d7  7405                 je 0x8716de
// 008716d9  83f908               cmp ecx, 8
// 008716dc  7503                 jne 0x8716e1
// 008716de  895f08               mov dword ptr [edi + 8], ebx
// 008716e1  8b4708               mov eax, dword ptr [edi + 8]
// 008716e4  2bc5                 sub eax, ebp
// 008716e6  99                   cdq 
// 008716e7  33c2                 xor eax, edx
// 008716e9  2bc2                 sub eax, edx
// 008716eb  3bc6                 cmp eax, esi
// 008716ed  7d12                 jge 0x871701
// 008716ef  83f902               cmp ecx, 2
// 008716f2  740a                 je 0x8716fe
// 008716f4  83f905               cmp ecx, 5
// 008716f7  7405                 je 0x8716fe
// 008716f9  83f908               cmp ecx, 8
// 008716fc  7503                 jne 0x871701
// 008716fe  896f08               mov dword ptr [edi + 8], ebp
// 00871701  5b                   pop ebx
// 00871702  5f                   pop edi
// 00871703  5e                   pop esi
// 00871704  5d                   pop ebp
// 00871705  83c410               add esp, 0x10
// 00871708  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateSizingStickyFrame@CXTPDockingPaneContext@@IAEXIAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
