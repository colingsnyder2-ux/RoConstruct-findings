// roc 2009-12 0084c1b0  unit: CXTPDrawHelpers  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084c1b0
//
// 0084c1b0  83ec10               sub esp, 0x10
// 0084c1b3  56                   push esi
// 0084c1b4  57                   push edi
// 0084c1b5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0084c1b9  85ff                 test edi, edi
// 0084c1bb  7504                 jne 0x84c1c1
// 0084c1bd  33c0                 xor eax, eax
// 0084c1bf  eb03                 jmp 0x84c1c4
// 0084c1c1  8b4720               mov eax, dword ptr [edi + 0x20]
// 0084c1c4  8d4c2408             lea ecx, [esp + 8]
// 0084c1c8  51                   push ecx
// 0084c1c9  50                   push eax
// 0084c1ca  ff1570cc9800         call dword ptr [0x98cc70]
// 0084c1d0  8b742420             mov esi, dword ptr [esp + 0x20]
// 0084c1d4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0084c1d8  295604               sub dword ptr [esi + 4], edx
// 0084c1db  85ff                 test edi, edi
// 0084c1dd  7403                 je 0x84c1e2
// 0084c1df  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0084c1e2  6aec                 push -0x14
// 0084c1e4  57                   push edi
// 0084c1e5  ff15d8c99800         call dword ptr [0x98c9d8]
// 0084c1eb  a900004000           test eax, 0x400000
// 0084c1f0  740e                 je 0x84c200
// 0084c1f2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0084c1f6  2b06                 sub eax, dword ptr [esi]
// 0084c1f8  5f                   pop edi
// 0084c1f9  8906                 mov dword ptr [esi], eax
// 0084c1fb  5e                   pop esi
// 0084c1fc  83c410               add esp, 0x10
// 0084c1ff  c3                   ret 
// 0084c200  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084c204  290e                 sub dword ptr [esi], ecx
// 0084c206  5f                   pop edi
// 0084c207  5e                   pop esi
// 0084c208  83c410               add esp, 0x10
// 0084c20b  c3                   ret 
// copied from an identical function in another client (function ?ScreenToWindow@CXTPDrawHelpers@@SAXPAVCWnd@@PAUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp