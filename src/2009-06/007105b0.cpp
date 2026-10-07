// roc 2009-06 007105b0  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007105b0
//
// 007105b0  53                   push ebx
// 007105b1  55                   push ebp
// 007105b2  56                   push esi
// 007105b3  8bf1                 mov esi, ecx
// 007105b5  807e0400             cmp byte ptr [esi + 4], 0
// 007105b9  57                   push edi
// 007105ba  8b3e                 mov edi, dword ptr [esi]
// 007105bc  8b1f                 mov ebx, dword ptr [edi]
// 007105be  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 007105c1  7430                 je 0x7105f3
// 007105c3  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 007105c8  740a                 je 0x7105d4
// 007105ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 007105ce  8b08                 mov ecx, dword ptr [eax]
// 007105d0  8bc3                 mov eax, ebx
// 007105d2  eb08                 jmp 0x7105dc
// 007105d4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007105d8  8b09                 mov ecx, dword ptr [ecx]
// 007105da  8bc5                 mov eax, ebp
// 007105dc  2bc1                 sub eax, ecx
// 007105de  85c0                 test eax, eax
// 007105e0  7611                 jbe 0x7105f3
// 007105e2  8b5608               mov edx, dword ptr [esi + 8]
// 007105e5  50                   push eax
// 007105e6  51                   push ecx
// 007105e7  52                   push edx
// 007105e8  e89303e8ff           call 0x590980
// 007105ed  83c40c               add esp, 0xc
// 007105f0  894608               mov dword ptr [esi + 8], eax
// 007105f3  8b4708               mov eax, dword ptr [edi + 8]
// 007105f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 007105fa  89460c               mov dword ptr [esi + 0xc], eax
// 007105fd  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00710600  8b442418             mov eax, dword ptr [esp + 0x18]
// 00710604  5f                   pop edi
// 00710605  894e10               mov dword ptr [esi + 0x10], ecx
// 00710608  891a                 mov dword ptr [edx], ebx
// 0071060a  5e                   pop esi
// 0071060b  8928                 mov dword ptr [eax], ebp
// 0071060d  5d                   pop ebp
// 0071060e  5b                   pop ebx
// 0071060f  c20c00               ret 0xc
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?after@zlib_base@detail@iostreams@boost@@IAEXAAPBDAAPAD_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
