// roc 2009-12 008e7c30  unit: CXTPTabPaintManager::CColorSetVisualStudio  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e7c30
//
// 008e7c30  56                   push esi
// 008e7c31  8bf1                 mov esi, ecx
// 008e7c33  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008e7c39  e8a2ccf7ff           call 0x8648e0
// 008e7c3e  83f807               cmp eax, 7
// 008e7c41  0f8495000000         je 0x8e7cdc
// 008e7c47  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008e7c4d  e88eccf7ff           call 0x8648e0
// 008e7c52  83f804               cmp eax, 4
// 008e7c55  0f8481000000         je 0x8e7cdc
// 008e7c5b  57                   push edi
// 008e7c5c  e86f7df4ff           call 0x82f9d0
// 008e7c61  6a12                 push 0x12
// 008e7c63  8bc8                 mov ecx, eax
// 008e7c65  e89674f4ff           call 0x82f100
// 008e7c6a  8bf0                 mov esi, eax
// 008e7c6c  e85f7df4ff           call 0x82f9d0
// 008e7c71  6a0f                 push 0xf
// 008e7c73  8bc8                 mov ecx, eax
// 008e7c75  e88674f4ff           call 0x82f100
// 008e7c7a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e7c7e  83792000             cmp dword ptr [ecx + 0x20], 0
// 008e7c82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008e7c86  7437                 je 0x8e7cbf
// 008e7c88  83792400             cmp dword ptr [ecx + 0x24], 0
// 008e7c8c  741b                 je 0x8e7ca9
// 008e7c8e  50                   push eax
// 008e7c8f  56                   push esi
// 008e7c90  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008e7c94  56                   push esi
// 008e7c95  8bcf                 mov ecx, edi
// 008e7c97  e85cc9f0ff           call 0x7f45f8
// 008e7c9c  6a01                 push 1
// 008e7c9e  6a01                 push 1
// 008e7ca0  56                   push esi
// 008e7ca1  ff156ccc9800         call dword ptr [0x98cc6c]
// 008e7ca7  eb16                 jmp 0x8e7cbf
// 008e7ca9  8b510c               mov edx, dword ptr [ecx + 0xc]
// 008e7cac  394a10               cmp dword ptr [edx + 0x10], ecx
// 008e7caf  750e                 jne 0x8e7cbf
// 008e7cb1  56                   push esi
// 008e7cb2  50                   push eax
// 008e7cb3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e7cb7  50                   push eax
// 008e7cb8  8bcf                 mov ecx, edi
// 008e7cba  e839c9f0ff           call 0x7f45f8
// 008e7cbf  e80c7df4ff           call 0x82f9d0
// 008e7cc4  6a31                 push 0x31
// 008e7cc6  8bc8                 mov ecx, eax
// 008e7cc8  e83374f4ff           call 0x82f100
// 008e7ccd  8b17                 mov edx, dword ptr [edi]
// 008e7ccf  50                   push eax
// 008e7cd0  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e7cd3  8bcf                 mov ecx, edi
// 008e7cd5  ffd0                 call eax
// 008e7cd7  5f                   pop edi
// 008e7cd8  5e                   pop esi
// 008e7cd9  c20c00               ret 0xc
// 008e7cdc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e7ce0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008e7ce4  8b442408             mov eax, dword ptr [esp + 8]
// 008e7ce8  51                   push ecx
// 008e7ce9  52                   push edx
// 008e7cea  50                   push eax
// 008e7ceb  8bce                 mov ecx, esi
// 008e7ced  e8eefdffff           call 0x8e7ae0
// 008e7cf2  5e                   pop esi
// 008e7cf3  c20c00               ret 0xc
// copied from an identical function in another client (function ?FillNavigateButton@CColorSetVisualStudio@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp