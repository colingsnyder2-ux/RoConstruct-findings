// roc 2010-06 0088cd80  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088cd80
//
// 0088cd80  8b442408             mov eax, dword ptr [esp + 8]
// 0088cd84  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0088cd88  53                   push ebx
// 0088cd89  56                   push esi
// 0088cd8a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0088cd8e  8906                 mov dword ptr [esi], eax
// 0088cd90  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088cd94  57                   push edi
// 0088cd95  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0088cd99  895604               mov dword ptr [esi + 4], edx
// 0088cd9c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088cda0  894608               mov dword ptr [esi + 8], eax
// 0088cda3  57                   push edi
// 0088cda4  89560c               mov dword ptr [esi + 0xc], edx
// 0088cda7  e854ffffff           call 0x88cd00
// 0088cdac  8bd8                 mov ebx, eax
// 0088cdae  8b07                 mov eax, dword ptr [edi]
// 0088cdb0  8b5048               mov edx, dword ptr [eax + 0x48]
// 0088cdb3  8bcf                 mov ecx, edi
// 0088cdb5  ffd2                 call edx
// 0088cdb7  83f803               cmp eax, 3
// 0088cdba  7742                 ja 0x88cdfe
// 0088cdbc  ff248508ce8800       jmp dword ptr [eax*4 + 0x88ce08]
// 0088cdc3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088cdc7  03c3                 add eax, ebx
// 0088cdc9  89460c               mov dword ptr [esi + 0xc], eax
// 0088cdcc  5f                   pop edi
// 0088cdcd  8bc6                 mov eax, esi
// 0088cdcf  5e                   pop esi
// 0088cdd0  5b                   pop ebx
// 0088cdd1  c21800               ret 0x18
// 0088cdd4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088cdd8  03cb                 add ecx, ebx
// 0088cdda  5f                   pop edi
// 0088cddb  894e08               mov dword ptr [esi + 8], ecx
// 0088cdde  8bc6                 mov eax, esi
// 0088cde0  5e                   pop esi
// 0088cde1  5b                   pop ebx
// 0088cde2  c21800               ret 0x18
// 0088cde5  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088cde9  2bd3                 sub edx, ebx
// 0088cdeb  5f                   pop edi
// 0088cdec  895604               mov dword ptr [esi + 4], edx
// 0088cdef  8bc6                 mov eax, esi
// 0088cdf1  5e                   pop esi
// 0088cdf2  5b                   pop ebx
// 0088cdf3  c21800               ret 0x18
// 0088cdf6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088cdfa  2bc3                 sub eax, ebx
// 0088cdfc  8906                 mov dword ptr [esi], eax
// 0088cdfe  5f                   pop edi
// 0088cdff  8bc6                 mov eax, esi
// 0088ce01  5e                   pop esi
// 0088ce02  5b                   pop ebx
// 0088ce03  c21800               ret 0x18
// 0088ce06  8bff                 mov edi, edi
// 0088ce08  c3                   ret 
// 0088ce09  cd88                 int 0x88
// 0088ce0b  00d4                 add ah, dl
// 0088ce0d  cd88                 int 0x88
// 0088ce0f  00e5                 add ch, ah
// 0088ce11  cd88                 int 0x88
// 0088ce13  00f6                 add dh, dh
// 0088ce15  cd88                 int 0x88
// copied from an identical function in another client (function ?GetHeaderRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp