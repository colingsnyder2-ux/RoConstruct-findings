// from server: 100% by auto
// roc 2007-08 004a37f0  unit: boost::Vmutex::?$sp_counted_impl_p  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a37f0
//
// 004a37f0  8b5104               mov edx, dword ptr [ecx + 4]
// 004a37f3  8b4204               mov eax, dword ptr [edx + 4]
// 004a37f6  83ec10               sub esp, 0x10
// 004a37f9  80781500             cmp byte ptr [eax + 0x15], 0
// 004a37fd  56                   push esi
// 004a37fe  57                   push edi
// 004a37ff  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004a3803  7516                 jne 0x4a381b
// 004a3805  8b37                 mov esi, dword ptr [edi]
// 004a3807  39700c               cmp dword ptr [eax + 0xc], esi
// 004a380a  7d05                 jge 0x4a3811
// 004a380c  8b4008               mov eax, dword ptr [eax + 8]
// 004a380f  eb04                 jmp 0x4a3815
// 004a3811  8bd0                 mov edx, eax
// 004a3813  8b00                 mov eax, dword ptr [eax]
// 004a3815  80781500             cmp byte ptr [eax + 0x15], 0
// 004a3819  74ec                 je 0x4a3807
// 004a381b  8b4104               mov eax, dword ptr [ecx + 4]
// 004a381e  3bd0                 cmp edx, eax
// 004a3820  8954240c             mov dword ptr [esp + 0xc], edx
// 004a3824  894c2408             mov dword ptr [esp + 8], ecx
// 004a3828  740d                 je 0x4a3837
// 004a382a  8b37                 mov esi, dword ptr [edi]
// 004a382c  3b720c               cmp esi, dword ptr [edx + 0xc]
// 004a382f  7c06                 jl 0x4a3837
// 004a3831  8d4c2408             lea ecx, [esp + 8]
// 004a3835  eb0c                 jmp 0x4a3843
// 004a3837  894c2410             mov dword ptr [esp + 0x10], ecx
// 004a383b  89442414             mov dword ptr [esp + 0x14], eax
// 004a383f  8d4c2410             lea ecx, [esp + 0x10]
// 004a3843  8b11                 mov edx, dword ptr [ecx]
// 004a3845  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a3849  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a384c  5f                   pop edi
// 004a384d  8910                 mov dword ptr [eax], edx
// 004a384f  894804               mov dword ptr [eax + 4], ecx
// 004a3852  5e                   pop esi
// 004a3853  83c410               add esp, 0x10
// 004a3856  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?find@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
