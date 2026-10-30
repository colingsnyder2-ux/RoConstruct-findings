// roc 2009-12 008e3650  unit: PAVCXTShadowWnd::?$CList  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3650
//
// 008e3650  6aff                 push -1
// 008e3652  68d35e9600           push 0x965ed3
// 008e3657  64a100000000         mov eax, dword ptr fs:[0]
// 008e365d  50                   push eax
// 008e365e  51                   push ecx
// 008e365f  56                   push esi
// 008e3660  57                   push edi
// 008e3661  a10052b600           mov eax, dword ptr [0xb65200]
// 008e3666  33c4                 xor eax, esp
// 008e3668  50                   push eax
// 008e3669  8d442410             lea eax, [esp + 0x10]
// 008e366d  64a300000000         mov dword ptr fs:[0], eax
// 008e3673  8bf1                 mov esi, ecx
// 008e3675  8974240c             mov dword ptr [esp + 0xc], esi
// 008e3679  837e2800             cmp dword ptr [esi + 0x28], 0
// 008e367d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008e3685  7425                 je 0x8e36ac
// 008e3687  8d7e1c               lea edi, [esi + 0x1c]
// 008e368a  8d9b00000000         lea ebx, [ebx]
// 008e3690  8bcf                 mov ecx, edi
// 008e3692  e8d9f3fdff           call 0x8c2a70
// 008e3697  85c0                 test eax, eax
// 008e3699  740b                 je 0x8e36a6
// 008e369b  8b10                 mov edx, dword ptr [eax]
// 008e369d  8bc8                 mov ecx, eax
// 008e369f  8b4204               mov eax, dword ptr [edx + 4]
// 008e36a2  6a01                 push 1
// 008e36a4  ffd0                 call eax
// 008e36a6  837e2800             cmp dword ptr [esi + 0x28], 0
// 008e36aa  75e4                 jne 0x8e3690
// 008e36ac  8d4e1c               lea ecx, [esi + 0x1c]
// 008e36af  c644241800           mov byte ptr [esp + 0x18], 0
// 008e36b4  e8f7feffff           call 0x8e35b0
// 008e36b9  8bce                 mov ecx, esi
// 008e36bb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008e36c3  e8e8feffff           call 0x8e35b0
// 008e36c8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e36cc  64890d00000000       mov dword ptr fs:[0], ecx
// 008e36d3  59                   pop ecx
// 008e36d4  5f                   pop edi
// 008e36d5  5e                   pop esi
// 008e36d6  83c410               add esp, 0x10
// 008e36d9  c3                   ret 
// copied from an identical function in another client (function ??1CXTShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp