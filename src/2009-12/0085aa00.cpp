// roc 2009-12 0085aa00  unit: CXTPStatusBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085aa00
//
// 0085aa00  56                   push esi
// 0085aa01  57                   push edi
// 0085aa02  e899ffffff           call 0x85a9a0
// 0085aa07  8b742410             mov esi, dword ptr [esp + 0x10]
// 0085aa0b  8b0e                 mov ecx, dword ptr [esi]
// 0085aa0d  8b38                 mov edi, dword ptr [eax]
// 0085aa0f  83ec10               sub esp, 0x10
// 0085aa12  8bd4                 mov edx, esp
// 0085aa14  890a                 mov dword ptr [edx], ecx
// 0085aa16  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085aa19  894a04               mov dword ptr [edx + 4], ecx
// 0085aa1c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0085aa1f  894a08               mov dword ptr [edx + 8], ecx
// 0085aa22  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0085aa25  894a0c               mov dword ptr [edx + 0xc], ecx
// 0085aa28  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085aa2c  8bc8                 mov ecx, eax
// 0085aa2e  8b87a0000000         mov eax, dword ptr [edi + 0xa0]
// 0085aa34  52                   push edx
// 0085aa35  ffd0                 call eax
// 0085aa37  5f                   pop edi
// 0085aa38  5e                   pop esi
// 0085aa39  c20800               ret 8
// copied from an identical function in another client (function ?DrawStretch@CXTPStatusBar@@MAEXPAVCDC@@AAVCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp