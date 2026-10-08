// roc 2007-03 005455a0  unit: seg_00540000  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005455a0
//
// 005455a0  8b442404             mov eax, dword ptr [esp + 4]
// 005455a4  83ec10               sub esp, 0x10
// 005455a7  56                   push esi
// 005455a8  8bf1                 mov esi, ecx
// 005455aa  c70601000000         mov dword ptr [esi], 1
// 005455b0  c7460400000000       mov dword ptr [esi + 4], 0
// 005455b7  8b08                 mov ecx, dword ptr [eax]
// 005455b9  85c9                 test ecx, ecx
// 005455bb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005455bf  57                   push edi
// 005455c0  745e                 je 0x545620
// 005455c2  83f9ff               cmp ecx, -1
// 005455c5  7459                 je 0x545620
// 005455c7  83f9fe               cmp ecx, -2
// 005455ca  7454                 je 0x545620
// 005455cc  8b10                 mov edx, dword ptr [eax]
// 005455ce  85d2                 test edx, edx
// 005455d0  8b7804               mov edi, dword ptr [eax + 4]
// 005455d3  7508                 jne 0x5455dd
// 005455d5  81ff00000080         cmp edi, 0x80000000
// 005455db  7443                 je 0x545620
// 005455dd  83faff               cmp edx, -1
// 005455e0  7508                 jne 0x5455ea
// 005455e2  81ffffffff7f         cmp edi, 0x7fffffff
// 005455e8  7436                 je 0x545620
// 005455ea  83fafe               cmp edx, -2
// 005455ed  7508                 jne 0x5455f7
// 005455ef  81ffffffff7f         cmp edi, 0x7fffffff
// 005455f5  7429                 je 0x545620
// 005455f7  53                   push ebx
// 005455f8  8b5804               mov ebx, dword ptr [eax + 4]
// 005455fb  6a14                 push 0x14
// 005455fd  680060d71d           push 0x1dd76000
// 00545602  6a00                 push 0
// 00545604  51                   push ecx
// 00545605  8bfa                 mov edi, edx
// 00545607  e8d49a0d00           call 0x61f0e0
// 0054560c  03c7                 add eax, edi
// 0054560e  13d3                 adc edx, ebx
// 00545610  5b                   pop ebx
// 00545611  8906                 mov dword ptr [esi], eax
// 00545613  5f                   pop edi
// 00545614  895604               mov dword ptr [esi + 4], edx
// 00545617  8bc6                 mov eax, esi
// 00545619  5e                   pop esi
// 0054561a  83c410               add esp, 0x10
// 0054561d  c20800               ret 8
// 00545620  8b5004               mov edx, dword ptr [eax + 4]
// 00545623  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00545627  8b08                 mov ecx, dword ptr [eax]
// 00545629  894c2408             mov dword ptr [esp + 8], ecx
// 0054562d  8d44241c             lea eax, [esp + 0x1c]
// 00545631  50                   push eax
// 00545632  8d4c2414             lea ecx, [esp + 0x14]
// 00545636  51                   push ecx
// 00545637  8d4c2410             lea ecx, [esp + 0x10]
// 0054563b  89542414             mov dword ptr [esp + 0x14], edx
// 0054563f  e81cfdffff           call 0x545360
// 00545644  8b10                 mov edx, dword ptr [eax]
// 00545646  8916                 mov dword ptr [esi], edx
// 00545648  8b4004               mov eax, dword ptr [eax + 4]
// 0054564b  894604               mov dword ptr [esi + 4], eax
// 0054564e  5f                   pop edi
// 0054564f  8bc6                 mov eax, esi
// 00545651  5e                   pop esi
// 00545652  83c410               add esp, 0x10
// 00545655  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ??0?$counted_time_rep@Vmillisec_posix_time_system_config@posix_time@boost@@@date_time@boost@@QAE@ABVdate@gregorian@2@ABVtime_duration@posix_time@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
