// roc 2009-12 0084a840  unit: CXTPControlSelector  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a840
//
// 0084a840  83ec54               sub esp, 0x54
// 0084a843  a10052b600           mov eax, dword ptr [0xb65200]
// 0084a848  33c4                 xor eax, esp
// 0084a84a  89442450             mov dword ptr [esp + 0x50], eax
// 0084a84e  56                   push esi
// 0084a84f  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0084a853  6a3c                 push 0x3c
// 0084a855  8d44241c             lea eax, [esp + 0x1c]
// 0084a859  6a00                 push 0
// 0084a85b  50                   push eax
// 0084a85c  e843a2faff           call 0x7f4aa4
// 0084a861  83c40c               add esp, 0xc
// 0084a864  6a00                 push 0
// 0084a866  8d4c2408             lea ecx, [esp + 8]
// 0084a86a  c644243800           mov byte ptr [esp + 0x38], 0
// 0084a86f  c644243301           mov byte ptr [esp + 0x33], 1
// 0084a874  e811bc0d00           call 0x92648a
// 0084a879  8b542408             mov edx, dword ptr [esp + 8]
// 0084a87d  6a00                 push 0
// 0084a87f  56                   push esi
// 0084a880  68f0a78400           push 0x84a7f0
// 0084a885  8d4c2424             lea ecx, [esp + 0x24]
// 0084a889  51                   push ecx
// 0084a88a  52                   push edx
// 0084a88b  ff1588b19800         call dword ptr [0x98b188]
// 0084a891  8bf0                 mov esi, eax
// 0084a893  f7de                 neg esi
// 0084a895  1bf6                 sbb esi, esi
// 0084a897  8d4c2404             lea ecx, [esp + 4]
// 0084a89b  46                   inc esi
// 0084a89c  e8e3bb0d00           call 0x926484
// 0084a8a1  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0084a8a5  8bc6                 mov eax, esi
// 0084a8a7  5e                   pop esi
// 0084a8a8  33cc                 xor ecx, esp
// 0084a8aa  e8ebaafaff           call 0x7f539a
// 0084a8af  83c454               add esp, 0x54
// 0084a8b2  c3                   ret 
// copied from an identical function in another client (function ?FontExists@CXTPDrawHelpers@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp