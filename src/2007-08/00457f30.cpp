// roc 2007-08 00457f30  unit: RBX::Adorn  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457f30
//
// 00457f30  8a442408             mov al, byte ptr [esp + 8]
// 00457f34  56                   push esi
// 00457f35  57                   push edi
// 00457f36  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00457f3a  8bf1                 mov esi, ecx
// 00457f3c  893e                 mov dword ptr [esi], edi
// 00457f3e  884628               mov byte ptr [esi + 0x28], al
// 00457f41  a1344c8c00           mov eax, dword ptr [0x8c4c34]
// 00457f46  85c0                 test eax, eax
// 00457f48  7435                 je 0x457f7f
// 00457f4a  50                   push eax
// 00457f4b  ff1558d27700         call dword ptr [0x77d258]
// 00457f51  8d4e20               lea ecx, [esi + 0x20]
// 00457f54  51                   push ecx
// 00457f55  8d5618               lea edx, [esi + 0x18]
// 00457f58  894604               mov dword ptr [esi + 4], eax
// 00457f5b  52                   push edx
// 00457f5c  8d4610               lea eax, [esi + 0x10]
// 00457f5f  50                   push eax
// 00457f60  8d4e08               lea ecx, [esi + 8]
// 00457f63  51                   push ecx
// 00457f64  ff155cd27700         call dword ptr [0x77d25c]
// 00457f6a  50                   push eax
// 00457f6b  ff151cd37700         call dword ptr [0x77d31c]
// 00457f71  8b15344c8c00         mov edx, dword ptr [0x8c4c34]
// 00457f77  57                   push edi
// 00457f78  52                   push edx
// 00457f79  ff1560d27700         call dword ptr [0x77d260]
// 00457f7f  5f                   pop edi
// 00457f80  8bc6                 mov eax, esi
// 00457f82  5e                   pop esi
// 00457f83  c20800               ret 8
// library rbxgs/v8kernel\Kernel.cpp (function ??0Mark@Profiling@RBX@@QAE@AAVCodeProfiler@12@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Kernel.cpp
