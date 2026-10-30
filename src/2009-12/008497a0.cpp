// roc 2009-12 008497a0  unit: CXTPControlSelector  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008497a0
//
// 008497a0  83ec2c               sub esp, 0x2c
// 008497a3  53                   push ebx
// 008497a4  55                   push ebp
// 008497a5  56                   push esi
// 008497a6  57                   push edi
// 008497a7  8bf9                 mov edi, ecx
// 008497a9  e892c7faff           call 0x7f5f40
// 008497ae  83bf9c01000000       cmp dword ptr [edi + 0x19c], 0
// 008497b5  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 008497bb  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 008497c1  89442414             mov dword ptr [esp + 0x14], eax
// 008497c5  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 008497cb  8944242c             mov dword ptr [esp + 0x2c], eax
// 008497cf  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008497d5  894c2430             mov dword ptr [esp + 0x30], ecx
// 008497d9  89542434             mov dword ptr [esp + 0x34], edx
// 008497dd  89442438             mov dword ptr [esp + 0x38], eax
// 008497e1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008497e9  0f8e45010000         jle 0x849934
// 008497ef  90                   nop 
// 008497f0  33db                 xor ebx, ebx
// 008497f2  399fa0010000         cmp dword ptr [edi + 0x1a0], ebx
// 008497f8  0f8e21010000         jle 0x84991f
// 008497fe  8bff                 mov edi, edi
// 00849800  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 00849806  8baf90010000         mov ebp, dword ptr [edi + 0x190]
// 0084980c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00849810  42                   inc edx
// 00849811  0fafd6               imul edx, esi
// 00849814  0354242c             add edx, dword ptr [esp + 0x2c]
// 00849818  8bc6                 mov eax, esi
// 0084981a  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0084981f  0344242c             add eax, dword ptr [esp + 0x2c]
// 00849823  8bcd                 mov ecx, ebp
// 00849825  0fafcb               imul ecx, ebx
// 00849828  034c2430             add ecx, dword ptr [esp + 0x30]
// 0084982c  8d7301               lea esi, [ebx + 1]
// 0084982f  89742418             mov dword ptr [esp + 0x18], esi
// 00849833  0faff5               imul esi, ebp
// 00849836  03742430             add esi, dword ptr [esp + 0x30]
// 0084983a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0084983e  41                   inc ecx
// 0084983f  40                   inc eax
// 00849840  894c2420             mov dword ptr [esp + 0x20], ecx
// 00849844  4a                   dec edx
// 00849845  4e                   dec esi
// 00849846  6a2e                 push 0x2e
// 00849848  8bcd                 mov ecx, ebp
// 0084984a  89442420             mov dword ptr [esp + 0x20], eax
// 0084984e  89542428             mov dword ptr [esp + 0x28], edx
// 00849852  8974242c             mov dword ptr [esp + 0x2c], esi
// 00849856  e8e53dfbff           call 0x7fd640
// 0084985b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084985f  3b8f84010000         cmp ecx, dword ptr [edi + 0x184]
// 00849865  8bf0                 mov esi, eax
// 00849867  7d39                 jge 0x8498a2
// 00849869  3b9f88010000         cmp ebx, dword ptr [edi + 0x188]
// 0084986f  7d31                 jge 0x8498a2
// 00849871  e85a61feff           call 0x82f9d0
// 00849876  6a0d                 push 0xd
// 00849878  8bc8                 mov ecx, eax
// 0084987a  e88158feff           call 0x82f100
// 0084987f  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00849883  50                   push eax
// 00849884  8d542420             lea edx, [esp + 0x20]
// 00849888  52                   push edx
// 00849889  8bcb                 mov ecx, ebx
// 0084988b  e86eadfaff           call 0x7f45fe
// 00849890  e83b61feff           call 0x82f9d0
// 00849895  6a0e                 push 0xe
// 00849897  8bc8                 mov ecx, eax
// 00849899  e86258feff           call 0x82f100
// 0084989e  8bf0                 mov esi, eax
// 008498a0  eb1f                 jmp 0x8498c1
// 008498a2  e82961feff           call 0x82f9d0
// 008498a7  6a05                 push 5
// 008498a9  8bc8                 mov ecx, eax
// 008498ab  e85058feff           call 0x82f100
// 008498b0  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008498b4  50                   push eax
// 008498b5  8d442420             lea eax, [esp + 0x20]
// 008498b9  50                   push eax
// 008498ba  8bcb                 mov ecx, ebx
// 008498bc  e83dadfaff           call 0x7f45fe
// 008498c1  6a2b                 push 0x2b
// 008498c3  8bcd                 mov ecx, ebp
// 008498c5  e8763dfbff           call 0x7fd640
// 008498ca  50                   push eax
// 008498cb  6a2b                 push 0x2b
// 008498cd  8bcd                 mov ecx, ebp
// 008498cf  e86c3dfbff           call 0x7fd640
// 008498d4  50                   push eax
// 008498d5  8d4c2424             lea ecx, [esp + 0x24]
// 008498d9  51                   push ecx
// 008498da  8bcb                 mov ecx, ebx
// 008498dc  e817adfaff           call 0x7f45f8
// 008498e1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008498e5  8b17                 mov edx, dword ptr [edi]
// 008498e7  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008498ed  56                   push esi
// 008498ee  83ec10               sub esp, 0x10
// 008498f1  8bc4                 mov eax, esp
// 008498f3  8908                 mov dword ptr [eax], ecx
// 008498f5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008498f9  894804               mov dword ptr [eax + 4], ecx
// 008498fc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00849900  894808               mov dword ptr [eax + 8], ecx
// 00849903  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00849907  89480c               mov dword ptr [eax + 0xc], ecx
// 0084990a  53                   push ebx
// 0084990b  8bcf                 mov ecx, edi
// 0084990d  ffd2                 call edx
// 0084990f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00849913  3b9fa0010000         cmp ebx, dword ptr [edi + 0x1a0]
// 00849919  0f8ce1feffff         jl 0x849800
// 0084991f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00849923  40                   inc eax
// 00849924  3b879c010000         cmp eax, dword ptr [edi + 0x19c]
// 0084992a  89442410             mov dword ptr [esp + 0x10], eax
// 0084992e  0f8cbcfeffff         jl 0x8497f0
// 00849934  5f                   pop edi
// 00849935  5e                   pop esi
// 00849936  5d                   pop ebp
// 00849937  5b                   pop ebx
// 00849938  83c42c               add esp, 0x2c
// 0084993b  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPControlSelector@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlExt.cpp