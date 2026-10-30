// roc 2009-12 008e7ae0  unit: CXTPTabPaintManager::CColorSetDefault  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e7ae0
//
// 008e7ae0  56                   push esi
// 008e7ae1  57                   push edi
// 008e7ae2  e8e97ef4ff           call 0x82f9d0
// 008e7ae7  6a10                 push 0x10
// 008e7ae9  8bc8                 mov ecx, eax
// 008e7aeb  e81076f4ff           call 0x82f100
// 008e7af0  8bf0                 mov esi, eax
// 008e7af2  e8d97ef4ff           call 0x82f9d0
// 008e7af7  6a14                 push 0x14
// 008e7af9  8bc8                 mov ecx, eax
// 008e7afb  e80076f4ff           call 0x82f100
// 008e7b00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e7b04  83792000             cmp dword ptr [ecx + 0x20], 0
// 008e7b08  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008e7b0c  7437                 je 0x8e7b45
// 008e7b0e  83792400             cmp dword ptr [ecx + 0x24], 0
// 008e7b12  741b                 je 0x8e7b2f
// 008e7b14  50                   push eax
// 008e7b15  56                   push esi
// 008e7b16  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008e7b1a  56                   push esi
// 008e7b1b  8bcf                 mov ecx, edi
// 008e7b1d  e8d6caf0ff           call 0x7f45f8
// 008e7b22  6a01                 push 1
// 008e7b24  6a01                 push 1
// 008e7b26  56                   push esi
// 008e7b27  ff156ccc9800         call dword ptr [0x98cc6c]
// 008e7b2d  eb16                 jmp 0x8e7b45
// 008e7b2f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 008e7b32  394a10               cmp dword ptr [edx + 0x10], ecx
// 008e7b35  750e                 jne 0x8e7b45
// 008e7b37  56                   push esi
// 008e7b38  50                   push eax
// 008e7b39  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e7b3d  50                   push eax
// 008e7b3e  8bcf                 mov ecx, edi
// 008e7b40  e8b3caf0ff           call 0x7f45f8
// 008e7b45  e8867ef4ff           call 0x82f9d0
// 008e7b4a  6a12                 push 0x12
// 008e7b4c  8bc8                 mov ecx, eax
// 008e7b4e  e8ad75f4ff           call 0x82f100
// 008e7b53  8b17                 mov edx, dword ptr [edi]
// 008e7b55  50                   push eax
// 008e7b56  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e7b59  8bcf                 mov ecx, edi
// 008e7b5b  ffd0                 call eax
// 008e7b5d  5f                   pop edi
// 008e7b5e  5e                   pop esi
// 008e7b5f  c20c00               ret 0xc
// copied from an identical function in another client (function ?FillNavigateButton@CColorSetDefault@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp