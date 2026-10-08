// roc 2010-06 007c8080  unit: CXTPToolBar  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c8080
//
// 007c8080  8b442404             mov eax, dword ptr [esp + 4]
// 007c8084  33d2                 xor edx, edx
// 007c8086  83f801               cmp eax, 1
// 007c8089  0f95c2               setne dl
// 007c808c  56                   push esi
// 007c808d  8bf1                 mov esi, ecx
// 007c808f  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 007c8095  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 007c809b  c781c400000000000000 mov dword ptr [ecx + 0xc4], 0
// 007c80a5  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 007c80ab  8991b0000000         mov dword ptr [ecx + 0xb0], edx
// 007c80b1  83f802               cmp eax, 2
// 007c80b4  7547                 jne 0x7c80fd
// 007c80b6  6a00                 push 0
// 007c80b8  8d54240c             lea edx, [esp + 0xc]
// 007c80bc  52                   push edx
// 007c80bd  6a00                 push 0
// 007c80bf  680a100000           push 0x100a
// 007c80c4  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007c80cc  ff1594ba9e00         call dword ptr [0x9eba94]
// 007c80d2  85c0                 test eax, eax
// 007c80d4  7427                 je 0x7c80fd
// 007c80d6  837c240800           cmp dword ptr [esp + 8], 0
// 007c80db  7520                 jne 0x7c80fd
// 007c80dd  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007c80e3  c780c400000001000000 mov dword ptr [eax + 0xc4], 1
// 007c80ed  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 007c80f3  c781b000000000000000 mov dword ptr [ecx + 0xb0], 0
// 007c80fd  5e                   pop esi
// 007c80fe  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBarsOptions@@QAEXW4XTPKeyboardCuesShow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
