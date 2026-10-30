// roc 2007-08 0054aa10  unit: RBX::ServiceProvider  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054aa10
//
// 0054aa10  6aff                 push -1
// 0054aa12  686e237500           push 0x75236e
// 0054aa17  64a100000000         mov eax, dword ptr fs:[0]
// 0054aa1d  50                   push eax
// 0054aa1e  64892500000000       mov dword ptr fs:[0], esp
// 0054aa25  51                   push ecx
// 0054aa26  56                   push esi
// 0054aa27  8bf1                 mov esi, ecx
// 0054aa29  89742404             mov dword ptr [esp + 4], esi
// 0054aa2d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054aa31  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054aa35  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054aa39  894e04               mov dword ptr [esi + 4], ecx
// 0054aa3c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0054aa40  895608               mov dword ptr [esi + 8], edx
// 0054aa43  8906                 mov dword ptr [esi], eax
// 0054aa45  8b442424             mov eax, dword ptr [esp + 0x24]
// 0054aa49  8d54242c             lea edx, [esp + 0x2c]
// 0054aa4d  894e10               mov dword ptr [esi + 0x10], ecx
// 0054aa50  52                   push edx
// 0054aa51  8d4e18               lea ecx, [esi + 0x18]
// 0054aa54  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0054aa5c  89460c               mov dword ptr [esi + 0xc], eax
// 0054aa5f  c6461400             mov byte ptr [esi + 0x14], 0
// 0054aa63  c6461500             mov byte ptr [esi + 0x15], 0
// 0054aa67  ff159ce67700         call dword ptr [0x77e69c]
// 0054aa6d  8d4e34               lea ecx, [esi + 0x34]
// 0054aa70  c644241002           mov byte ptr [esp + 0x10], 2
// 0054aa75  ff15a4e67700         call dword ptr [0x77e6a4]
// 0054aa7b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0054aa7f  8b442464             mov eax, dword ptr [esp + 0x64]
// 0054aa83  894e54               mov dword ptr [esi + 0x54], ecx
// 0054aa86  8d4c242c             lea ecx, [esp + 0x2c]
// 0054aa8a  894650               mov dword ptr [esi + 0x50], eax
// 0054aa8d  c644241000           mov byte ptr [esp + 0x10], 0
// 0054aa92  ff15ace67700         call dword ptr [0x77e6ac]
// 0054aa98  8d4c2448             lea ecx, [esp + 0x48]
// 0054aa9c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0054aaa4  ff15ace67700         call dword ptr [0x77e6ac]
// 0054aaaa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054aaae  8bc6                 mov eax, esi
// 0054aab0  5e                   pop esi
// 0054aab1  64890d00000000       mov dword ptr fs:[0], ecx
// 0054aab8  83c410               add esp, 0x10
// 0054aabb  c25400               ret 0x54
// copied from an identical function in another client (function ??0gzip_params@iostreams@boost@@QAE@HHHHHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_J@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp