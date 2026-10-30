// roc 2009-12 0080c820  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080c820
//
// 0080c820  6aff                 push -1
// 0080c822  68a99a9500           push 0x959aa9
// 0080c827  64a100000000         mov eax, dword ptr fs:[0]
// 0080c82d  50                   push eax
// 0080c82e  51                   push ecx
// 0080c82f  56                   push esi
// 0080c830  57                   push edi
// 0080c831  a10052b600           mov eax, dword ptr [0xb65200]
// 0080c836  33c4                 xor eax, esp
// 0080c838  50                   push eax
// 0080c839  8d442410             lea eax, [esp + 0x10]
// 0080c83d  64a300000000         mov dword ptr fs:[0], eax
// 0080c843  8bf1                 mov esi, ecx
// 0080c845  8974240c             mov dword ptr [esp + 0xc], esi
// 0080c849  e8f49b1100           call 0x926442
// 0080c84e  8d7e28               lea edi, [esi + 0x28]
// 0080c851  6a0a                 push 0xa
// 0080c853  8bcf                 mov ecx, edi
// 0080c855  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0080c85d  c706b4319f00         mov dword ptr [esi], 0x9f31b4
// 0080c863  e8e8eeffff           call 0x80b750
// 0080c868  8d4e44               lea ecx, [esi + 0x44]
// 0080c86b  e820efffff           call 0x80b790
// 0080c870  6a0a                 push 0xa
// 0080c872  8d4e58               lea ecx, [esi + 0x58]
// 0080c875  e856efffff           call 0x80b7d0
// 0080c87a  6a00                 push 0
// 0080c87c  6a7f                 push 0x7f
// 0080c87e  8bcf                 mov ecx, edi
// 0080c880  c644242003           mov byte ptr [esp + 0x20], 3
// 0080c885  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 0080c88c  c74674aa0a0100       mov dword ptr [esi + 0x74], 0x10aaa
// 0080c893  e8181d0800           call 0x88e5b0
// 0080c898  c7467802000000       mov dword ptr [esi + 0x78], 2
// 0080c89f  c7462001000000       mov dword ptr [esi + 0x20], 1
// 0080c8a6  8bc6                 mov eax, esi
// 0080c8a8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080c8ac  64890d00000000       mov dword ptr fs:[0], ecx
// 0080c8b3  59                   pop ecx
// 0080c8b4  5f                   pop edi
// 0080c8b5  5e                   pop esi
// 0080c8b6  83c410               add esp, 0x10
// 0080c8b9  c3                   ret 
// copied from an identical function in another client (function ??0CXTPImageManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp