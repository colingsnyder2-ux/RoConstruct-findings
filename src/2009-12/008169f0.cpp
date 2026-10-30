// roc 2009-12 008169f0  unit: MyXTPCommandBars  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008169f0
//
// 008169f0  53                   push ebx
// 008169f1  56                   push esi
// 008169f2  8bf1                 mov esi, ecx
// 008169f4  8b4674               mov eax, dword ptr [esi + 0x74]
// 008169f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008169fb  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 00816a02  894e5c               mov dword ptr [esi + 0x5c], ecx
// 00816a05  6a00                 push 0
// 00816a07  8bce                 mov ecx, esi
// 00816a09  e892e3ffff           call 0x814da0
// 00816a0e  33db                 xor ebx, ebx
// 00816a10  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 00816a16  7e38                 jle 0x816a50
// 00816a18  57                   push edi
// 00816a19  8da42400000000       lea esp, [esp]
// 00816a20  53                   push ebx
// 00816a21  8bce                 mov ecx, esi
// 00816a23  e8b8e2ffff           call 0x814ce0
// 00816a28  8bf8                 mov edi, eax
// 00816a2a  8b17                 mov edx, dword ptr [edi]
// 00816a2c  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00816a32  8bcf                 mov ecx, edi
// 00816a34  ffd0                 call eax
// 00816a36  8b17                 mov edx, dword ptr [edi]
// 00816a38  8b82f4010000         mov eax, dword ptr [edx + 0x1f4]
// 00816a3e  6a01                 push 1
// 00816a40  6a01                 push 1
// 00816a42  8bcf                 mov ecx, edi
// 00816a44  ffd0                 call eax
// 00816a46  43                   inc ebx
// 00816a47  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 00816a4d  7cd1                 jl 0x816a20
// 00816a4f  5f                   pop edi
// 00816a50  6a00                 push 0
// 00816a52  8bce                 mov ecx, esi
// 00816a54  e847dfffff           call 0x8149a0
// 00816a59  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00816a5c  51                   push ecx
// 00816a5d  8bce                 mov ecx, esi
// 00816a5f  e8dcf0ffff           call 0x815b40
// 00816a64  5e                   pop esi
// 00816a65  5b                   pop ebx
// 00816a66  c20400               ret 4
// copied from an identical function in another client (function ?SetCustomizeMode@CXTPCommandBars@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp