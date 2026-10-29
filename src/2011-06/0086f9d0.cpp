// roc 2011-06 0086f9d0  unit: CXTSplitterWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f9d0
//
// 0086f9d0  6aff                 push -1
// 0086f9d2  685876a000           push 0xa07658
// 0086f9d7  64a100000000         mov eax, dword ptr fs:[0]
// 0086f9dd  50                   push eax
// 0086f9de  51                   push ecx
// 0086f9df  56                   push esi
// 0086f9e0  57                   push edi
// 0086f9e1  a12058c900           mov eax, dword ptr [0xc95820]
// 0086f9e6  33c4                 xor eax, esp
// 0086f9e8  50                   push eax
// 0086f9e9  8d442410             lea eax, [esp + 0x10]
// 0086f9ed  64a300000000         mov dword ptr fs:[0], eax
// 0086f9f3  8bf1                 mov esi, ecx
// 0086f9f5  8974240c             mov dword ptr [esp + 0xc], esi
// 0086f9f9  e8ccd11500           call 0x9ccbca
// 0086f9fe  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0086fa06  8dbedc000000         lea edi, [esi + 0xdc]
// 0086fa0c  e8eff5ffff           call 0x86f000
// 0086fa11  50                   push eax
// 0086fa12  8bcf                 mov ecx, edi
// 0086fa14  e847c4ffff           call 0x86be60
// 0086fa19  83c8ff               or eax, 0xffffffff
// 0086fa1c  8bc8                 mov ecx, eax
// 0086fa1e  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 0086fa24  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 0086fa2a  89860c010000         mov dword ptr [esi + 0x10c], eax
// 0086fa30  b806000000           mov eax, 6
// 0086fa35  6a00                 push 0
// 0086fa37  894660               mov dword ptr [esi + 0x60], eax
// 0086fa3a  894664               mov dword ptr [esi + 0x64], eax
// 0086fa3d  894670               mov dword ptr [esi + 0x70], eax
// 0086fa40  894674               mov dword ptr [esi + 0x74], eax
// 0086fa43  8d86fc000000         lea eax, [esi + 0xfc]
// 0086fa49  50                   push eax
// 0086fa4a  6a00                 push 0
// 0086fa4c  6a26                 push 0x26
// 0086fa4e  c706c4c3ac00         mov dword ptr [esi], 0xacc3c4
// 0086fa54  c707b4c3ac00         mov dword ptr [edi], 0xacc3b4
// 0086fa5a  898e10010000         mov dword ptr [esi + 0x110], ecx
// 0086fa60  c7860801000002000000 mov dword ptr [esi + 0x108], 2
// 0086fa6a  c7860401000001000000 mov dword ptr [esi + 0x104], 1
// 0086fa74  ff155c1ba400         call dword ptr [0xa41b5c]
// 0086fa7a  c7860001000000000000 mov dword ptr [esi + 0x100], 0
// 0086fa84  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 0086fa8e  8bc6                 mov eax, esi
// 0086fa90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086fa94  64890d00000000       mov dword ptr fs:[0], ecx
// 0086fa9b  59                   pop ecx
// 0086fa9c  5f                   pop edi
// 0086fa9d  5e                   pop esi
// 0086fa9e  83c410               add esp, 0x10
// 0086faa1  c3                   ret 
// copied from an identical function in another client (function ??0CXTSplitterWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1