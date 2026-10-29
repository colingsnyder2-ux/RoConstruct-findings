// roc 2010-06 00812180  unit: CXTSplitterWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812180
//
// 00812180  6aff                 push -1
// 00812182  68d8449b00           push 0x9b44d8
// 00812187  64a100000000         mov eax, dword ptr fs:[0]
// 0081218d  50                   push eax
// 0081218e  51                   push ecx
// 0081218f  56                   push esi
// 00812190  57                   push edi
// 00812191  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00812196  33c4                 xor eax, esp
// 00812198  50                   push eax
// 00812199  8d442410             lea eax, [esp + 0x10]
// 0081219d  64a300000000         mov dword ptr fs:[0], eax
// 008121a3  8bf1                 mov esi, ecx
// 008121a5  8974240c             mov dword ptr [esp + 0xc], esi
// 008121a9  e874b31600           call 0x97d522
// 008121ae  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008121b6  8dbedc000000         lea edi, [esi + 0xdc]
// 008121bc  e8dff5ffff           call 0x8117a0
// 008121c1  50                   push eax
// 008121c2  8bcf                 mov ecx, edi
// 008121c4  e8f7c4ffff           call 0x80e6c0
// 008121c9  83c8ff               or eax, 0xffffffff
// 008121cc  8bc8                 mov ecx, eax
// 008121ce  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 008121d4  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 008121da  89860c010000         mov dword ptr [esi + 0x10c], eax
// 008121e0  b806000000           mov eax, 6
// 008121e5  6a00                 push 0
// 008121e7  894660               mov dword ptr [esi + 0x60], eax
// 008121ea  894664               mov dword ptr [esi + 0x64], eax
// 008121ed  894670               mov dword ptr [esi + 0x70], eax
// 008121f0  894674               mov dword ptr [esi + 0x74], eax
// 008121f3  8d86fc000000         lea eax, [esi + 0xfc]
// 008121f9  50                   push eax
// 008121fa  6a00                 push 0
// 008121fc  6a26                 push 0x26
// 008121fe  c706e41aa600         mov dword ptr [esi], 0xa61ae4
// 00812204  c707d41aa600         mov dword ptr [edi], 0xa61ad4
// 0081220a  898e10010000         mov dword ptr [esi + 0x110], ecx
// 00812210  c7860801000002000000 mov dword ptr [esi + 0x108], 2
// 0081221a  c7860401000001000000 mov dword ptr [esi + 0x104], 1
// 00812224  ff1594ba9e00         call dword ptr [0x9eba94]
// 0081222a  c7860001000000000000 mov dword ptr [esi + 0x100], 0
// 00812234  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 0081223e  8bc6                 mov eax, esi
// 00812240  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00812244  64890d00000000       mov dword ptr fs:[0], ecx
// 0081224b  59                   pop ecx
// 0081224c  5f                   pop edi
// 0081224d  5e                   pop esi
// 0081224e  83c410               add esp, 0x10
// 00812251  c3                   ret 
// copied from an identical function in another client (function ??0CXTSplitterWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1