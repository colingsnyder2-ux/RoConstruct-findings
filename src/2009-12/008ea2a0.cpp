// roc 2009-12 008ea2a0  unit: CXTPRibbonGroup  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea2a0
//
// 008ea2a0  53                   push ebx
// 008ea2a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008ea2a5  55                   push ebp
// 008ea2a6  56                   push esi
// 008ea2a7  57                   push edi
// 008ea2a8  8bf9                 mov edi, ecx
// 008ea2aa  85db                 test ebx, ebx
// 008ea2ac  7c05                 jl 0x8ea2b3
// 008ea2ae  3b5f4c               cmp ebx, dword ptr [edi + 0x4c]
// 008ea2b1  7c03                 jl 0x8ea2b6
// 008ea2b3  8b5f4c               mov ebx, dword ptr [edi + 0x4c]
// 008ea2b6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008ea2ba  8b4500               mov eax, dword ptr [ebp]
// 008ea2bd  8b10                 mov edx, dword ptr [eax]
// 008ea2bf  8bcd                 mov ecx, ebp
// 008ea2c1  ffd2                 call edx
// 008ea2c3  8bc8                 mov ecx, eax
// 008ea2c5  e8989ff0ff           call 0x7f4262
// 008ea2ca  8bf0                 mov esi, eax
// 008ea2cc  85f6                 test esi, esi
// 008ea2ce  7507                 jne 0x8ea2d7
// 008ea2d0  5f                   pop edi
// 008ea2d1  5e                   pop esi
// 008ea2d2  5d                   pop ebp
// 008ea2d3  5b                   pop ebx
// 008ea2d4  c20c00               ret 0xc
// 008ea2d7  8b4768               mov eax, dword ptr [edi + 0x68]
// 008ea2da  8b8880000000         mov ecx, dword ptr [eax + 0x80]
// 008ea2e0  2b4f4c               sub ecx, dword ptr [edi + 0x4c]
// 008ea2e3  8b575c               mov edx, dword ptr [edi + 0x5c]
// 008ea2e6  03cb                 add ecx, ebx
// 008ea2e8  51                   push ecx
// 008ea2e9  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008ea2ef  56                   push esi
// 008ea2f0  e86bcff5ff           call 0x847260
// 008ea2f5  6a01                 push 1
// 008ea2f7  56                   push esi
// 008ea2f8  53                   push ebx
// 008ea2f9  8d4f44               lea ecx, [edi + 0x44]
// 008ea2fc  e83f380000           call 0x8edb40
// 008ea301  8d4604               lea eax, [esi + 4]
// 008ea304  50                   push eax
// 008ea305  ff150cb29800         call dword ptr [0x98b20c]
// 008ea30b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ea30f  8b16                 mov edx, dword ptr [esi]
// 008ea311  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 008ea317  50                   push eax
// 008ea318  55                   push ebp
// 008ea319  8bce                 mov ecx, esi
// 008ea31b  ffd2                 call edx
// 008ea31d  8bcf                 mov ecx, edi
// 008ea31f  89be58010000         mov dword ptr [esi + 0x158], edi
// 008ea325  e836f2ffff           call 0x8e9560
// 008ea32a  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008ea330  85c0                 test eax, eax
// 008ea332  8b06                 mov eax, dword ptr [esi]
// 008ea334  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008ea33a  7514                 jne 0x8ea350
// 008ea33c  81c980000000         or ecx, 0x80
// 008ea342  51                   push ecx
// 008ea343  8bce                 mov ecx, esi
// 008ea345  ffd2                 call edx
// 008ea347  5f                   pop edi
// 008ea348  8bc6                 mov eax, esi
// 008ea34a  5e                   pop esi
// 008ea34b  5d                   pop ebp
// 008ea34c  5b                   pop ebx
// 008ea34d  c20c00               ret 0xc
// 008ea350  81e17fffffff         and ecx, 0xffffff7f
// 008ea356  51                   push ecx
// 008ea357  8bce                 mov ecx, esi
// 008ea359  ffd2                 call edx
// 008ea35b  5f                   pop edi
// 008ea35c  8bc6                 mov eax, esi
// 008ea35e  5e                   pop esi
// 008ea35f  5d                   pop ebp
// 008ea360  5b                   pop ebx
// 008ea361  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddClone@CXTPRibbonGroup@@QAEPAVCXTPControl@@PAV2@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp