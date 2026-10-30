// from server: 100% by auto
// roc 2011-06 008d5bc0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5bc0
//
// 008d5bc0  53                   push ebx
// 008d5bc1  56                   push esi
// 008d5bc2  57                   push edi
// 008d5bc3  8bf1                 mov esi, ecx
// 008d5bc5  e8063a0000           call 0x8d95d0
// 008d5bca  8b1dc81ba400         mov ebx, dword ptr [0xa41bc8]
// 008d5bd0  6a00                 push 0
// 008d5bd2  6a04                 push 4
// 008d5bd4  6a02                 push 2
// 008d5bd6  6a02                 push 2
// 008d5bd8  8d7e04               lea edi, [esi + 4]
// 008d5bdb  57                   push edi
// 008d5bdc  c7062403ad00         mov dword ptr [esi], 0xad0324
// 008d5be2  ffd3                 call ebx
// 008d5be4  6a00                 push 0
// 008d5be6  6a02                 push 2
// 008d5be8  6a03                 push 3
// 008d5bea  6a02                 push 2
// 008d5bec  57                   push edi
// 008d5bed  c706947cad00         mov dword ptr [esi], 0xad7c94
// 008d5bf3  ffd3                 call ebx
// 008d5bf5  5f                   pop edi
// 008d5bf6  8bc6                 mov eax, esi
// 008d5bf8  5e                   pop esi
// 008d5bf9  5b                   pop ebx
// 008d5bfa  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetExcel@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
