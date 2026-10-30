// roc 2009-12 008ae4d0  unit: CXTPDockingPaneMiniWnd  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae4d0
//
// 008ae4d0  6aff                 push -1
// 008ae4d2  68662d9600           push 0x962d66
// 008ae4d7  64a100000000         mov eax, dword ptr fs:[0]
// 008ae4dd  50                   push eax
// 008ae4de  51                   push ecx
// 008ae4df  56                   push esi
// 008ae4e0  57                   push edi
// 008ae4e1  a10052b600           mov eax, dword ptr [0xb65200]
// 008ae4e6  33c4                 xor eax, esp
// 008ae4e8  50                   push eax
// 008ae4e9  8d442410             lea eax, [esp + 0x10]
// 008ae4ed  64a300000000         mov dword ptr fs:[0], eax
// 008ae4f3  8bf1                 mov esi, ecx
// 008ae4f5  8974240c             mov dword ptr [esp + 0xc], esi
// 008ae4f9  8dbef8000000         lea edi, [esi + 0xf8]
// 008ae4ff  c706dc6ea000         mov dword ptr [esi], 0xa06edc
// 008ae505  c7077c6ea000         mov dword ptr [edi], 0xa06e7c
// 008ae50b  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008ae513  e8c653f4ff           call 0x7f38de
// 008ae518  8bcf                 mov ecx, edi
// 008ae51a  c644241800           mov byte ptr [esp + 0x18], 0
// 008ae51f  e8bc230000           call 0x8b08e0
// 008ae524  8bce                 mov ecx, esi
// 008ae526  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008ae52e  e89d870700           call 0x926cd0
// 008ae533  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ae537  64890d00000000       mov dword ptr fs:[0], ecx
// 008ae53e  59                   pop ecx
// 008ae53f  5f                   pop edi
// 008ae540  5e                   pop esi
// 008ae541  83c410               add esp, 0x10
// 008ae544  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPaneMiniWnd@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp