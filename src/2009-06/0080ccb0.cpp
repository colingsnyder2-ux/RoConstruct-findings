// roc 2009-06 0080ccb0  unit: CXTPTabPaintManager::CColorSetDefault  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ccb0
//
// 0080ccb0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080ccb4  53                   push ebx
// 0080ccb5  55                   push ebp
// 0080ccb6  56                   push esi
// 0080ccb7  57                   push edi
// 0080ccb8  8b7860               mov edi, dword ptr [eax + 0x60]
// 0080ccbb  8bf1                 mov esi, ecx
// 0080ccbd  394704               cmp dword ptr [edi + 4], eax
// 0080ccc0  0f84ad000000         je 0x80cd73
// 0080ccc6  8b07                 mov eax, dword ptr [edi]
// 0080ccc8  8b5048               mov edx, dword ptr [eax + 0x48]
// 0080cccb  8bcf                 mov ecx, edi
// 0080cccd  ffd2                 call edx
// 0080cccf  83f802               cmp eax, 2
// 0080ccd2  740d                 je 0x80cce1
// 0080ccd4  8b07                 mov eax, dword ptr [edi]
// 0080ccd6  8b5048               mov edx, dword ptr [eax + 0x48]
// 0080ccd9  8bcf                 mov ecx, edi
// 0080ccdb  ffd2                 call edx
// 0080ccdd  85c0                 test eax, eax
// 0080ccdf  7549                 jne 0x80cd2a
// 0080cce1  e83a7ef4ff           call 0x754b20
// 0080cce6  6a14                 push 0x14
// 0080cce8  8bc8                 mov ecx, eax
// 0080ccea  e8b175f4ff           call 0x7542a0
// 0080ccef  8bf0                 mov esi, eax
// 0080ccf1  e82a7ef4ff           call 0x754b20
// 0080ccf6  6a10                 push 0x10
// 0080ccf8  8bc8                 mov ecx, eax
// 0080ccfa  e8a175f4ff           call 0x7542a0
// 0080ccff  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080cd03  8b542420             mov edx, dword ptr [esp + 0x20]
// 0080cd07  56                   push esi
// 0080cd08  50                   push eax
// 0080cd09  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080cd0d  2bc8                 sub ecx, eax
// 0080cd0f  83e904               sub ecx, 4
// 0080cd12  51                   push ecx
// 0080cd13  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080cd17  6a02                 push 2
// 0080cd19  83c002               add eax, 2
// 0080cd1c  50                   push eax
// 0080cd1d  52                   push edx
// 0080cd1e  e8edf90300           call 0x84c710
// 0080cd23  5f                   pop edi
// 0080cd24  5e                   pop esi
// 0080cd25  5d                   pop ebp
// 0080cd26  5b                   pop ebx
// 0080cd27  c21800               ret 0x18
// 0080cd2a  e8f17df4ff           call 0x754b20
// 0080cd2f  6a14                 push 0x14
// 0080cd31  8bc8                 mov ecx, eax
// 0080cd33  e86875f4ff           call 0x7542a0
// 0080cd38  8bf0                 mov esi, eax
// 0080cd3a  e8e17df4ff           call 0x754b20
// 0080cd3f  6a10                 push 0x10
// 0080cd41  8bc8                 mov ecx, eax
// 0080cd43  e85875f4ff           call 0x7542a0
// 0080cd48  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080cd4c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080cd50  56                   push esi
// 0080cd51  50                   push eax
// 0080cd52  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080cd56  2bc8                 sub ecx, eax
// 0080cd58  6a02                 push 2
// 0080cd5a  83e904               sub ecx, 4
// 0080cd5d  51                   push ecx
// 0080cd5e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080cd62  52                   push edx
// 0080cd63  83c002               add eax, 2
// 0080cd66  50                   push eax
// 0080cd67  e8a4f90300           call 0x84c710
// 0080cd6c  5f                   pop edi
// 0080cd6d  5e                   pop esi
// 0080cd6e  5d                   pop ebp
// 0080cd6f  5b                   pop ebx
// 0080cd70  c21800               ret 0x18
// 0080cd73  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0080cd79  83793400             cmp dword ptr [ecx + 0x34], 0
// 0080cd7d  741d                 je 0x80cd9c
// 0080cd7f  8b16                 mov edx, dword ptr [esi]
// 0080cd81  50                   push eax
// 0080cd82  8b4224               mov eax, dword ptr [edx + 0x24]
// 0080cd85  8bce                 mov ecx, esi
// 0080cd87  ffd0                 call eax
// 0080cd89  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0080cd8d  50                   push eax
// 0080cd8e  8d4c241c             lea ecx, [esp + 0x1c]
// 0080cd92  51                   push ecx
// 0080cd93  8bcf                 mov ecx, edi
// 0080cd95  e836caf0ff           call 0x7197d0
// 0080cd9a  eb5e                 jmp 0x80cdfa
// 0080cd9c  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0080cda2  83f8ff               cmp eax, -1
// 0080cda5  7508                 jne 0x80cdaf
// 0080cda7  8baef4000000         mov ebp, dword ptr [esi + 0xf4]
// 0080cdad  eb02                 jmp 0x80cdb1
// 0080cdaf  8be8                 mov ebp, eax
// 0080cdb1  8b9eec000000         mov ebx, dword ptr [esi + 0xec]
// 0080cdb7  83fbff               cmp ebx, -1
// 0080cdba  7506                 jne 0x80cdc2
// 0080cdbc  8b9ee8000000         mov ebx, dword ptr [esi + 0xe8]
// 0080cdc2  8b17                 mov edx, dword ptr [edi]
// 0080cdc4  8b4248               mov eax, dword ptr [edx + 0x48]
// 0080cdc7  8bcf                 mov ecx, edi
// 0080cdc9  ffd0                 call eax
// 0080cdcb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080cdcf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0080cdd3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0080cdd7  50                   push eax
// 0080cdd8  55                   push ebp
// 0080cdd9  53                   push ebx
// 0080cdda  83ec10               sub esp, 0x10
// 0080cddd  8bc4                 mov eax, esp
// 0080cddf  8908                 mov dword ptr [eax], ecx
// 0080cde1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080cde5  895004               mov dword ptr [eax + 4], edx
// 0080cde8  8b542440             mov edx, dword ptr [esp + 0x40]
// 0080cdec  894808               mov dword ptr [eax + 8], ecx
// 0080cdef  57                   push edi
// 0080cdf0  8bce                 mov ecx, esi
// 0080cdf2  89500c               mov dword ptr [eax + 0xc], edx
// 0080cdf5  e886fbffff           call 0x80c980
// 0080cdfa  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0080ce00  83f8ff               cmp eax, -1
// 0080ce03  7508                 jne 0x80ce0d
// 0080ce05  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0080ce0b  eb02                 jmp 0x80ce0f
// 0080ce0d  8bc8                 mov ecx, eax
// 0080ce0f  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0080ce15  83f8ff               cmp eax, -1
// 0080ce18  7506                 jne 0x80ce20
// 0080ce1a  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0080ce20  51                   push ecx
// 0080ce21  50                   push eax
// 0080ce22  8d442420             lea eax, [esp + 0x20]
// 0080ce26  50                   push eax
// 0080ce27  8bcf                 mov ecx, edi
// 0080ce29  e89cc9f0ff           call 0x7197ca
// 0080ce2e  5f                   pop edi
// 0080ce2f  5e                   pop esi
// 0080ce30  5d                   pop ebp
// 0080ce31  5b                   pop ebx
// 0080ce32  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
