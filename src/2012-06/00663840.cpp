// roc 2012-06 00663840  unit: seg_00660000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663840
//
// 00663840  8b442410             mov eax, dword ptr [esp + 0x10]
// 00663844  53                   push ebx
// 00663845  8b18                 mov ebx, dword ptr [eax]
// 00663847  55                   push ebp
// 00663848  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0066384c  56                   push esi
// 0066384d  33f6                 xor esi, esi
// 0066384f  39b514010000         cmp dword ptr [ebp + 0x114], esi
// 00663855  7e4e                 jle 0x6638a5
// 00663857  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066385b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066385f  57                   push edi
// 00663860  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00663863  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00663866  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066386a  8b3a                 mov edi, dword ptr [edx]
// 0066386c  03c8                 add ecx, eax
// 0066386e  3bc1                 cmp eax, ecx
// 00663870  730d                 jae 0x66387f
// 00663872  8a17                 mov dl, byte ptr [edi]
// 00663874  8810                 mov byte ptr [eax], dl
// 00663876  40                   inc eax
// 00663877  8810                 mov byte ptr [eax], dl
// 00663879  40                   inc eax
// 0066387a  47                   inc edi
// 0066387b  3bc1                 cmp eax, ecx
// 0066387d  72f3                 jb 0x663872
// 0066387f  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00663882  50                   push eax
// 00663883  6a01                 push 1
// 00663885  8d4e01               lea ecx, [esi + 1]
// 00663888  51                   push ecx
// 00663889  53                   push ebx
// 0066388a  56                   push esi
// 0066388b  53                   push ebx
// 0066388c  e84ffcfeff           call 0x6534e0
// 00663891  8344243804           add dword ptr [esp + 0x38], 4
// 00663896  83c602               add esi, 2
// 00663899  83c418               add esp, 0x18
// 0066389c  3bb514010000         cmp esi, dword ptr [ebp + 0x114]
// 006638a2  7cbc                 jl 0x663860
// 006638a4  5f                   pop edi
// 006638a5  5e                   pop esi
// 006638a6  5d                   pop ebp
// 006638a7  5b                   pop ebx
// 006638a8  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
