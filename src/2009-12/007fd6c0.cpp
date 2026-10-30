// roc 2009-12 007fd6c0  unit: CXTPPaintManager  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd6c0
//
// 007fd6c0  53                   push ebx
// 007fd6c1  55                   push ebp
// 007fd6c2  56                   push esi
// 007fd6c3  8bf1                 mov esi, ecx
// 007fd6c5  8b06                 mov eax, dword ptr [esi]
// 007fd6c7  8b90e4000000         mov edx, dword ptr [eax + 0xe4]
// 007fd6cd  57                   push edi
// 007fd6ce  ffd2                 call edx
// 007fd6d0  e8cb3e0300           call 0x8315a0
// 007fd6d5  e8f6220300           call 0x82f9d0
// 007fd6da  8be8                 mov ebp, eax
// 007fd6dc  33ff                 xor edi, edi
// 007fd6de  8d9e68010000         lea ebx, [esi + 0x168]
// 007fd6e4  57                   push edi
// 007fd6e5  8bcd                 mov ecx, ebp
// 007fd6e7  e8141a0300           call 0x82f100
// 007fd6ec  8903                 mov dword ptr [ebx], eax
// 007fd6ee  47                   inc edi
// 007fd6ef  83c30c               add ebx, 0xc
// 007fd6f2  83ff3e               cmp edi, 0x3e
// 007fd6f5  76ed                 jbe 0x7fd6e4
// 007fd6f7  6a12                 push 0x12
// 007fd6f9  8bce                 mov ecx, esi
// 007fd6fb  c7462000000000       mov dword ptr [esi + 0x20], 0
// 007fd702  8d5e24               lea ebx, [esi + 0x24]
// 007fd705  e836ffffff           call 0x7fd640
// 007fd70a  6a10                 push 0x10
// 007fd70c  8bce                 mov ecx, esi
// 007fd70e  8903                 mov dword ptr [ebx], eax
// 007fd710  e82bffffff           call 0x7fd640
// 007fd715  6a14                 push 0x14
// 007fd717  8bce                 mov ecx, esi
// 007fd719  89464c               mov dword ptr [esi + 0x4c], eax
// 007fd71c  e81fffffff           call 0x7fd640
// 007fd721  d905dcf29a00         fld dword ptr [0x9af2dc]
// 007fd727  51                   push ecx
// 007fd728  d91c24               fstp dword ptr [esp]
// 007fd72b  6a10                 push 0x10
// 007fd72d  8bce                 mov ecx, esi
// 007fd72f  894658               mov dword ptr [esi + 0x58], eax
// 007fd732  e809ffffff           call 0x7fd640
// 007fd737  50                   push eax
// 007fd738  6a0f                 push 0xf
// 007fd73a  8bce                 mov ecx, esi
// 007fd73c  e8fffeffff           call 0x7fd640
// 007fd741  50                   push eax
// 007fd742  8d4e28               lea ecx, [esi + 0x28]
// 007fd745  e816170300           call 0x82ee60
// 007fd74a  8dbe2c010000         lea edi, [esi + 0x12c]
// 007fd750  8bcf                 mov ecx, edi
// 007fd752  e849e00600           call 0x86b7a0
// 007fd757  837e6800             cmp dword ptr [esi + 0x68], 0
// 007fd75b  742a                 je 0x7fd787
// 007fd75d  6830299f00           push 0x9f2930
// 007fd762  6a00                 push 0
// 007fd764  8bcf                 mov ecx, edi
// 007fd766  e895e50600           call 0x86bd00
// 007fd76b  8bcf                 mov ecx, edi
// 007fd76d  e84ee40600           call 0x86bbc0
// 007fd772  85c0                 test eax, eax
// 007fd774  7411                 je 0x7fd787
// 007fd776  53                   push ebx
// 007fd777  68db0e0000           push 0xedb
// 007fd77c  6a00                 push 0
// 007fd77e  6a01                 push 1
// 007fd780  8bcf                 mov ecx, edi
// 007fd782  e829e20600           call 0x86b9b0
// 007fd787  8dbe38010000         lea edi, [esi + 0x138]
// 007fd78d  8bcf                 mov ecx, edi
// 007fd78f  e80ce00600           call 0x86b7a0
// 007fd794  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 007fd798  740e                 je 0x7fd7a8
// 007fd79a  6820299f00           push 0x9f2920
// 007fd79f  6a00                 push 0
// 007fd7a1  8bcf                 mov ecx, edi
// 007fd7a3  e858e50600           call 0x86bd00
// 007fd7a8  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 007fd7ae  8b01                 mov eax, dword ptr [ecx]
// 007fd7b0  8b5010               mov edx, dword ptr [eax + 0x10]
// 007fd7b3  5f                   pop edi
// 007fd7b4  5e                   pop esi
// 007fd7b5  5d                   pop ebp
// 007fd7b6  5b                   pop ebx
// 007fd7b7  ffe2                 jmp edx
// copied from an identical function in another client (function ?RefreshMetrics@CXTPPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp