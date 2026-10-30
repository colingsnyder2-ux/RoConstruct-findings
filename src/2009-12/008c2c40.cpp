// roc 2009-12 008c2c40  unit: CXTPImageEditorPicture::PAVCAlphaBitmap::?$CList  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c2c40
//
// 008c2c40  6aff                 push -1
// 008c2c42  68af409600           push 0x9640af
// 008c2c47  64a100000000         mov eax, dword ptr fs:[0]
// 008c2c4d  50                   push eax
// 008c2c4e  51                   push ecx
// 008c2c4f  56                   push esi
// 008c2c50  57                   push edi
// 008c2c51  a10052b600           mov eax, dword ptr [0xb65200]
// 008c2c56  33c4                 xor eax, esp
// 008c2c58  50                   push eax
// 008c2c59  8d442410             lea eax, [esp + 0x10]
// 008c2c5d  64a300000000         mov dword ptr fs:[0], eax
// 008c2c63  8bf1                 mov esi, ecx
// 008c2c65  8974240c             mov dword ptr [esp + 0xc], esi
// 008c2c69  c706b48ea000         mov dword ptr [esi], 0xa08eb4
// 008c2c6f  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008c2c72  c744241803000000     mov dword ptr [esp + 0x18], 3
// 008c2c7a  85c9                 test ecx, ecx
// 008c2c7c  7409                 je 0x8c2c87
// 008c2c7e  8b01                 mov eax, dword ptr [ecx]
// 008c2c80  8b5004               mov edx, dword ptr [eax + 4]
// 008c2c83  6a01                 push 1
// 008c2c85  ffd2                 call edx
// 008c2c87  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008c2c8a  85c9                 test ecx, ecx
// 008c2c8c  7409                 je 0x8c2c97
// 008c2c8e  8b01                 mov eax, dword ptr [ecx]
// 008c2c90  8b5004               mov edx, dword ptr [eax + 4]
// 008c2c93  6a01                 push 1
// 008c2c95  ffd2                 call edx
// 008c2c97  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 008c2c9e  7425                 je 0x8c2cc5
// 008c2ca0  8dbe80000000         lea edi, [esi + 0x80]
// 008c2ca6  8bcf                 mov ecx, edi
// 008c2ca8  e8a356feff           call 0x8a8350
// 008c2cad  85c0                 test eax, eax
// 008c2caf  740b                 je 0x8c2cbc
// 008c2cb1  8b10                 mov edx, dword ptr [eax]
// 008c2cb3  8bc8                 mov ecx, eax
// 008c2cb5  8b4204               mov eax, dword ptr [edx + 4]
// 008c2cb8  6a01                 push 1
// 008c2cba  ffd0                 call eax
// 008c2cbc  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 008c2cc3  75e1                 jne 0x8c2ca6
// 008c2cc5  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008c2ccc  7425                 je 0x8c2cf3
// 008c2cce  8dbe9c000000         lea edi, [esi + 0x9c]
// 008c2cd4  8bcf                 mov ecx, edi
// 008c2cd6  e87556feff           call 0x8a8350
// 008c2cdb  85c0                 test eax, eax
// 008c2cdd  740b                 je 0x8c2cea
// 008c2cdf  8b10                 mov edx, dword ptr [eax]
// 008c2ce1  8bc8                 mov ecx, eax
// 008c2ce3  8b4204               mov eax, dword ptr [edx + 4]
// 008c2ce6  6a01                 push 1
// 008c2ce8  ffd0                 call eax
// 008c2cea  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008c2cf1  75e1                 jne 0x8c2cd4
// 008c2cf3  8d8e9c000000         lea ecx, [esi + 0x9c]
// 008c2cf9  c644241802           mov byte ptr [esp + 0x18], 2
// 008c2cfe  e8adfdffff           call 0x8c2ab0
// 008c2d03  8d8e80000000         lea ecx, [esi + 0x80]
// 008c2d09  c644241801           mov byte ptr [esp + 0x18], 1
// 008c2d0e  e89dfdffff           call 0x8c2ab0
// 008c2d13  8d4e68               lea ecx, [esi + 0x68]
// 008c2d16  c644241800           mov byte ptr [esp + 0x18], 0
// 008c2d1b  e888370600           call 0x9264a8
// 008c2d20  8bce                 mov ecx, esi
// 008c2d22  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008c2d2a  e8df3a0600           call 0x92680e
// 008c2d2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c2d33  64890d00000000       mov dword ptr fs:[0], ecx
// 008c2d3a  59                   pop ecx
// 008c2d3b  5f                   pop edi
// 008c2d3c  5e                   pop esi
// 008c2d3d  83c410               add esp, 0x10
// 008c2d40  c3                   ret 
// copied from an identical function in another client (function ??1CXTPImageEditorPicture@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp