// roc 2007-03 0067a640  unit: seg_00670000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067a640
//
// 0067a640  6aff                 push -1
// 0067a642  6828337600           push 0x763328
// 0067a647  64a100000000         mov eax, dword ptr fs:[0]
// 0067a64d  50                   push eax
// 0067a64e  51                   push ecx
// 0067a64f  56                   push esi
// 0067a650  57                   push edi
// 0067a651  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0067a656  33c4                 xor eax, esp
// 0067a658  50                   push eax
// 0067a659  8d442410             lea eax, [esp + 0x10]
// 0067a65d  64a300000000         mov dword ptr fs:[0], eax
// 0067a663  8bf1                 mov esi, ecx
// 0067a665  8974240c             mov dword ptr [esp + 0xc], esi
// 0067a669  e8b00b0c00           call 0x73b21e
// 0067a66e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0067a676  8dbedc000000         lea edi, [esi + 0xdc]
// 0067a67c  e81ff7ffff           call 0x679da0
// 0067a681  50                   push eax
// 0067a682  8bcf                 mov ecx, edi
// 0067a684  e8e7140000           call 0x67bb70
// 0067a689  83c8ff               or eax, 0xffffffff
// 0067a68c  8bc8                 mov ecx, eax
// 0067a68e  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 0067a694  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 0067a69a  89860c010000         mov dword ptr [esi + 0x10c], eax
// 0067a6a0  b806000000           mov eax, 6
// 0067a6a5  6a00                 push 0
// 0067a6a7  894660               mov dword ptr [esi + 0x60], eax
// 0067a6aa  894664               mov dword ptr [esi + 0x64], eax
// 0067a6ad  894670               mov dword ptr [esi + 0x70], eax
// 0067a6b0  894674               mov dword ptr [esi + 0x74], eax
// 0067a6b3  8d86fc000000         lea eax, [esi + 0xfc]
// 0067a6b9  50                   push eax
// 0067a6ba  6a00                 push 0
// 0067a6bc  6a26                 push 0x26
// 0067a6be  c70604d27c00         mov dword ptr [esi], 0x7cd204
// 0067a6c4  c707f4d17c00         mov dword ptr [edi], 0x7cd1f4
// 0067a6ca  898e10010000         mov dword ptr [esi + 0x110], ecx
// 0067a6d0  c7860801000002000000 mov dword ptr [esi + 0x108], 2
// 0067a6da  c7860401000001000000 mov dword ptr [esi + 0x104], 1
// 0067a6e4  ff150cef7700         call dword ptr [0x77ef0c]
// 0067a6ea  c7860001000000000000 mov dword ptr [esi + 0x100], 0
// 0067a6f4  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 0067a6fe  8bc6                 mov eax, esi
// 0067a700  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067a704  64890d00000000       mov dword ptr fs:[0], ecx
// 0067a70b  59                   pop ecx
// 0067a70c  5f                   pop edi
// 0067a70d  5e                   pop esi
// 0067a70e  83c410               add esp, 0x10
// 0067a711  c3                   ret 
// copied from an identical function in another client (function ??0CXTSplitterWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1