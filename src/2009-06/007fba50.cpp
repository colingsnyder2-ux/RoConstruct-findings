// roc 2009-06 007fba50  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fba50
//
// 007fba50  83ec40               sub esp, 0x40
// 007fba53  53                   push ebx
// 007fba54  55                   push ebp
// 007fba55  56                   push esi
// 007fba56  57                   push edi
// 007fba57  8bf1                 mov esi, ecx
// 007fba59  e8a2b20000           call 0x806d00
// 007fba5e  8bc8                 mov ecx, eax
// 007fba60  e87b990000           call 0x8053e0
// 007fba65  85c0                 test eax, eax
// 007fba67  7518                 jne 0x7fba81
// 007fba69  8b742454             mov esi, dword ptr [esp + 0x54]
// 007fba6d  50                   push eax
// 007fba6e  56                   push esi
// 007fba6f  ff1500ee8900         call dword ptr [0x89ee00]
// 007fba75  8bc6                 mov eax, esi
// 007fba77  5f                   pop edi
// 007fba78  5e                   pop esi
// 007fba79  5d                   pop ebp
// 007fba7a  5b                   pop ebx
// 007fba7b  83c440               add esp, 0x40
// 007fba7e  c21c00               ret 0x1c
// 007fba81  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007fba85  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007fba89  8b16                 mov edx, dword ptr [esi]
// 007fba8b  8b5208               mov edx, dword ptr [edx + 8]
// 007fba8e  53                   push ebx
// 007fba8f  83ec10               sub esp, 0x10
// 007fba92  8bc4                 mov eax, esp
// 007fba94  8908                 mov dword ptr [eax], ecx
// 007fba96  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007fba9a  894804               mov dword ptr [eax + 4], ecx
// 007fba9d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007fbaa1  894808               mov dword ptr [eax + 8], ecx
// 007fbaa4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 007fbaab  89480c               mov dword ptr [eax + 0xc], ecx
// 007fbaae  8d442434             lea eax, [esp + 0x34]
// 007fbab2  50                   push eax
// 007fbab3  8bce                 mov ecx, esi
// 007fbab5  ffd2                 call edx
// 007fbab7  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fbaba  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007fbac0  bd08000000           mov ebp, 8
// 007fbac5  8b4c2808             mov ecx, dword ptr [eax + ebp + 8]
// 007fbac9  03c5                 add eax, ebp
// 007fbacb  83f9ff               cmp ecx, -1
// 007fbace  7505                 jne 0x7fbad5
// 007fbad0  8b4004               mov eax, dword ptr [eax + 4]
// 007fbad3  eb02                 jmp 0x7fbad7
// 007fbad5  8bc1                 mov eax, ecx
// 007fbad7  50                   push eax
// 007fbad8  8d4c2424             lea ecx, [esp + 0x24]
// 007fbadc  51                   push ecx
// 007fbadd  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007fbae1  e8eadcf1ff           call 0x7197d0
// 007fbae6  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007fbaea  8b16                 mov edx, dword ptr [esi]
// 007fbaec  8b520c               mov edx, dword ptr [edx + 0xc]
// 007fbaef  53                   push ebx
// 007fbaf0  83ec10               sub esp, 0x10
// 007fbaf3  8bc4                 mov eax, esp
// 007fbaf5  8908                 mov dword ptr [eax], ecx
// 007fbaf7  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007fbafb  894804               mov dword ptr [eax + 4], ecx
// 007fbafe  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007fbb02  894808               mov dword ptr [eax + 8], ecx
// 007fbb05  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 007fbb0c  89480c               mov dword ptr [eax + 0xc], ecx
// 007fbb0f  8d442424             lea eax, [esp + 0x24]
// 007fbb13  50                   push eax
// 007fbb14  8bce                 mov ecx, esi
// 007fbb16  ffd2                 call edx
// 007fbb18  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fbb1b  83783800             cmp dword ptr [eax + 0x38], 0
// 007fbb1f  756f                 jne 0x7fbb90
// 007fbb21  68ac069000           push 0x9006ac
// 007fbb26  e8d5b10000           call 0x806d00
// 007fbb2b  8bc8                 mov ecx, eax
// 007fbb2d  e8eeb00000           call 0x806c20
// 007fbb32  8bf8                 mov edi, eax
// 007fbb34  85ff                 test edi, edi
// 007fbb36  7458                 je 0x7fbb90
// 007fbb38  6a01                 push 1
// 007fbb3a  6a00                 push 0
// 007fbb3c  8d4c2448             lea ecx, [esp + 0x48]
// 007fbb40  51                   push ecx
// 007fbb41  8bcf                 mov ecx, edi
// 007fbb43  8bdd                 mov ebx, ebp
// 007fbb45  896c2448             mov dword ptr [esp + 0x48], ebp
// 007fbb49  e872a20000           call 0x805dc0
// 007fbb4e  83ec10               sub esp, 0x10
// 007fbb51  8bcc                 mov ecx, esp
// 007fbb53  8919                 mov dword ptr [ecx], ebx
// 007fbb55  896904               mov dword ptr [ecx + 4], ebp
// 007fbb58  8bd3                 mov edx, ebx
// 007fbb5a  895108               mov dword ptr [ecx + 8], edx
// 007fbb5d  89510c               mov dword ptr [ecx + 0xc], edx
// 007fbb60  8b10                 mov edx, dword ptr [eax]
// 007fbb62  83ec10               sub esp, 0x10
// 007fbb65  8bcc                 mov ecx, esp
// 007fbb67  8911                 mov dword ptr [ecx], edx
// 007fbb69  8b5004               mov edx, dword ptr [eax + 4]
// 007fbb6c  895104               mov dword ptr [ecx + 4], edx
// 007fbb6f  8b5008               mov edx, dword ptr [eax + 8]
// 007fbb72  8b400c               mov eax, dword ptr [eax + 0xc]
// 007fbb75  895108               mov dword ptr [ecx + 8], edx
// 007fbb78  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007fbb7c  89410c               mov dword ptr [ecx + 0xc], eax
// 007fbb7f  8d4c2430             lea ecx, [esp + 0x30]
// 007fbb83  51                   push ecx
// 007fbb84  52                   push edx
// 007fbb85  8bcf                 mov ecx, edi
// 007fbb87  e8049b0000           call 0x805690
// 007fbb8c  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007fbb90  8b761c               mov esi, dword ptr [esi + 0x1c]
// 007fbb93  837e3801             cmp dword ptr [esi + 0x38], 1
// 007fbb97  7565                 jne 0x7fbbfe
// 007fbb99  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 007fbb9f  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 007fbba5  83f9ff               cmp ecx, -1
// 007fbba8  7506                 jne 0x7fbbb0
// 007fbbaa  8b8830010000         mov ecx, dword ptr [eax + 0x130]
// 007fbbb0  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 007fbbb6  83faff               cmp edx, -1
// 007fbbb9  7508                 jne 0x7fbbc3
// 007fbbbb  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 007fbbc1  eb02                 jmp 0x7fbbc5
// 007fbbc3  8bc2                 mov eax, edx
// 007fbbc5  51                   push ecx
// 007fbbc6  50                   push eax
// 007fbbc7  8b03                 mov eax, dword ptr [ebx]
// 007fbbc9  8b5048               mov edx, dword ptr [eax + 0x48]
// 007fbbcc  8bcb                 mov ecx, ebx
// 007fbbce  ffd2                 call edx
// 007fbbd0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fbbd4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fbbd8  50                   push eax
// 007fbbd9  83ec10               sub esp, 0x10
// 007fbbdc  8bc4                 mov eax, esp
// 007fbbde  8908                 mov dword ptr [eax], ecx
// 007fbbe0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007fbbe4  895004               mov dword ptr [eax + 4], edx
// 007fbbe7  8b542438             mov edx, dword ptr [esp + 0x38]
// 007fbbeb  894808               mov dword ptr [eax + 8], ecx
// 007fbbee  89500c               mov dword ptr [eax + 0xc], edx
// 007fbbf1  8b442478             mov eax, dword ptr [esp + 0x78]
// 007fbbf5  50                   push eax
// 007fbbf6  e825e0ffff           call 0x7f9c20
// 007fbbfb  83c420               add esp, 0x20
// 007fbbfe  8b442454             mov eax, dword ptr [esp + 0x54]
// 007fbc02  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007fbc06  8b542424             mov edx, dword ptr [esp + 0x24]
// 007fbc0a  5f                   pop edi
// 007fbc0b  8908                 mov dword ptr [eax], ecx
// 007fbc0d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fbc11  895004               mov dword ptr [eax + 4], edx
// 007fbc14  8b542428             mov edx, dword ptr [esp + 0x28]
// 007fbc18  5e                   pop esi
// 007fbc19  5d                   pop ebp
// 007fbc1a  894808               mov dword ptr [eax + 8], ecx
// 007fbc1d  89500c               mov dword ptr [eax + 0xc], edx
// 007fbc20  5b                   pop ebx
// 007fbc21  83c440               add esp, 0x40
// 007fbc24  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
