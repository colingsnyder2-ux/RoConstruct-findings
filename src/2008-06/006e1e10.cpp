// roc 2008-06 006e1e10  unit: CXTPControls  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1e10
//
// 006e1e10  83ec10               sub esp, 0x10
// 006e1e13  56                   push esi
// 006e1e14  8b742418             mov esi, dword ptr [esp + 0x18]
// 006e1e18  57                   push edi
// 006e1e19  8bf9                 mov edi, ecx
// 006e1e1b  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 006e1e21  8906                 mov dword ptr [esi], eax
// 006e1e23  897e38               mov dword ptr [esi + 0x38], edi
// 006e1e26  8b17                 mov edx, dword ptr [edi]
// 006e1e28  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 006e1e2e  ffd0                 call eax
// 006e1e30  894604               mov dword ptr [esi + 4], eax
// 006e1e33  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 006e1e39  894e14               mov dword ptr [esi + 0x14], ecx
// 006e1e3c  57                   push edi
// 006e1e3d  8d4c240c             lea ecx, [esp + 0xc]
// 006e1e41  e88a5c0100           call 0x6f7ad0
// 006e1e46  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 006e1e4c  85c9                 test ecx, ecx
// 006e1e4e  740a                 je 0x6e1e5a
// 006e1e50  8d542408             lea edx, [esp + 8]
// 006e1e54  52                   push edx
// 006e1e55  e842f6fbff           call 0x6a149c
// 006e1e5a  837f2000             cmp dword ptr [edi + 0x20], 0
// 006e1e5e  7406                 je 0x6e1e66
// 006e1e60  8d442408             lea eax, [esp + 8]
// 006e1e64  eb09                 jmp 0x6e1e6f
// 006e1e66  8b8784010000         mov eax, dword ptr [edi + 0x184]
// 006e1e6c  83c028               add eax, 0x28
// 006e1e6f  8b08                 mov ecx, dword ptr [eax]
// 006e1e71  894e0c               mov dword ptr [esi + 0xc], ecx
// 006e1e74  8b5004               mov edx, dword ptr [eax + 4]
// 006e1e77  895610               mov dword ptr [esi + 0x10], edx
// 006e1e7a  33c0                 xor eax, eax
// 006e1e7c  83bf0001000004       cmp dword ptr [edi + 0x100], 4
// 006e1e83  0f94c0               sete al
// 006e1e86  894608               mov dword ptr [esi + 8], eax
// 006e1e89  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 006e1e8f  8b5114               mov edx, dword ptr [ecx + 0x14]
// 006e1e92  895618               mov dword ptr [esi + 0x18], edx
// 006e1e95  8b8784010000         mov eax, dword ptr [edi + 0x184]
// 006e1e9b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 006e1e9e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006e1ea1  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006e1ea4  83c018               add eax, 0x18
// 006e1ea7  895620               mov dword ptr [esi + 0x20], edx
// 006e1eaa  8b4808               mov ecx, dword ptr [eax + 8]
// 006e1ead  894e24               mov dword ptr [esi + 0x24], ecx
// 006e1eb0  8b500c               mov edx, dword ptr [eax + 0xc]
// 006e1eb3  895628               mov dword ptr [esi + 0x28], edx
// 006e1eb6  8b8784010000         mov eax, dword ptr [edi + 0x184]
// 006e1ebc  8b4828               mov ecx, dword ptr [eax + 0x28]
// 006e1ebf  894e30               mov dword ptr [esi + 0x30], ecx
// 006e1ec2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006e1ec5  895634               mov dword ptr [esi + 0x34], edx
// 006e1ec8  8b07                 mov eax, dword ptr [edi]
// 006e1eca  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 006e1ed0  8bcf                 mov ecx, edi
// 006e1ed2  ffd2                 call edx
// 006e1ed4  33c9                 xor ecx, ecx
// 006e1ed6  33d2                 xor edx, edx
// 006e1ed8  89463c               mov dword ptr [esi + 0x3c], eax
// 006e1edb  894e40               mov dword ptr [esi + 0x40], ecx
// 006e1ede  895644               mov dword ptr [esi + 0x44], edx
// 006e1ee1  894e48               mov dword ptr [esi + 0x48], ecx
// 006e1ee4  89564c               mov dword ptr [esi + 0x4c], edx
// 006e1ee7  85c0                 test eax, eax
// 006e1ee9  7424                 je 0x6e1f0f
// 006e1eeb  8b87d0010000         mov eax, dword ptr [edi + 0x1d0]
// 006e1ef1  894640               mov dword ptr [esi + 0x40], eax
// 006e1ef4  8b8fd4010000         mov ecx, dword ptr [edi + 0x1d4]
// 006e1efa  894e44               mov dword ptr [esi + 0x44], ecx
// 006e1efd  8b97d8010000         mov edx, dword ptr [edi + 0x1d8]
// 006e1f03  895648               mov dword ptr [esi + 0x48], edx
// 006e1f06  8b87dc010000         mov eax, dword ptr [edi + 0x1dc]
// 006e1f0c  89464c               mov dword ptr [esi + 0x4c], eax
// 006e1f0f  5f                   pop edi
// 006e1f10  5e                   pop esi
// 006e1f11  83c410               add esp, 0x10
// 006e1f14  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockState.cpp (function ?GetBarInfo@CXTPToolBar@@QAEXPAVCToolBarInfo@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockState.cpp
