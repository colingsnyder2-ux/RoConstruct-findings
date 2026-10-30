// roc 2009-12 008caa40  unit: CXTPPropertyGridPaintManager  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008caa40
//
// 008caa40  53                   push ebx
// 008caa41  55                   push ebp
// 008caa42  56                   push esi
// 008caa43  8b742414             mov esi, dword ptr [esp + 0x14]
// 008caa47  8b06                 mov eax, dword ptr [esi]
// 008caa49  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008caa4f  57                   push edi
// 008caa50  8bce                 mov ecx, esi
// 008caa52  ffd2                 call edx
// 008caa54  85c0                 test eax, eax
// 008caa56  746e                 je 0x8caac6
// 008caa58  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008caa5c  8bce                 mov ecx, esi
// 008caa5e  e85d9ef9ff           call 0x8648c0
// 008caa63  8b5828               mov ebx, dword ptr [eax + 0x28]
// 008caa66  83eb01               sub ebx, 1
// 008caa69  785b                 js 0x8caac6
// 008caa6b  eb07                 jmp 0x8caa74
// 008caa6d  8d4900               lea ecx, [ecx]
// 008caa70  8b742418             mov esi, dword ptr [esp + 0x18]
// 008caa74  8bce                 mov ecx, esi
// 008caa76  e8459ef9ff           call 0x8648c0
// 008caa7b  85db                 test ebx, ebx
// 008caa7d  7c0d                 jl 0x8caa8c
// 008caa7f  3b5828               cmp ebx, dword ptr [eax + 0x28]
// 008caa82  7d08                 jge 0x8caa8c
// 008caa84  8b4024               mov eax, dword ptr [eax + 0x24]
// 008caa87  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 008caa8a  eb02                 jmp 0x8caa8e
// 008caa8c  33ff                 xor edi, edi
// 008caa8e  8bcf                 mov ecx, edi
// 008caa90  e88bb8ffff           call 0x8c6320
// 008caa95  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008caa99  8b17                 mov edx, dword ptr [edi]
// 008caa9b  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008caa9e  83ec10               sub esp, 0x10
// 008caaa1  8bf5                 mov esi, ebp
// 008caaa3  2bf0                 sub esi, eax
// 008caaa5  8bc4                 mov eax, esp
// 008caaa7  8930                 mov dword ptr [eax], esi
// 008caaa9  894804               mov dword ptr [eax + 4], ecx
// 008caaac  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008caab0  896808               mov dword ptr [eax + 8], ebp
// 008caab3  89480c               mov dword ptr [eax + 0xc], ecx
// 008caab6  8b442424             mov eax, dword ptr [esp + 0x24]
// 008caaba  50                   push eax
// 008caabb  8bcf                 mov ecx, edi
// 008caabd  ffd2                 call edx
// 008caabf  83eb01               sub ebx, 1
// 008caac2  8bee                 mov ebp, esi
// 008caac4  79aa                 jns 0x8caa70
// 008caac6  5f                   pop edi
// 008caac7  5e                   pop esi
// 008caac8  5d                   pop ebp
// 008caac9  5b                   pop ebx
// 008caaca  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawInplaceButtons@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp