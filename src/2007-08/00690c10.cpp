// roc 2007-08 00690c10  unit: CXTSplitterWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00690c10
//
// 00690c10  6aff                 push -1
// 00690c12  68082f7600           push 0x762f08
// 00690c17  64a100000000         mov eax, dword ptr fs:[0]
// 00690c1d  50                   push eax
// 00690c1e  51                   push ecx
// 00690c1f  56                   push esi
// 00690c20  57                   push edi
// 00690c21  a188518b00           mov eax, dword ptr [0x8b5188]
// 00690c26  33c4                 xor eax, esp
// 00690c28  50                   push eax
// 00690c29  8d442410             lea eax, [esp + 0x10]
// 00690c2d  64a300000000         mov dword ptr fs:[0], eax
// 00690c33  8bf1                 mov esi, ecx
// 00690c35  8974240c             mov dword ptr [esp + 0xc], esi
// 00690c39  e8a67e0a00           call 0x738ae4
// 00690c3e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00690c46  8dbedc000000         lea edi, [esi + 0xdc]
// 00690c4c  e83ff6ffff           call 0x690290
// 00690c51  50                   push eax
// 00690c52  8bcf                 mov ecx, edi
// 00690c54  e807150000           call 0x692160
// 00690c59  83c8ff               or eax, 0xffffffff
// 00690c5c  8bc8                 mov ecx, eax
// 00690c5e  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 00690c64  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 00690c6a  89860c010000         mov dword ptr [esi + 0x10c], eax
// 00690c70  b806000000           mov eax, 6
// 00690c75  6a00                 push 0
// 00690c77  894660               mov dword ptr [esi + 0x60], eax
// 00690c7a  894664               mov dword ptr [esi + 0x64], eax
// 00690c7d  894670               mov dword ptr [esi + 0x70], eax
// 00690c80  894674               mov dword ptr [esi + 0x74], eax
// 00690c83  8d86fc000000         lea eax, [esi + 0xfc]
// 00690c89  50                   push eax
// 00690c8a  6a00                 push 0
// 00690c8c  6a26                 push 0x26
// 00690c8e  c706d4057d00         mov dword ptr [esi], 0x7d05d4
// 00690c94  c707c4057d00         mov dword ptr [edi], 0x7d05c4
// 00690c9a  898e10010000         mov dword ptr [esi + 0x110], ecx
// 00690ca0  c7860801000002000000 mov dword ptr [esi + 0x108], 2
// 00690caa  c7860401000001000000 mov dword ptr [esi + 0x104], 1
// 00690cb4  ff150cee7700         call dword ptr [0x77ee0c]
// 00690cba  c7860001000000000000 mov dword ptr [esi + 0x100], 0
// 00690cc4  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 00690cce  8bc6                 mov eax, esi
// 00690cd0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00690cd4  64890d00000000       mov dword ptr fs:[0], ecx
// 00690cdb  59                   pop ecx
// 00690cdc  5f                   pop edi
// 00690cdd  5e                   pop esi
// 00690cde  83c410               add esp, 0x10
// 00690ce1  c3                   ret 
// copied from an identical function in another client (function ??0CXTSplitterWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1