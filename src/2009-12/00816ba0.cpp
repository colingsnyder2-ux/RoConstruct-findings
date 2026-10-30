// roc 2009-12 00816ba0  unit: MyXTPCommandBars  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816ba0
//
// 00816ba0  56                   push esi
// 00816ba1  8bf1                 mov esi, ecx
// 00816ba3  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 00816ba6  57                   push edi
// 00816ba7  85c9                 test ecx, ecx
// 00816ba9  7405                 je 0x816bb0
// 00816bab  e82cd2fdff           call 0x7f3ddc
// 00816bb0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00816bb4  894e50               mov dword ptr [esi + 0x50], ecx
// 00816bb7  85c9                 test ecx, ecx
// 00816bb9  740a                 je 0x816bc5
// 00816bbb  8b01                 mov eax, dword ptr [ecx]
// 00816bbd  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 00816bc3  ffd2                 call edx
// 00816bc5  33ff                 xor edi, edi
// 00816bc7  39be84000000         cmp dword ptr [esi + 0x84], edi
// 00816bcd  7e1e                 jle 0x816bed
// 00816bcf  90                   nop 
// 00816bd0  57                   push edi
// 00816bd1  8bce                 mov ecx, esi
// 00816bd3  e808e1ffff           call 0x814ce0
// 00816bd8  8b10                 mov edx, dword ptr [eax]
// 00816bda  8bc8                 mov ecx, eax
// 00816bdc  8b8210020000         mov eax, dword ptr [edx + 0x210]
// 00816be2  ffd0                 call eax
// 00816be4  47                   inc edi
// 00816be5  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 00816beb  7ce3                 jl 0x816bd0
// 00816bed  8bce                 mov ecx, esi
// 00816bef  e80cdbffff           call 0x814700
// 00816bf4  8bc8                 mov ecx, eax
// 00816bf6  e8155dffff           call 0x80c910
// 00816bfb  8bce                 mov ecx, esi
// 00816bfd  e84eeaffff           call 0x815650
// 00816c02  5f                   pop edi
// 00816c03  5e                   pop esi
// 00816c04  c20400               ret 4
// copied from an identical function in another client (function ?SetPaintManager@CXTPCommandBars@@QAEXPAVCXTPPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp