// roc 2009-12 007f6070  unit: CRobloxControlColorSelector  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6070
//
// 007f6070  56                   push esi
// 007f6071  8bf1                 mov esi, ecx
// 007f6073  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 007f607a  7426                 je 0x7f60a2
// 007f607c  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6082  8b01                 mov eax, dword ptr [ecx]
// 007f6084  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 007f608a  ffd2                 call edx
// 007f608c  85c0                 test eax, eax
// 007f608e  7412                 je 0x7f60a2
// 007f6090  8bce                 mov ecx, esi
// 007f6092  e829e80600           call 0x8648c0
// 007f6097  a810                 test al, 0x10
// 007f6099  7507                 jne 0x7f60a2
// 007f609b  b801000000           mov eax, 1
// 007f60a0  5e                   pop esi
// 007f60a1  c3                   ret 
// 007f60a2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f60a8  85c9                 test ecx, ecx
// 007f60aa  740f                 je 0x7f60bb
// 007f60ac  e81fe40000           call 0x8044d0
// 007f60b1  85c0                 test eax, eax
// 007f60b3  7406                 je 0x7f60bb
// 007f60b5  83782800             cmp dword ptr [eax + 0x28], 0
// 007f60b9  75e0                 jne 0x7f609b
// 007f60bb  33c0                 xor eax, eax
// 007f60bd  5e                   pop esi
// 007f60be  c3                   ret 
// copied from an identical function in another client (function ?IsCustomizeMovable@CXTPControl@@MBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp