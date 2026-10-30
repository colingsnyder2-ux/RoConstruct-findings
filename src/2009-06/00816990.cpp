// roc 2009-06 00816990  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00816990
//
// 00816990  6aff                 push -1
// 00816992  68c5278800           push 0x8827c5
// 00816997  64a100000000         mov eax, dword ptr fs:[0]
// 0081699d  50                   push eax
// 0081699e  83ec3c               sub esp, 0x3c
// 008169a1  53                   push ebx
// 008169a2  55                   push ebp
// 008169a3  56                   push esi
// 008169a4  57                   push edi
// 008169a5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 008169aa  33c4                 xor eax, esp
// 008169ac  50                   push eax
// 008169ad  8d442450             lea eax, [esp + 0x50]
// 008169b1  64a300000000         mov dword ptr fs:[0], eax
// 008169b7  8bf1                 mov esi, ecx
// 008169b9  e8628ff0ff           call 0x71f920
// 008169be  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 008169c2  8bf8                 mov edi, eax
// 008169c4  8d87f8000000         lea eax, [edi + 0xf8]
// 008169ca  50                   push eax
// 008169cb  55                   push ebp
// 008169cc  8d4c2448             lea ecx, [esp + 0x48]
// 008169d0  e88b9ef5ff           call 0x770860
// 008169d5  8b17                 mov edx, dword ptr [edi]
// 008169d7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008169da  56                   push esi
// 008169db  8bcf                 mov ecx, edi
// 008169dd  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008169e5  ffd0                 call eax
// 008169e7  8b5500               mov edx, dword ptr [ebp]
// 008169ea  50                   push eax
// 008169eb  8b4238               mov eax, dword ptr [edx + 0x38]
// 008169ee  8bcd                 mov ecx, ebp
// 008169f0  ffd0                 call eax
// 008169f2  6a01                 push 1
// 008169f4  8bcd                 mov ecx, ebp
// 008169f6  e80b550300           call 0x84bf06
// 008169fb  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00816a01  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00816a07  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 00816a0d  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00816a13  8954243c             mov dword ptr [esp + 0x3c], edx
// 00816a17  83c2fb               add edx, -5
// 00816a1a  89542460             mov dword ptr [esp + 0x60], edx
// 00816a1e  83c004               add eax, 4
// 00816a21  89442424             mov dword ptr [esp + 0x24], eax
// 00816a25  8b442460             mov eax, dword ptr [esp + 0x60]
// 00816a29  8d5307               lea edx, [ebx + 7]
// 00816a2c  89542420             mov dword ptr [esp + 0x20], edx
// 00816a30  8b16                 mov edx, dword ptr [esi]
// 00816a32  8b5258               mov edx, dword ptr [edx + 0x58]
// 00816a35  8944242c             mov dword ptr [esp + 0x2c], eax
// 00816a39  8d442418             lea eax, [esp + 0x18]
// 00816a3d  894c2438             mov dword ptr [esp + 0x38], ecx
// 00816a41  894c2428             mov dword ptr [esp + 0x28], ecx
// 00816a45  50                   push eax
// 00816a46  8bce                 mov ecx, esi
// 00816a48  ffd2                 call edx
// 00816a4a  8bf0                 mov esi, eax
// 00816a4c  8b4500               mov eax, dword ptr [ebp]
// 00816a4f  6a20                 push 0x20
// 00816a51  8d4c2424             lea ecx, [esp + 0x24]
// 00816a55  51                   push ecx
// 00816a56  8bce                 mov ecx, esi
// 00816a58  c644246001           mov byte ptr [esp + 0x60], 1
// 00816a5d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00816a61  ff1554fb8900         call dword ptr [0x89fb54]
// 00816a67  50                   push eax
// 00816a68  8bce                 mov ecx, esi
// 00816a6a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00816a70  8b542420             mov edx, dword ptr [esp + 0x20]
// 00816a74  50                   push eax
// 00816a75  8b4270               mov eax, dword ptr [edx + 0x70]
// 00816a78  8bcd                 mov ecx, ebp
// 00816a7a  ffd0                 call eax
// 00816a7c  8d4c2418             lea ecx, [esp + 0x18]
// 00816a80  c644245800           mov byte ptr [esp + 0x58], 0
// 00816a85  ff1510fd8900         call dword ptr [0x89fd10]
// 00816a8b  51                   push ecx
// 00816a8c  8bcc                 mov ecx, esp
// 00816a8e  89642418             mov dword ptr [esp + 0x18], esp
// 00816a92  68e8ea9000           push 0x90eae8
// 00816a97  ff1508fd8900         call dword ptr [0x89fd08]
// 00816a9d  51                   push ecx
// 00816a9e  8bcc                 mov ecx, esp
// 00816aa0  89642424             mov dword ptr [esp + 0x24], esp
// 00816aa4  6820039000           push 0x900320
// 00816aa9  c644246402           mov byte ptr [esp + 0x64], 2
// 00816aae  ff1508fd8900         call dword ptr [0x89fd08]
// 00816ab4  8bcf                 mov ecx, edi
// 00816ab6  c644246003           mov byte ptr [esp + 0x60], 3
// 00816abb  e8f0d2f8ff           call 0x7a3db0
// 00816ac0  8bc8                 mov ecx, eax
// 00816ac2  c644246000           mov byte ptr [esp + 0x60], 0
// 00816ac7  e834fbfeff           call 0x806600
// 00816acc  8b742438             mov esi, dword ptr [esp + 0x38]
// 00816ad0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00816ad4  50                   push eax
// 00816ad5  56                   push esi
// 00816ad6  83c1fa               add ecx, -6
// 00816ad9  51                   push ecx
// 00816ada  53                   push ebx
// 00816adb  55                   push ebp
// 00816adc  8bcf                 mov ecx, edi
// 00816ade  e8cdbef0ff           call 0x7229b0
// 00816ae3  51                   push ecx
// 00816ae4  8bcc                 mov ecx, esp
// 00816ae6  89642420             mov dword ptr [esp + 0x20], esp
// 00816aea  68ccea9000           push 0x90eacc
// 00816aef  ff1508fd8900         call dword ptr [0x89fd08]
// 00816af5  51                   push ecx
// 00816af6  8bcc                 mov ecx, esp
// 00816af8  8964241c             mov dword ptr [esp + 0x1c], esp
// 00816afc  6820039000           push 0x900320
// 00816b01  c644246404           mov byte ptr [esp + 0x64], 4
// 00816b06  ff1508fd8900         call dword ptr [0x89fd08]
// 00816b0c  8bcf                 mov ecx, edi
// 00816b0e  c644246005           mov byte ptr [esp + 0x60], 5
// 00816b13  e898d2f8ff           call 0x7a3db0
// 00816b18  8bc8                 mov ecx, eax
// 00816b1a  c644246000           mov byte ptr [esp + 0x60], 0
// 00816b1f  e8dcfafeff           call 0x806600
// 00816b24  8b542460             mov edx, dword ptr [esp + 0x60]
// 00816b28  50                   push eax
// 00816b29  56                   push esi
// 00816b2a  52                   push edx
// 00816b2b  53                   push ebx
// 00816b2c  55                   push ebp
// 00816b2d  8bcf                 mov ecx, edi
// 00816b2f  e87cbef0ff           call 0x7229b0
// 00816b34  8d4c2440             lea ecx, [esp + 0x40]
// 00816b38  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00816b40  e89b9df5ff           call 0x7708e0
// 00816b45  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00816b49  64890d00000000       mov dword ptr fs:[0], ecx
// 00816b50  59                   pop ecx
// 00816b51  5f                   pop edi
// 00816b52  5e                   pop esi
// 00816b53  5d                   pop ebp
// 00816b54  5b                   pop ebx
// 00816b55  83c448               add esp, 0x48
// 00816b58  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp