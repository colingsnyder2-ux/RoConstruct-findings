// roc 2007-08 0054ee90  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ee90
//
// 0054ee90  6aff                 push -1
// 0054ee92  681bb67500           push 0x75b61b
// 0054ee97  64a100000000         mov eax, dword ptr fs:[0]
// 0054ee9d  50                   push eax
// 0054ee9e  64892500000000       mov dword ptr fs:[0], esp
// 0054eea5  51                   push ecx
// 0054eea6  53                   push ebx
// 0054eea7  56                   push esi
// 0054eea8  57                   push edi
// 0054eea9  6a28                 push 0x28
// 0054eeab  8bf9                 mov edi, ecx
// 0054eead  e844100e00           call 0x62fef6
// 0054eeb2  83c404               add esp, 4
// 0054eeb5  8944240c             mov dword ptr [esp + 0xc], eax
// 0054eeb9  33f6                 xor esi, esi
// 0054eebb  3bc6                 cmp eax, esi
// 0054eebd  89742418             mov dword ptr [esp + 0x18], esi
// 0054eec1  7413                 je 0x54eed6
// 0054eec3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054eec7  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054eecb  51                   push ecx
// 0054eecc  52                   push edx
// 0054eecd  8bc8                 mov ecx, eax
// 0054eecf  e81cceffff           call 0x54bcf0
// 0054eed4  8bf0                 mov esi, eax
// 0054eed6  8d5f04               lea ebx, [edi + 4]
// 0054eed9  56                   push esi
// 0054eeda  8bcb                 mov ecx, ebx
// 0054eedc  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0054eee4  8937                 mov dword ptr [edi], esi
// 0054eee6  e8a5deffff           call 0x54cd90
// 0054eeeb  56                   push esi
// 0054eeec  56                   push esi
// 0054eeed  53                   push ebx
// 0054eeee  e82dddebff           call 0x40cc20
// 0054eef3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054eef7  83c40c               add esp, 0xc
// 0054eefa  8bc7                 mov eax, edi
// 0054eefc  5f                   pop edi
// 0054eefd  5e                   pop esi
// 0054eefe  5b                   pop ebx
// 0054eeff  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ef06  83c410               add esp, 0x10
// 0054ef09  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp