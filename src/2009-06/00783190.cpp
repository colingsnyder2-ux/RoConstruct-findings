// roc 2009-06 00783190  unit: CXTSplitterWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783190
//
// 00783190  6aff                 push -1
// 00783192  6818a38700           push 0x87a318
// 00783197  64a100000000         mov eax, dword ptr fs:[0]
// 0078319d  50                   push eax
// 0078319e  51                   push ecx
// 0078319f  56                   push esi
// 007831a0  57                   push edi
// 007831a1  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007831a6  33c4                 xor eax, esp
// 007831a8  50                   push eax
// 007831a9  8d442410             lea eax, [esp + 0x10]
// 007831ad  64a300000000         mov dword ptr fs:[0], eax
// 007831b3  8bf1                 mov esi, ecx
// 007831b5  8974240c             mov dword ptr [esp + 0xc], esi
// 007831b9  e8b6940c00           call 0x84c674
// 007831be  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007831c6  8dbedc000000         lea edi, [esi + 0xdc]
// 007831cc  e8eff5ffff           call 0x7827c0
// 007831d1  50                   push eax
// 007831d2  8bcf                 mov ecx, edi
// 007831d4  e897c4ffff           call 0x77f670
// 007831d9  83c8ff               or eax, 0xffffffff
// 007831dc  8bc8                 mov ecx, eax
// 007831de  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 007831e4  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 007831ea  89860c010000         mov dword ptr [esi + 0x10c], eax
// 007831f0  b806000000           mov eax, 6
// 007831f5  6a00                 push 0
// 007831f7  894660               mov dword ptr [esi + 0x60], eax
// 007831fa  894664               mov dword ptr [esi + 0x64], eax
// 007831fd  894670               mov dword ptr [esi + 0x70], eax
// 00783200  894674               mov dword ptr [esi + 0x74], eax
// 00783203  8d86fc000000         lea eax, [esi + 0xfc]
// 00783209  50                   push eax
// 0078320a  6a00                 push 0
// 0078320c  6a26                 push 0x26
// 0078320e  c7067cd38f00         mov dword ptr [esi], 0x8fd37c
// 00783214  c7076cd38f00         mov dword ptr [edi], 0x8fd36c
// 0078321a  898e10010000         mov dword ptr [esi + 0x110], ecx
// 00783220  c7860801000002000000 mov dword ptr [esi + 0x108], 2
// 0078322a  c7860401000001000000 mov dword ptr [esi + 0x104], 1
// 00783234  ff1564ee8900         call dword ptr [0x89ee64]
// 0078323a  c7860001000000000000 mov dword ptr [esi + 0x100], 0
// 00783244  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 0078324e  8bc6                 mov eax, esi
// 00783250  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00783254  64890d00000000       mov dword ptr fs:[0], ecx
// 0078325b  59                   pop ecx
// 0078325c  5f                   pop edi
// 0078325d  5e                   pop esi
// 0078325e  83c410               add esp, 0x10
// 00783261  c3                   ret 
// copied from an identical function in another client (function ??0CXTSplitterWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1