// roc 2009-12 00878db0  unit: CXTPControlGallery  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878db0
//
// 00878db0  56                   push esi
// 00878db1  8d442408             lea eax, [esp + 8]
// 00878db5  50                   push eax
// 00878db6  8bf1                 mov esi, ecx
// 00878db8  e8e32bfcff           call 0x83b9a0
// 00878dbd  85c0                 test eax, eax
// 00878dbf  7530                 jne 0x878df1
// 00878dc1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00878dc5  8b542408             mov edx, dword ptr [esp + 8]
// 00878dc9  51                   push ecx
// 00878dca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00878dce  83ec10               sub esp, 0x10
// 00878dd1  8bc4                 mov eax, esp
// 00878dd3  8910                 mov dword ptr [eax], edx
// 00878dd5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00878dd9  894804               mov dword ptr [eax + 4], ecx
// 00878ddc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00878de0  895008               mov dword ptr [eax + 8], edx
// 00878de3  89480c               mov dword ptr [eax + 0xc], ecx
// 00878de6  8bce                 mov ecx, esi
// 00878de8  e8b3f9f7ff           call 0x7f87a0
// 00878ded  5e                   pop esi
// 00878dee  c21400               ret 0x14
// 00878df1  48                   dec eax
// 00878df2  50                   push eax
// 00878df3  8d4ee0               lea ecx, [esi - 0x20]
// 00878df6  e805f4ffff           call 0x878200
// 00878dfb  8bc8                 mov ecx, eax
// 00878dfd  85c9                 test ecx, ecx
// 00878dff  7509                 jne 0x878e0a
// 00878e01  b857000780           mov eax, 0x80070057
// 00878e06  5e                   pop esi
// 00878e07  c21400               ret 0x14
// 00878e0a  8b542418             mov edx, dword ptr [esp + 0x18]
// 00878e0e  b803000000           mov eax, 3
// 00878e13  668902               mov word ptr [edx], ax
// 00878e16  c7420800003000       mov dword ptr [edx + 8], 0x300000
// 00878e1d  e86ea10200           call 0x8a2f90
// 00878e22  3986d8010000         cmp dword ptr [esi + 0x1d8], eax
// 00878e28  7507                 jne 0x878e31
// 00878e2a  c7420804003000       mov dword ptr [edx + 8], 0x300004
// 00878e31  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 00878e37  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 00878e3a  7504                 jne 0x878e40
// 00878e3c  834a0802             or dword ptr [edx + 8], 2
// 00878e40  33c0                 xor eax, eax
// 00878e42  5e                   pop esi
// 00878e43  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleState@CXTPControlGallery@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp