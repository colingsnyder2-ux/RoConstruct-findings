// roc 2007-03 0054b830  unit: seg_00540000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b830
//
// 0054b830  55                   push ebp
// 0054b831  8bec                 mov ebp, esp
// 0054b833  6aff                 push -1
// 0054b835  6868327500           push 0x753268
// 0054b83a  64a100000000         mov eax, dword ptr fs:[0]
// 0054b840  50                   push eax
// 0054b841  64892500000000       mov dword ptr fs:[0], esp
// 0054b848  83ec08               sub esp, 8
// 0054b84b  53                   push ebx
// 0054b84c  56                   push esi
// 0054b84d  8bf1                 mov esi, ecx
// 0054b84f  57                   push edi
// 0054b850  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054b853  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054b856  c706047a7a00         mov dword ptr [esi], 0x7a7a04
// 0054b85c  b001                 mov al, 1
// 0054b85e  844654               test byte ptr [esi + 0x54], al
// 0054b861  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054b868  8845fc               mov byte ptr [ebp - 4], al
// 0054b86b  741c                 je 0x54b889
// 0054b86d  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0054b870  c1e904               shr ecx, 4
// 0054b873  84c8                 test al, cl
// 0054b875  7412                 je 0x54b889
// 0054b877  8bce                 mov ecx, esi
// 0054b879  e852edffff           call 0x54a5d0
// 0054b87e  eb09                 jmp 0x54b889
// 0054b880  b886b85400           mov eax, 0x54b886
// 0054b885  c3                   ret 
// 0054b886  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0054b889  8bce                 mov ecx, esi
// 0054b88b  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0054b892  e899f7ffff           call 0x54b030
// 0054b897  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054b89a  5f                   pop edi
// 0054b89b  5e                   pop esi
// 0054b89c  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b8a3  5b                   pop ebx
// 0054b8a4  8be5                 mov esp, ebp
// 0054b8a6  5d                   pop ebp
// 0054b8a7  c3                   ret 
// copied from an identical function in another client (function ??1?$stream_buffer@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_6fffb2031552b6bc.cpp