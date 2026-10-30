// roc 2009-12 007f6940  unit: CRobloxControlColorSelector  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6940
//
// 007f6940  56                   push esi
// 007f6941  57                   push edi
// 007f6942  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f6946  8bf1                 mov esi, ecx
// 007f6948  8bcf                 mov ecx, edi
// 007f694a  e841f3ffff           call 0x7f5c90
// 007f694f  8bce                 mov ecx, esi
// 007f6951  8bd0                 mov edx, eax
// 007f6953  e838f3ffff           call 0x7f5c90
// 007f6958  3bc2                 cmp eax, edx
// 007f695a  7407                 je 0x7f6963
// 007f695c  5f                   pop edi
// 007f695d  33c0                 xor eax, eax
// 007f695f  5e                   pop esi
// 007f6960  c20400               ret 4
// 007f6963  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007f6969  3b87fc000000         cmp eax, dword ptr [edi + 0xfc]
// 007f696f  75eb                 jne 0x7f695c
// 007f6971  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 007f6977  3b8f84000000         cmp ecx, dword ptr [edi + 0x84]
// 007f697d  75dd                 jne 0x7f695c
// 007f697f  8bcf                 mov ecx, edi
// 007f6981  e83adf0600           call 0x8648c0
// 007f6986  8bce                 mov ecx, esi
// 007f6988  8bd0                 mov edx, eax
// 007f698a  e831df0600           call 0x8648c0
// 007f698f  3bc2                 cmp eax, edx
// 007f6991  75c9                 jne 0x7f695c
// 007f6993  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 007f6999  3b8798000000         cmp eax, dword ptr [edi + 0x98]
// 007f699f  75bb                 jne 0x7f695c
// 007f69a1  53                   push ebx
// 007f69a2  8bcf                 mov ecx, edi
// 007f69a4  e8b7f1ffff           call 0x7f5b60
// 007f69a9  8bce                 mov ecx, esi
// 007f69ab  8bd8                 mov ebx, eax
// 007f69ad  e8aef1ffff           call 0x7f5b60
// 007f69b2  3bc3                 cmp eax, ebx
// 007f69b4  5b                   pop ebx
// 007f69b5  75a5                 jne 0x7f695c
// 007f69b7  8d8fd8000000         lea ecx, [edi + 0xd8]
// 007f69bd  51                   push ecx
// 007f69be  8d96d8000000         lea edx, [esi + 0xd8]
// 007f69c4  52                   push edx
// 007f69c5  e8c6faffff           call 0x7f6490
// 007f69ca  83c408               add esp, 8
// 007f69cd  84c0                 test al, al
// 007f69cf  758b                 jne 0x7f695c
// 007f69d1  8d87e8000000         lea eax, [edi + 0xe8]
// 007f69d7  50                   push eax
// 007f69d8  8d8ee8000000         lea ecx, [esi + 0xe8]
// 007f69de  51                   push ecx
// 007f69df  e8acfaffff           call 0x7f6490
// 007f69e4  83c408               add esp, 8
// 007f69e7  84c0                 test al, al
// 007f69e9  0f856dffffff         jne 0x7f695c
// 007f69ef  8d97ec000000         lea edx, [edi + 0xec]
// 007f69f5  52                   push edx
// 007f69f6  8d86ec000000         lea eax, [esi + 0xec]
// 007f69fc  50                   push eax
// 007f69fd  e88efaffff           call 0x7f6490
// 007f6a02  83c408               add esp, 8
// 007f6a05  84c0                 test al, al
// 007f6a07  0f854fffffff         jne 0x7f695c
// 007f6a0d  8d8fdc000000         lea ecx, [edi + 0xdc]
// 007f6a13  51                   push ecx
// 007f6a14  8d96dc000000         lea edx, [esi + 0xdc]
// 007f6a1a  52                   push edx
// 007f6a1b  e870faffff           call 0x7f6490
// 007f6a20  83c408               add esp, 8
// 007f6a23  84c0                 test al, al
// 007f6a25  0f8531ffffff         jne 0x7f695c
// 007f6a2b  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 007f6a31  3b874c010000         cmp eax, dword ptr [edi + 0x14c]
// 007f6a37  0f851fffffff         jne 0x7f695c
// 007f6a3d  8d8ff0000000         lea ecx, [edi + 0xf0]
// 007f6a43  51                   push ecx
// 007f6a44  8d96f0000000         lea edx, [esi + 0xf0]
// 007f6a4a  52                   push edx
// 007f6a4b  e840faffff           call 0x7f6490
// 007f6a50  83c408               add esp, 8
// 007f6a53  84c0                 test al, al
// 007f6a55  0f8501ffffff         jne 0x7f695c
// 007f6a5b  8b87d0000000         mov eax, dword ptr [edi + 0xd0]
// 007f6a61  3386d0000000         xor eax, dword ptr [esi + 0xd0]
// 007f6a67  a810                 test al, 0x10
// 007f6a69  0f85edfeffff         jne 0x7f695c
// 007f6a6f  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 007f6a75  33c0                 xor eax, eax
// 007f6a77  3b8f60010000         cmp ecx, dword ptr [edi + 0x160]
// 007f6a7d  5f                   pop edi
// 007f6a7e  0f94c0               sete al
// 007f6a81  5e                   pop esi
// 007f6a82  c20400               ret 4
// copied from an identical function in another client (function ?Compare@CXTPControl@@UAEHPAV1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp