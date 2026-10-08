// roc 2007-03 0055c980  unit: seg_00550000  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055c980
//
// 0055c980  6aff                 push -1
// 0055c982  689e437500           push 0x75439e
// 0055c987  64a100000000         mov eax, dword ptr fs:[0]
// 0055c98d  50                   push eax
// 0055c98e  64892500000000       mov dword ptr fs:[0], esp
// 0055c995  51                   push ecx
// 0055c996  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055c99a  56                   push esi
// 0055c99b  8bf1                 mov esi, ecx
// 0055c99d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055c9a1  50                   push eax
// 0055c9a2  51                   push ecx
// 0055c9a3  8974240c             mov dword ptr [esp + 0xc], esi
// 0055c9a7  e894f5ffff           call 0x55bf40
// 0055c9ac  50                   push eax
// 0055c9ad  8bce                 mov ecx, esi
// 0055c9af  e8dc450100           call 0x570f90
// 0055c9b4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055c9b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055c9bc  8d4e30               lea ecx, [esi + 0x30]
// 0055c9bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055c9c7  c70638a27a00         mov dword ptr [esi], 0x7aa238
// 0055c9cd  895628               mov dword ptr [esi + 0x28], edx
// 0055c9d0  89462c               mov dword ptr [esi + 0x2c], eax
// 0055c9d3  e878040100           call 0x56ce50
// 0055c9d8  c644241001           mov byte ptr [esp + 0x10], 1
// 0055c9dd  e85e080100           call 0x56d240
// 0055c9e2  6a08                 push 8
// 0055c9e4  894638               mov dword ptr [esi + 0x38], eax
// 0055c9e7  e81c170c00           call 0x61e108
// 0055c9ec  83c404               add esp, 4
// 0055c9ef  85c0                 test eax, eax
// 0055c9f1  740f                 je 0x55ca02
// 0055c9f3  8a4c242c             mov cl, byte ptr [esp + 0x2c]
// 0055c9f7  c7003c987800         mov dword ptr [eax], 0x78983c
// 0055c9fd  884804               mov byte ptr [eax + 4], cl
// 0055ca00  eb02                 jmp 0x55ca04
// 0055ca02  33c0                 xor eax, eax
// 0055ca04  89463c               mov dword ptr [esi + 0x3c], eax
// 0055ca07  8b542428             mov edx, dword ptr [esp + 0x28]
// 0055ca0b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055ca0f  52                   push edx
// 0055ca10  50                   push eax
// 0055ca11  8bce                 mov ecx, esi
// 0055ca13  c644241802           mov byte ptr [esp + 0x18], 2
// 0055ca18  e86378ffff           call 0x554280
// 0055ca1d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055ca21  8bc6                 mov eax, esi
// 0055ca23  5e                   pop esi
// 0055ca24  64890d00000000       mov dword ptr fs:[0], ecx
// 0055ca2b  83c410               add esp, 0x10
// 0055ca2e  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??0?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@QAE@P8Instance@2@AE?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@ZPBD331W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
