// roc 2009-12 00813fa0  unit: CXTPToolBar  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00813fa0
//
// 00813fa0  8b442404             mov eax, dword ptr [esp + 4]
// 00813fa4  33d2                 xor edx, edx
// 00813fa6  83f801               cmp eax, 1
// 00813fa9  0f95c2               setne dl
// 00813fac  56                   push esi
// 00813fad  8bf1                 mov esi, ecx
// 00813faf  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00813fb5  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 00813fbb  c781c400000000000000 mov dword ptr [ecx + 0xc4], 0
// 00813fc5  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00813fcb  8991b0000000         mov dword ptr [ecx + 0xb0], edx
// 00813fd1  83f802               cmp eax, 2
// 00813fd4  7547                 jne 0x81401d
// 00813fd6  6a00                 push 0
// 00813fd8  8d54240c             lea edx, [esp + 0xc]
// 00813fdc  52                   push edx
// 00813fdd  6a00                 push 0
// 00813fdf  680a100000           push 0x100a
// 00813fe4  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00813fec  ff1500cc9800         call dword ptr [0x98cc00]
// 00813ff2  85c0                 test eax, eax
// 00813ff4  7427                 je 0x81401d
// 00813ff6  837c240800           cmp dword ptr [esp + 8], 0
// 00813ffb  7520                 jne 0x81401d
// 00813ffd  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00814003  c780c400000001000000 mov dword ptr [eax + 0xc4], 1
// 0081400d  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00814013  c781b000000000000000 mov dword ptr [ecx + 0xb0], 0
// 0081401d  5e                   pop esi
// 0081401e  c20400               ret 4
// copied from an identical function in another client (function ?ShowKeyboardCues@CXTPCommandBarsOptions@@QAEXW4XTPKeyboardCuesShow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp