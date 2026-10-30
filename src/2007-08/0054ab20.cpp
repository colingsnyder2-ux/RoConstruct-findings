// roc 2007-08 0054ab20  unit: RBX::ServiceProvider  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ab20
//
// 0054ab20  6aff                 push -1
// 0054ab22  688c237500           push 0x75238c
// 0054ab27  64a100000000         mov eax, dword ptr fs:[0]
// 0054ab2d  50                   push eax
// 0054ab2e  64892500000000       mov dword ptr fs:[0], esp
// 0054ab35  51                   push ecx
// 0054ab36  56                   push esi
// 0054ab37  8bf1                 mov esi, ecx
// 0054ab39  57                   push edi
// 0054ab3a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0054ab3e  8b07                 mov eax, dword ptr [edi]
// 0054ab40  8906                 mov dword ptr [esi], eax
// 0054ab42  8b4f04               mov ecx, dword ptr [edi + 4]
// 0054ab45  894e04               mov dword ptr [esi + 4], ecx
// 0054ab48  8b5708               mov edx, dword ptr [edi + 8]
// 0054ab4b  895608               mov dword ptr [esi + 8], edx
// 0054ab4e  8b470c               mov eax, dword ptr [edi + 0xc]
// 0054ab51  89460c               mov dword ptr [esi + 0xc], eax
// 0054ab54  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0054ab57  894e10               mov dword ptr [esi + 0x10], ecx
// 0054ab5a  8b5714               mov edx, dword ptr [edi + 0x14]
// 0054ab5d  8d4718               lea eax, [edi + 0x18]
// 0054ab60  50                   push eax
// 0054ab61  8d4e18               lea ecx, [esi + 0x18]
// 0054ab64  8974240c             mov dword ptr [esp + 0xc], esi
// 0054ab68  895614               mov dword ptr [esi + 0x14], edx
// 0054ab6b  ff159ce67700         call dword ptr [0x77e69c]
// 0054ab71  8d4f34               lea ecx, [edi + 0x34]
// 0054ab74  51                   push ecx
// 0054ab75  8d4e34               lea ecx, [esi + 0x34]
// 0054ab78  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0054ab80  ff159ce67700         call dword ptr [0x77e69c]
// 0054ab86  8b5750               mov edx, dword ptr [edi + 0x50]
// 0054ab89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054ab8d  895650               mov dword ptr [esi + 0x50], edx
// 0054ab90  8b4754               mov eax, dword ptr [edi + 0x54]
// 0054ab93  894654               mov dword ptr [esi + 0x54], eax
// 0054ab96  5f                   pop edi
// 0054ab97  8bc6                 mov eax, esi
// 0054ab99  5e                   pop esi
// 0054ab9a  64890d00000000       mov dword ptr fs:[0], ecx
// 0054aba1  83c410               add esp, 0x10
// 0054aba4  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_params@iostreams@boost@@QAE@ABU012@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp