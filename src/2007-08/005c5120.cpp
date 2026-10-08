// roc 2007-08 005c5120  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5120
//
// 005c5120  55                   push ebp
// 005c5121  8bec                 mov ebp, esp
// 005c5123  6aff                 push -1
// 005c5125  6828997500           push 0x759928
// 005c512a  64a100000000         mov eax, dword ptr fs:[0]
// 005c5130  50                   push eax
// 005c5131  64892500000000       mov dword ptr fs:[0], esp
// 005c5138  83ec1c               sub esp, 0x1c
// 005c513b  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005c513e  53                   push ebx
// 005c513f  56                   push esi
// 005c5140  8bf1                 mov esi, ecx
// 005c5142  8b08                 mov ecx, dword ptr [eax]
// 005c5144  894dd8               mov dword ptr [ebp - 0x28], ecx
// 005c5147  8b4804               mov ecx, dword ptr [eax + 4]
// 005c514a  85c9                 test ecx, ecx
// 005c514c  57                   push edi
// 005c514d  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c5150  8975ec               mov dword ptr [ebp - 0x14], esi
// 005c5153  894ddc               mov dword ptr [ebp - 0x24], ecx
// 005c5156  740c                 je 0x5c5164
// 005c5158  8d5104               lea edx, [ecx + 4]
// 005c515b  bf01000000           mov edi, 1
// 005c5160  f00fc13a             lock xadd dword ptr [edx], edi
// 005c5164  d94008               fld dword ptr [eax + 8]
// 005c5167  d95de0               fstp dword ptr [ebp - 0x20]
// 005c516a  d9400c               fld dword ptr [eax + 0xc]
// 005c516d  d95de4               fstp dword ptr [ebp - 0x1c]
// 005c5170  8b4604               mov eax, dword ptr [esi + 4]
// 005c5173  85c0                 test eax, eax
// 005c5175  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c517c  7504                 jne 0x5c5182
// 005c517e  33db                 xor ebx, ebx
// 005c5180  eb08                 jmp 0x5c518a
// 005c5182  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 005c5185  2bd8                 sub ebx, eax
// 005c5187  c1fb04               sar ebx, 4
// 005c518a  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 005c518d  85ff                 test edi, edi
// 005c518f  0f8415020000         je 0x5c53aa
// 005c5195  85c0                 test eax, eax
// 005c5197  7504                 jne 0x5c519d
// 005c5199  33c9                 xor ecx, ecx
// 005c519b  eb08                 jmp 0x5c51a5
// 005c519d  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c51a0  2bc8                 sub ecx, eax
// 005c51a2  c1f904               sar ecx, 4
// 005c51a5  baffffff0f           mov edx, 0xfffffff
// 005c51aa  2bd1                 sub edx, ecx
// 005c51ac  3bd7                 cmp edx, edi
// 005c51ae  7305                 jae 0x5c51b5
// 005c51b0  e87b7b0000           call 0x5ccd30
// 005c51b5  85c0                 test eax, eax
// 005c51b7  7504                 jne 0x5c51bd
// 005c51b9  33c9                 xor ecx, ecx
// 005c51bb  eb08                 jmp 0x5c51c5
// 005c51bd  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c51c0  2bc8                 sub ecx, eax
// 005c51c2  c1f904               sar ecx, 4
// 005c51c5  03cf                 add ecx, edi
// 005c51c7  3bd9                 cmp ebx, ecx
// 005c51c9  0f8316010000         jae 0x5c52e5
// 005c51cf  8bcb                 mov ecx, ebx
// 005c51d1  d1e9                 shr ecx, 1
// 005c51d3  baffffff0f           mov edx, 0xfffffff
// 005c51d8  2bd1                 sub edx, ecx
// 005c51da  3bd3                 cmp edx, ebx
// 005c51dc  7304                 jae 0x5c51e2
// 005c51de  33db                 xor ebx, ebx
// 005c51e0  eb02                 jmp 0x5c51e4
// 005c51e2  03d9                 add ebx, ecx
// 005c51e4  85c0                 test eax, eax
// 005c51e6  7504                 jne 0x5c51ec
// 005c51e8  33c9                 xor ecx, ecx
// 005c51ea  eb08                 jmp 0x5c51f4
// 005c51ec  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c51ef  2bc8                 sub ecx, eax
// 005c51f1  c1f904               sar ecx, 4
// 005c51f4  03cf                 add ecx, edi
// 005c51f6  3bd9                 cmp ebx, ecx
// 005c51f8  7312                 jae 0x5c520c
// 005c51fa  85c0                 test eax, eax
// 005c51fc  7504                 jne 0x5c5202
// 005c51fe  33db                 xor ebx, ebx
// 005c5200  eb08                 jmp 0x5c520a
// 005c5202  8b5e08               mov ebx, dword ptr [esi + 8]
// 005c5205  2bd8                 sub ebx, eax
// 005c5207  c1fb04               sar ebx, 4
// 005c520a  03df                 add ebx, edi
// 005c520c  6a00                 push 0
// 005c520e  53                   push ebx
// 005c520f  e8ecd9e7ff           call 0x442c00
// 005c5214  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c5217  c645e800             mov byte ptr [ebp - 0x18], 0
// 005c521b  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 005c521e  52                   push edx
// 005c521f  894510               mov dword ptr [ebp + 0x10], eax
// 005c5222  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c5225  52                   push edx
// 005c5226  56                   push esi
// 005c5227  50                   push eax
// 005c5228  894514               mov dword ptr [ebp + 0x14], eax
// 005c522b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c522e  50                   push eax
// 005c522f  51                   push ecx
// 005c5230  c645fc01             mov byte ptr [ebp - 4], 1
// 005c5234  e867fbffff           call 0x5c4da0
// 005c5239  83c420               add esp, 0x20
// 005c523c  8d4dd8               lea ecx, [ebp - 0x28]
// 005c523f  51                   push ecx
// 005c5240  57                   push edi
// 005c5241  50                   push eax
// 005c5242  8bce                 mov ecx, esi
// 005c5244  894510               mov dword ptr [ebp + 0x10], eax
// 005c5247  e824fdffff           call 0x5c4f70
// 005c524c  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c524f  c645e800             mov byte ptr [ebp - 0x18], 0
// 005c5253  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 005c5256  52                   push edx
// 005c5257  894510               mov dword ptr [ebp + 0x10], eax
// 005c525a  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c525d  52                   push edx
// 005c525e  56                   push esi
// 005c525f  50                   push eax
// 005c5260  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c5263  51                   push ecx
// 005c5264  50                   push eax
// 005c5265  e836fbffff           call 0x5c4da0
// 005c526a  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c526d  83c418               add esp, 0x18
// 005c5270  85c9                 test ecx, ecx
// 005c5272  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c5279  7504                 jne 0x5c527f
// 005c527b  33c0                 xor eax, eax
// 005c527d  eb08                 jmp 0x5c5287
// 005c527f  8b4608               mov eax, dword ptr [esi + 8]
// 005c5282  2bc1                 sub eax, ecx
// 005c5284  c1f804               sar eax, 4
// 005c5287  03f8                 add edi, eax
// 005c5289  85c9                 test ecx, ecx
// 005c528b  741b                 je 0x5c52a8
// 005c528d  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c5290  8b4608               mov eax, dword ptr [esi + 8]
// 005c5293  52                   push edx
// 005c5294  56                   push esi
// 005c5295  50                   push eax
// 005c5296  51                   push ecx
// 005c5297  e8443cf7ff           call 0x538ee0
// 005c529c  8b4604               mov eax, dword ptr [esi + 4]
// 005c529f  50                   push eax
// 005c52a0  e8bda90600           call 0x62fc62
// 005c52a5  83c414               add esp, 0x14
// 005c52a8  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005c52ab  c1e304               shl ebx, 4
// 005c52ae  03d8                 add ebx, eax
// 005c52b0  c1e704               shl edi, 4
// 005c52b3  03f8                 add edi, eax
// 005c52b5  895e0c               mov dword ptr [esi + 0xc], ebx
// 005c52b8  897e08               mov dword ptr [esi + 8], edi
// 005c52bb  894604               mov dword ptr [esi + 4], eax
// 005c52be  e9e4000000           jmp 0x5c53a7
// library rbxgs/script\ScriptEvent.cpp (function ?_Insert_n@?$vector@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@IAEXV?$_Vector_iterator@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@2@IABUWaitingThread@YieldingThreads@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
