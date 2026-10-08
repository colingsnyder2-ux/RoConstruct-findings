// roc 2007-03 005459b0  unit: seg_00540000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005459b0
//
// 005459b0  8b442408             mov eax, dword ptr [esp + 8]
// 005459b4  8b08                 mov ecx, dword ptr [eax]
// 005459b6  8b5004               mov edx, dword ptr [eax + 4]
// 005459b9  83ec18               sub esp, 0x18
// 005459bc  85c9                 test ecx, ecx
// 005459be  56                   push esi
// 005459bf  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005459c3  57                   push edi
// 005459c4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005459c8  7508                 jne 0x5459d2
// 005459ca  81fa00000080         cmp edx, 0x80000000
// 005459d0  7457                 je 0x545a29
// 005459d2  83f9ff               cmp ecx, -1
// 005459d5  7508                 jne 0x5459df
// 005459d7  81faffffff7f         cmp edx, 0x7fffffff
// 005459dd  744a                 je 0x545a29
// 005459df  83f9fe               cmp ecx, -2
// 005459e2  7508                 jne 0x5459ec
// 005459e4  81faffffff7f         cmp edx, 0x7fffffff
// 005459ea  743d                 je 0x545a29
// 005459ec  85ff                 test edi, edi
// 005459ee  7508                 jne 0x5459f8
// 005459f0  81fe00000080         cmp esi, 0x80000000
// 005459f6  7431                 je 0x545a29
// 005459f8  83ffff               cmp edi, -1
// 005459fb  7508                 jne 0x545a05
// 005459fd  81feffffff7f         cmp esi, 0x7fffffff
// 00545a03  7424                 je 0x545a29
// 00545a05  83fffe               cmp edi, -2
// 00545a08  7508                 jne 0x545a12
// 00545a0a  81feffffff7f         cmp esi, 0x7fffffff
// 00545a10  7417                 je 0x545a29
// 00545a12  03cf                 add ecx, edi
// 00545a14  8bc2                 mov eax, edx
// 00545a16  8b542424             mov edx, dword ptr [esp + 0x24]
// 00545a1a  13c6                 adc eax, esi
// 00545a1c  5f                   pop edi
// 00545a1d  894204               mov dword ptr [edx + 4], eax
// 00545a20  890a                 mov dword ptr [edx], ecx
// 00545a22  8bc2                 mov eax, edx
// 00545a24  5e                   pop esi
// 00545a25  83c418               add esp, 0x18
// 00545a28  c3                   ret 
// 00545a29  894c2410             mov dword ptr [esp + 0x10], ecx
// 00545a2d  8d442408             lea eax, [esp + 8]
// 00545a31  50                   push eax
// 00545a32  8d4c241c             lea ecx, [esp + 0x1c]
// 00545a36  51                   push ecx
// 00545a37  8d4c2418             lea ecx, [esp + 0x18]
// 00545a3b  897c2410             mov dword ptr [esp + 0x10], edi
// 00545a3f  89742414             mov dword ptr [esp + 0x14], esi
// 00545a43  8954241c             mov dword ptr [esp + 0x1c], edx
// 00545a47  e894f7ffff           call 0x5451e0
// 00545a4c  8b10                 mov edx, dword ptr [eax]
// 00545a4e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00545a52  8b4004               mov eax, dword ptr [eax + 4]
// 00545a55  5f                   pop edi
// 00545a56  894104               mov dword ptr [ecx + 4], eax
// 00545a59  8911                 mov dword ptr [ecx], edx
// 00545a5b  8bc1                 mov eax, ecx
// 00545a5d  5e                   pop esi
// 00545a5e  83c418               add esp, 0x18
// 00545a61  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?add_time_duration@?$counted_time_system@U?$counted_time_rep@Vmillisec_posix_time_system_config@posix_time@boost@@@date_time@boost@@@date_time@boost@@SA?AU?$counted_time_rep@Vmillisec_posix_time_system_config@posix_time@boost@@@23@ABU423@Vtime_duration@posix_time@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
