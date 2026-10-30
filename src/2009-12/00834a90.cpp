// roc 2009-12 00834a90  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834a90
//
// 00834a90  6aff                 push -1
// 00834a92  6848a49500           push 0x95a448
// 00834a97  64a100000000         mov eax, dword ptr fs:[0]
// 00834a9d  50                   push eax
// 00834a9e  83ec58               sub esp, 0x58
// 00834aa1  a10052b600           mov eax, dword ptr [0xb65200]
// 00834aa6  33c4                 xor eax, esp
// 00834aa8  89442454             mov dword ptr [esp + 0x54], eax
// 00834aac  56                   push esi
// 00834aad  a10052b600           mov eax, dword ptr [0xb65200]
// 00834ab2  33c4                 xor eax, esp
// 00834ab4  50                   push eax
// 00834ab5  8d442460             lea eax, [esp + 0x60]
// 00834ab9  64a300000000         mov dword ptr fs:[0], eax
// 00834abf  8bf1                 mov esi, ecx
// 00834ac1  56                   push esi
// 00834ac2  8d4c240c             lea ecx, [esp + 0xc]
// 00834ac6  e825f7fbff           call 0x7f41f0
// 00834acb  8b4660               mov eax, dword ptr [esi + 0x60]
// 00834ace  8b406c               mov eax, dword ptr [eax + 0x6c]
// 00834ad1  8d4e60               lea ecx, [esi + 0x60]
// 00834ad4  6a01                 push 1
// 00834ad6  8d54240c             lea edx, [esp + 0xc]
// 00834ada  52                   push edx
// 00834adb  c744247000000000     mov dword ptr [esp + 0x70], 0
// 00834ae3  ffd0                 call eax
// 00834ae5  8d4c2408             lea ecx, [esp + 8]
// 00834ae9  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00834af1  e8f4f6fbff           call 0x7f41ea
// 00834af6  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00834afa  64890d00000000       mov dword ptr fs:[0], ecx
// 00834b01  59                   pop ecx
// 00834b02  5e                   pop esi
// 00834b03  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00834b07  33cc                 xor ecx, esp
// 00834b09  e88c08fcff           call 0x7f539a
// 00834b0e  83c464               add esp, 0x64
// 00834b11  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTTreeViewBase@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTTreeCtrlView.cpp