// roc 2009-12 008c7970  unit: PAVCXTPPropertyGridInplaceControl::?$CArray  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7970
//
// 008c7970  56                   push esi
// 008c7971  8bf1                 mov esi, ecx
// 008c7973  e8d8f8ffff           call 0x8c7250
// 008c7978  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c797e  c706bc9ba000         mov dword ptr [esi], 0xa09bbc
// 008c7984  ff1574de9800         call dword ptr [0x98de74]
// 008c798a  33c0                 xor eax, eax
// 008c798c  898694000000         mov dword ptr [esi + 0x94], eax
// 008c7992  c7869000000048189a00 mov dword ptr [esi + 0x90], 0x9a1848
// 008c799c  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008c79a2  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 008c79a8  898698000000         mov dword ptr [esi + 0x98], eax
// 008c79ae  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 008c79b4  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008c79ba  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 008c79c0  8986ac000000         mov dword ptr [esi + 0xac], eax
// 008c79c6  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 008c79cc  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 008c79d2  8bc6                 mov eax, esi
// 008c79d4  5e                   pop esi
// 008c79d5  c3                   ret 
// copied from an identical function in another client (function ??0CXTPPropertyGridInplaceEdit@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\PropertyGrid\XTPPropertyGridInplaceEdit.cpp