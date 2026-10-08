// roc 2007-08 00537820  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537820
//
// 00537820  8b442408             mov eax, dword ptr [esp + 8]
// 00537824  8b08                 mov ecx, dword ptr [eax]
// 00537826  8b5004               mov edx, dword ptr [eax + 4]
// 00537829  83ec18               sub esp, 0x18
// 0053782c  85c9                 test ecx, ecx
// 0053782e  56                   push esi
// 0053782f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00537833  57                   push edi
// 00537834  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00537838  7508                 jne 0x537842
// 0053783a  81fa00000080         cmp edx, 0x80000000
// 00537840  7457                 je 0x537899
// 00537842  83f9ff               cmp ecx, -1
// 00537845  7508                 jne 0x53784f
// 00537847  81faffffff7f         cmp edx, 0x7fffffff
// 0053784d  744a                 je 0x537899
// 0053784f  83f9fe               cmp ecx, -2
// 00537852  7508                 jne 0x53785c
// 00537854  81faffffff7f         cmp edx, 0x7fffffff
// 0053785a  743d                 je 0x537899
// 0053785c  85ff                 test edi, edi
// 0053785e  7508                 jne 0x537868
// 00537860  81fe00000080         cmp esi, 0x80000000
// 00537866  7431                 je 0x537899
// 00537868  83ffff               cmp edi, -1
// 0053786b  7508                 jne 0x537875
// 0053786d  81feffffff7f         cmp esi, 0x7fffffff
// 00537873  7424                 je 0x537899
// 00537875  83fffe               cmp edi, -2
// 00537878  7508                 jne 0x537882
// 0053787a  81feffffff7f         cmp esi, 0x7fffffff
// 00537880  7417                 je 0x537899
// 00537882  03cf                 add ecx, edi
// 00537884  8bc2                 mov eax, edx
// 00537886  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053788a  13c6                 adc eax, esi
// 0053788c  5f                   pop edi
// 0053788d  894204               mov dword ptr [edx + 4], eax
// 00537890  890a                 mov dword ptr [edx], ecx
// 00537892  8bc2                 mov eax, edx
// 00537894  5e                   pop esi
// 00537895  83c418               add esp, 0x18
// 00537898  c3                   ret 
// 00537899  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053789d  8d442408             lea eax, [esp + 8]
// 005378a1  50                   push eax
// 005378a2  8d4c241c             lea ecx, [esp + 0x1c]
// 005378a6  51                   push ecx
// 005378a7  8d4c2418             lea ecx, [esp + 0x18]
// 005378ab  897c2410             mov dword ptr [esp + 0x10], edi
// 005378af  89742414             mov dword ptr [esp + 0x14], esi
// 005378b3  8954241c             mov dword ptr [esp + 0x1c], edx
// 005378b7  e834e2ffff           call 0x535af0
// 005378bc  8b10                 mov edx, dword ptr [eax]
// 005378be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005378c2  8b4004               mov eax, dword ptr [eax + 4]
// 005378c5  5f                   pop edi
// 005378c6  894104               mov dword ptr [ecx + 4], eax
// 005378c9  8911                 mov dword ptr [ecx], edx
// 005378cb  8bc1                 mov eax, ecx
// 005378cd  5e                   pop esi
// 005378ce  83c418               add esp, 0x18
// 005378d1  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?add_time_duration@?$counted_time_system@U?$counted_time_rep@Vmillisec_posix_time_system_config@posix_time@boost@@@date_time@boost@@@date_time@boost@@SA?AU?$counted_time_rep@Vmillisec_posix_time_system_config@posix_time@boost@@@23@ABU423@Vtime_duration@posix_time@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
