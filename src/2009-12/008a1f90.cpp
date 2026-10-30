// roc 2009-12 008a1f90  unit: CXTPReportInplaceEdit  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1f90
//
// 008a1f90  6aff                 push -1
// 008a1f92  6888229600           push 0x962288
// 008a1f97  64a100000000         mov eax, dword ptr fs:[0]
// 008a1f9d  50                   push eax
// 008a1f9e  51                   push ecx
// 008a1f9f  56                   push esi
// 008a1fa0  57                   push edi
// 008a1fa1  a10052b600           mov eax, dword ptr [0xb65200]
// 008a1fa6  33c4                 xor eax, esp
// 008a1fa8  50                   push eax
// 008a1fa9  8d442410             lea eax, [esp + 0x10]
// 008a1fad  64a300000000         mov dword ptr fs:[0], eax
// 008a1fb3  8bf1                 mov esi, ecx
// 008a1fb5  8974240c             mov dword ptr [esp + 0xc], esi
// 008a1fb9  e88a21f5ff           call 0x7f4148
// 008a1fbe  c706c4989f00         mov dword ptr [esi], 0x9f98c4
// 008a1fc4  8d7e54               lea edi, [esi + 0x54]
// 008a1fc7  8bcf                 mov ecx, edi
// 008a1fc9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008a1fd1  e8baf2ffff           call 0x8a1290
// 008a1fd6  8d4e78               lea ecx, [esi + 0x78]
// 008a1fd9  c7066c55a000         mov dword ptr [esi], 0xa0556c
// 008a1fdf  c7075c55a000         mov dword ptr [edi], 0xa0555c
// 008a1fe5  ff1574de9800         call dword ptr [0x98de74]
// 008a1feb  c7868000000000000000 mov dword ptr [esi + 0x80], 0
// 008a1ff5  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 008a1ffc  8bc6                 mov eax, esi
// 008a1ffe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a2002  64890d00000000       mov dword ptr fs:[0], ecx
// 008a2009  59                   pop ecx
// 008a200a  5f                   pop edi
// 008a200b  5e                   pop esi
// 008a200c  83c410               add esp, 0x10
// 008a200f  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportInplaceList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportInplaceControls.cpp