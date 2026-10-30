// from server: 100% by auto
// roc 2007-08 0068f9d0  unit: CXTPDockingPane  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f9d0
//
// 0068f9d0  56                   push esi
// 0068f9d1  57                   push edi
// 0068f9d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0068f9d6  8bf1                 mov esi, ecx
// 0068f9d8  8b06                 mov eax, dword ptr [esi]
// 0068f9da  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0068f9dd  57                   push edi
// 0068f9de  ffd2                 call edx
// 0068f9e0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068f9e4  85c0                 test eax, eax
// 0068f9e6  7409                 je 0x68f9f1
// 0068f9e8  833800               cmp dword ptr [eax], 0
// 0068f9eb  0f8486000000         je 0x68fa77
// 0068f9f1  85ff                 test edi, edi
// 0068f9f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0068f9f7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068f9fb  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068f9ff  89461c               mov dword ptr [esi + 0x1c], eax
// 0068fa02  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0068fa06  894e20               mov dword ptr [esi + 0x20], ecx
// 0068fa09  895624               mov dword ptr [esi + 0x24], edx
// 0068fa0c  894628               mov dword ptr [esi + 0x28], eax
// 0068fa0f  7466                 je 0x68fa77
// 0068fa11  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0068fa14  85c9                 test ecx, ecx
// 0068fa16  745f                 je 0x68fa77
// 0068fa18  8b01                 mov eax, dword ptr [ecx]
// 0068fa1a  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0068fa1d  6a02                 push 2
// 0068fa1f  8d542414             lea edx, [esp + 0x14]
// 0068fa23  52                   push edx
// 0068fa24  8b5020               mov edx, dword ptr [eax + 0x20]
// 0068fa27  ffd2                 call edx
// 0068fa29  50                   push eax
// 0068fa2a  57                   push edi
// 0068fa2b  ff152cee7700         call dword ptr [0x77ee2c]
// 0068fa31  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0068fa37  85c0                 test eax, eax
// 0068fa39  7421                 je 0x68fa5c
// 0068fa3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068fa3f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0068fa43  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0068fa47  6a01                 push 1
// 0068fa49  2bd1                 sub edx, ecx
// 0068fa4b  52                   push edx
// 0068fa4c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068fa50  2bfa                 sub edi, edx
// 0068fa52  57                   push edi
// 0068fa53  51                   push ecx
// 0068fa54  52                   push edx
// 0068fa55  50                   push eax
// 0068fa56  ff1554ed7700         call dword ptr [0x77ed54]
// 0068fa5c  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0068fa62  85c0                 test eax, eax
// 0068fa64  7411                 je 0x68fa77
// 0068fa66  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0068fa6c  83e101               and ecx, 1
// 0068fa6f  51                   push ecx
// 0068fa70  50                   push eax
// 0068fa71  ff15f8ec7700         call dword ptr [0x77ecf8]
// 0068fa77  5f                   pop edi
// 0068fa78  5e                   pop esi
// 0068fa79  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?OnSizeParent@CXTPDockingPane@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
