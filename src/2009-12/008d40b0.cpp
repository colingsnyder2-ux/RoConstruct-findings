// roc 2009-12 008d40b0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 568 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d40b0
//
// 008d40b0  53                   push ebx
// 008d40b1  8bd9                 mov ebx, ecx
// 008d40b3  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 008d40b6  83783c00             cmp dword ptr [eax + 0x3c], 0
// 008d40ba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d40be  0f85a9000000         jne 0x8d416d
// 008d40c4  83e901               sub ecx, 1
// 008d40c7  0f8486000000         je 0x8d4153
// 008d40cd  83e901               sub ecx, 1
// 008d40d0  7445                 je 0x8d4117
// 008d40d2  83e901               sub ecx, 1
// 008d40d5  0f85f9010000         jne 0x8d42d4
// 008d40db  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d40e1  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008d40e4  83c008               add eax, 8
// 008d40e7  83f9ff               cmp ecx, -1
// 008d40ea  7516                 jne 0x8d4102
// 008d40ec  8b4004               mov eax, dword ptr [eax + 4]
// 008d40ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d40f3  50                   push eax
// 008d40f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d40f8  50                   push eax
// 008d40f9  e80005f2ff           call 0x7f45fe
// 008d40fe  5b                   pop ebx
// 008d40ff  c20c00               ret 0xc
// 008d4102  8bc1                 mov eax, ecx
// 008d4104  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d4108  50                   push eax
// 008d4109  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d410d  50                   push eax
// 008d410e  e8eb04f2ff           call 0x7f45fe
// 008d4113  5b                   pop ebx
// 008d4114  c20c00               ret 0xc
// 008d4117  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d411d  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008d4120  83c008               add eax, 8
// 008d4123  83f9ff               cmp ecx, -1
// 008d4126  7516                 jne 0x8d413e
// 008d4128  8b4004               mov eax, dword ptr [eax + 4]
// 008d412b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d412f  50                   push eax
// 008d4130  51                   push ecx
// 008d4131  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d4135  e8c404f2ff           call 0x7f45fe
// 008d413a  5b                   pop ebx
// 008d413b  c20c00               ret 0xc
// 008d413e  8bc1                 mov eax, ecx
// 008d4140  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d4144  50                   push eax
// 008d4145  51                   push ecx
// 008d4146  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d414a  e8af04f2ff           call 0x7f45fe
// 008d414f  5b                   pop ebx
// 008d4150  c20c00               ret 0xc
// 008d4153  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d4157  834004fe             add dword ptr [eax + 4], -2
// 008d415b  8300fe               add dword ptr [eax], -2
// 008d415e  b902000000           mov ecx, 2
// 008d4163  014808               add dword ptr [eax + 8], ecx
// 008d4166  01480c               add dword ptr [eax + 0xc], ecx
// 008d4169  5b                   pop ebx
// 008d416a  c20c00               ret 0xc
// 008d416d  83f903               cmp ecx, 3
// 008d4170  0f875e010000         ja 0x8d42d4
// 008d4176  56                   push esi
// 008d4177  57                   push edi
// 008d4178  ff248dd8428d00       jmp dword ptr [ecx*4 + 0x8d42d8]
// 008d417f  e84cb8f5ff           call 0x82f9d0
// 008d4184  6a0f                 push 0xf
// 008d4186  8bc8                 mov ecx, eax
// 008d4188  e873aff5ff           call 0x82f100
// 008d418d  8bf8                 mov edi, eax
// 008d418f  e83cb8f5ff           call 0x82f9d0
// 008d4194  6a0f                 push 0xf
// 008d4196  8bc8                 mov ecx, eax
// 008d4198  e863aff5ff           call 0x82f100
// 008d419d  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d41a1  8b560c               mov edx, dword ptr [esi + 0xc]
// 008d41a4  2b5604               sub edx, dword ptr [esi + 4]
// 008d41a7  57                   push edi
// 008d41a8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d41ac  50                   push eax
// 008d41ad  8b4608               mov eax, dword ptr [esi + 8]
// 008d41b0  2b06                 sub eax, dword ptr [esi]
// 008d41b2  4a                   dec edx
// 008d41b3  52                   push edx
// 008d41b4  83e802               sub eax, 2
// 008d41b7  50                   push eax
// 008d41b8  6a00                 push 0
// 008d41ba  6a01                 push 1
// 008d41bc  8bcf                 mov ecx, edi
// 008d41be  e8b92a0500           call 0x926c7c
// 008d41c3  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008d41c6  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d41cc  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d41cf  83f9ff               cmp ecx, -1
// 008d41d2  7503                 jne 0x8d41d7
// 008d41d4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d41d7  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d41da  83faff               cmp edx, -1
// 008d41dd  7505                 jne 0x8d41e4
// 008d41df  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d41e2  eb02                 jmp 0x8d41e6
// 008d41e4  8bc2                 mov eax, edx
// 008d41e6  8b560c               mov edx, dword ptr [esi + 0xc]
// 008d41e9  2b5604               sub edx, dword ptr [esi + 4]
// 008d41ec  51                   push ecx
// 008d41ed  50                   push eax
// 008d41ee  8b4608               mov eax, dword ptr [esi + 8]
// 008d41f1  2b06                 sub eax, dword ptr [esi]
// 008d41f3  52                   push edx
// 008d41f4  50                   push eax
// 008d41f5  6a00                 push 0
// 008d41f7  6a00                 push 0
// 008d41f9  8bcf                 mov ecx, edi
// 008d41fb  e87c2a0500           call 0x926c7c
// 008d4200  5f                   pop edi
// 008d4201  5e                   pop esi
// 008d4202  5b                   pop ebx
// 008d4203  c20c00               ret 0xc
// 008d4206  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d420a  ff4804               dec dword ptr [eax + 4]
// 008d420d  5f                   pop edi
// 008d420e  5e                   pop esi
// 008d420f  5b                   pop ebx
// 008d4210  c20c00               ret 0xc
// 008d4213  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d4219  8b4858               mov ecx, dword ptr [eax + 0x58]
// 008d421c  83c050               add eax, 0x50
// 008d421f  83f9ff               cmp ecx, -1
// 008d4222  7505                 jne 0x8d4229
// 008d4224  8b4004               mov eax, dword ptr [eax + 4]
// 008d4227  eb02                 jmp 0x8d422b
// 008d4229  8bc1                 mov eax, ecx
// 008d422b  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d422f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008d4233  50                   push eax
// 008d4234  56                   push esi
// 008d4235  8bcf                 mov ecx, edi
// 008d4237  e8c203f2ff           call 0x7f45fe
// 008d423c  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008d423f  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d4245  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d4248  83c044               add eax, 0x44
// 008d424b  83f9ff               cmp ecx, -1
// 008d424e  7505                 jne 0x8d4255
// 008d4250  8b4004               mov eax, dword ptr [eax + 4]
// 008d4253  eb02                 jmp 0x8d4257
// 008d4255  8bc1                 mov eax, ecx
// 008d4257  8b5604               mov edx, dword ptr [esi + 4]
// 008d425a  8b4e08               mov ecx, dword ptr [esi + 8]
// 008d425d  50                   push eax
// 008d425e  8b460c               mov eax, dword ptr [esi + 0xc]
// 008d4261  2bc2                 sub eax, edx
// 008d4263  50                   push eax
// 008d4264  6a01                 push 1
// 008d4266  49                   dec ecx
// 008d4267  52                   push edx
// 008d4268  51                   push ecx
// 008d4269  8bcf                 mov ecx, edi
// 008d426b  e826220500           call 0x926496
// 008d4270  5f                   pop edi
// 008d4271  5e                   pop esi
// 008d4272  5b                   pop ebx
// 008d4273  c20c00               ret 0xc
// 008d4276  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d427c  8b4858               mov ecx, dword ptr [eax + 0x58]
// 008d427f  83c050               add eax, 0x50
// 008d4282  83f9ff               cmp ecx, -1
// 008d4285  7505                 jne 0x8d428c
// 008d4287  8b4004               mov eax, dword ptr [eax + 4]
// 008d428a  eb02                 jmp 0x8d428e
// 008d428c  8bc1                 mov eax, ecx
// 008d428e  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d4292  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008d4296  50                   push eax
// 008d4297  56                   push esi
// 008d4298  8bcf                 mov ecx, edi
// 008d429a  e85f03f2ff           call 0x7f45fe
// 008d429f  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 008d42a2  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008d42a8  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d42ab  83c044               add eax, 0x44
// 008d42ae  83f9ff               cmp ecx, -1
// 008d42b1  7505                 jne 0x8d42b8
// 008d42b3  8b4004               mov eax, dword ptr [eax + 4]
// 008d42b6  eb02                 jmp 0x8d42ba
// 008d42b8  8bc1                 mov eax, ecx
// 008d42ba  8b16                 mov edx, dword ptr [esi]
// 008d42bc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d42bf  50                   push eax
// 008d42c0  8b4608               mov eax, dword ptr [esi + 8]
// 008d42c3  6a01                 push 1
// 008d42c5  2bc2                 sub eax, edx
// 008d42c7  50                   push eax
// 008d42c8  49                   dec ecx
// 008d42c9  51                   push ecx
// 008d42ca  52                   push edx
// 008d42cb  8bcf                 mov ecx, edi
// 008d42cd  e8c4210500           call 0x926496
// 008d42d2  5f                   pop edi
// 008d42d3  5e                   pop esi
// 008d42d4  5b                   pop ebx
// 008d42d5  c20c00               ret 0xc
// 008d42d8  7f41                 jg 0x8d431b
// 008d42da  8d00                 lea eax, [eax]
// 008d42dc  06                   push es
// 008d42dd  42                   inc edx
// 008d42de  8d00                 lea eax, [eax]
// 008d42e0  13428d               adc eax, dword ptr [edx - 0x73]
// 008d42e3  007642               add byte ptr [esi + 0x42], dh
// 008d42e6  8d00                 lea eax, [eax]
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawWorkspacePart@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCDC@@PAUtagRECT@@W4XTPTabWorkspacePart@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
