// from server: 100% by auto
// roc 2010-06 0078fac0  unit: RBX::GroupDragTool  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fac0
//
// 0078fac0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0078fac3  57                   push edi
// 0078fac4  8b3e                 mov edi, dword ptr [esi]
// 0078fac6  50                   push eax
// 0078fac7  68ff000000           push 0xff
// 0078facc  50                   push eax
// 0078facd  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078fad0  56                   push esi
// 0078fad1  e89afaffff           call 0x78f570
// 0078fad6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0078fad9  8d472c               lea eax, [edi + 0x2c]
// 0078fadc  41                   inc ecx
// 0078fadd  83c410               add esp, 0x10
// 0078fae0  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 0078fae7  3b08                 cmp ecx, dword ptr [eax]
// 0078fae9  7e20                 jle 0x78fb0b
// 0078faeb  8b570c               mov edx, dword ptr [edi + 0xc]
// 0078faee  68383ea500           push 0xa53e38
// 0078faf3  68fdffff7f           push 0x7ffffffd
// 0078faf8  6a04                 push 4
// 0078fafa  50                   push eax
// 0078fafb  8b4610               mov eax, dword ptr [esi + 0x10]
// 0078fafe  52                   push edx
// 0078faff  50                   push eax
// 0078fb00  e84beffeff           call 0x77ea50
// 0078fb05  83c418               add esp, 0x18
// 0078fb08  89470c               mov dword ptr [edi + 0xc], eax
// 0078fb0b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0078fb0e  8b442408             mov eax, dword ptr [esp + 8]
// 0078fb12  8b570c               mov edx, dword ptr [edi + 0xc]
// 0078fb15  89048a               mov dword ptr [edx + ecx*4], eax
// 0078fb18  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0078fb1b  8d4730               lea eax, [edi + 0x30]
// 0078fb1e  41                   inc ecx
// 0078fb1f  3b08                 cmp ecx, dword ptr [eax]
// 0078fb21  7e20                 jle 0x78fb43
// 0078fb23  8b5714               mov edx, dword ptr [edi + 0x14]
// 0078fb26  68383ea500           push 0xa53e38
// 0078fb2b  68fdffff7f           push 0x7ffffffd
// 0078fb30  6a04                 push 4
// 0078fb32  50                   push eax
// 0078fb33  8b4610               mov eax, dword ptr [esi + 0x10]
// 0078fb36  52                   push edx
// 0078fb37  50                   push eax
// 0078fb38  e813effeff           call 0x77ea50
// 0078fb3d  83c418               add esp, 0x18
// 0078fb40  894714               mov dword ptr [edi + 0x14], eax
// 0078fb43  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0078fb46  8b5714               mov edx, dword ptr [edi + 0x14]
// 0078fb49  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078fb4d  89048a               mov dword ptr [edx + ecx*4], eax
// 0078fb50  8b4618               mov eax, dword ptr [esi + 0x18]
// 0078fb53  8d4801               lea ecx, [eax + 1]
// 0078fb56  894e18               mov dword ptr [esi + 0x18], ecx
// 0078fb59  5f                   pop edi
// 0078fb5a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_code)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
