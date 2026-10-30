// roc 2009-12 0085e190  unit: CXTSplitterWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e190
//
// 0085e190  6aff                 push -1
// 0085e192  68c8e59500           push 0x95e5c8
// 0085e197  64a100000000         mov eax, dword ptr fs:[0]
// 0085e19d  50                   push eax
// 0085e19e  51                   push ecx
// 0085e19f  56                   push esi
// 0085e1a0  57                   push edi
// 0085e1a1  a10052b600           mov eax, dword ptr [0xb65200]
// 0085e1a6  33c4                 xor eax, esp
// 0085e1a8  50                   push eax
// 0085e1a9  8d442410             lea eax, [esp + 0x10]
// 0085e1ad  64a300000000         mov dword ptr fs:[0], eax
// 0085e1b3  8bf1                 mov esi, ecx
// 0085e1b5  8974240c             mov dword ptr [esp + 0xc], esi
// 0085e1b9  e8228a0c00           call 0x926be0
// 0085e1be  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0085e1c6  8dbedc000000         lea edi, [esi + 0xdc]
// 0085e1cc  e8eff5ffff           call 0x85d7c0
// 0085e1d1  50                   push eax
// 0085e1d2  8bcf                 mov ecx, edi
// 0085e1d4  e857c5ffff           call 0x85a730
// 0085e1d9  83c8ff               or eax, 0xffffffff
// 0085e1dc  8bc8                 mov ecx, eax
// 0085e1de  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 0085e1e4  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 0085e1ea  89860c010000         mov dword ptr [esi + 0x10c], eax
// 0085e1f0  b806000000           mov eax, 6
// 0085e1f5  6a00                 push 0
// 0085e1f7  894660               mov dword ptr [esi + 0x60], eax
// 0085e1fa  894664               mov dword ptr [esi + 0x64], eax
// 0085e1fd  894670               mov dword ptr [esi + 0x70], eax
// 0085e200  894674               mov dword ptr [esi + 0x74], eax
// 0085e203  8d86fc000000         lea eax, [esi + 0xfc]
// 0085e209  50                   push eax
// 0085e20a  6a00                 push 0
// 0085e20c  6a26                 push 0x26
// 0085e20e  c70624d89f00         mov dword ptr [esi], 0x9fd824
// 0085e214  c70714d89f00         mov dword ptr [edi], 0x9fd814
// 0085e21a  898e10010000         mov dword ptr [esi + 0x110], ecx
// 0085e220  c7860801000002000000 mov dword ptr [esi + 0x108], 2
// 0085e22a  c7860401000001000000 mov dword ptr [esi + 0x104], 1
// 0085e234  ff1500cc9800         call dword ptr [0x98cc00]
// 0085e23a  c7860001000000000000 mov dword ptr [esi + 0x100], 0
// 0085e244  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 0085e24e  8bc6                 mov eax, esi
// 0085e250  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085e254  64890d00000000       mov dword ptr fs:[0], ecx
// 0085e25b  59                   pop ecx
// 0085e25c  5f                   pop edi
// 0085e25d  5e                   pop esi
// 0085e25e  83c410               add esp, 0x10
// 0085e261  c3                   ret 
// copied from an identical function in another client (function ??0CXTSplitterWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1