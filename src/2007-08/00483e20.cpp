// from server: 100% by tester
// roc 2007-03 00482290  unit: seg_00480000  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00482290
//
// 00482290  6aff                 push -1
// 00482292  68c8827400           push 0x7482c8
// 00482297  64a100000000         mov eax, dword ptr fs:[0]
// 0048229d  50                   push eax
// 0048229e  83ec58               sub esp, 0x58
// 004822a1  53                   push ebx
// 004822a2  55                   push ebp
// 004822a3  56                   push esi
// 004822a4  57                   push edi
// 004822a5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004822aa  33c4                 xor eax, esp
// 004822ac  50                   push eax
// 004822ad  8d44246c             lea eax, [esp + 0x6c]
// 004822b1  64a300000000         mov dword ptr fs:[0], eax
// 004822b7  8be9                 mov ebp, ecx
// 004822b9  d9ee                 fldz 
// 004822bb  33ff                 xor edi, edi
// 004822bd  d9542430             fst dword ptr [esp + 0x30]
// 004822c1  897c2464             mov dword ptr [esp + 0x64], edi
// 004822c5  d954242c             fst dword ptr [esp + 0x2c]
// 004822c9  d9542428             fst dword ptr [esp + 0x28]
// 004822cd  d9542424             fst dword ptr [esp + 0x24]
// 004822d1  d9542440             fst dword ptr [esp + 0x40]
// 004822d5  d954243c             fst dword ptr [esp + 0x3c]
// 004822d9  d9542438             fst dword ptr [esp + 0x38]
// 004822dd  d9542434             fst dword ptr [esp + 0x34]
// 004822e1  d9542450             fst dword ptr [esp + 0x50]
// 004822e5  d954244c             fst dword ptr [esp + 0x4c]
// 004822e9  d9542448             fst dword ptr [esp + 0x48]
// 004822ed  d9542444             fst dword ptr [esp + 0x44]
// 004822f1  d9542460             fst dword ptr [esp + 0x60]
// 004822f5  d954245c             fst dword ptr [esp + 0x5c]
// 004822f9  d9542458             fst dword ptr [esp + 0x58]
// 004822fd  d95c2454             fstp dword ptr [esp + 0x54]
// 00482301  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00482308  897c2474             mov dword ptr [esp + 0x74], edi
// 0048230c  c74424685c8b0000     mov dword ptr [esp + 0x68], 0x8b5c
// 00482314  8d74242c             lea esi, [esp + 0x2c]
// 00482318  57                   push edi
// 00482319  8d442418             lea eax, [esp + 0x18]
// 0048231d  50                   push eax
// 0048231e  8bcb                 mov ecx, ebx
// 00482320  e83be10700           call 0x500460
// 00482325  d900                 fld dword ptr [eax]
// 00482327  d95ef8               fstp dword ptr [esi - 8]
// 0048232a  83c701               add edi, 1
// 0048232d  d94004               fld dword ptr [eax + 4]
// 00482330  83c610               add esi, 0x10
// 00482333  83ff04               cmp edi, 4
// 00482336  d95eec               fstp dword ptr [esi - 0x14]
// 00482339  d94008               fld dword ptr [eax + 8]
// 0048233c  d95ef0               fstp dword ptr [esi - 0x10]
// 0048233f  d9400c               fld dword ptr [eax + 0xc]
// 00482342  d95ef4               fstp dword ptr [esi - 0xc]
// 00482345  7cd1                 jl 0x482318
// 00482347  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0048234b  8d4c2424             lea ecx, [esp + 0x24]
// 0048234f  51                   push ecx
// 00482350  52                   push edx
// 00482351  8bcd                 mov ecx, ebp
// 00482353  e8f8f8ffff           call 0x481c50
// 00482358  8b442464             mov eax, dword ptr [esp + 0x64]
// 0048235c  85c0                 test eax, eax
// 0048235e  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00482366  7444                 je 0x4823ac
// 00482368  83c004               add eax, 4
// 0048236b  50                   push eax
// 0048236c  ff15a8d27700         call dword ptr [0x77d2a8]
// 00482372  85c0                 test eax, eax
// 00482374  7536                 jne 0x4823ac
// 00482376  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0048237a  8b7108               mov esi, dword ptr [ecx + 8]
// 0048237d  85f6                 test esi, esi
// 0048237f  741f                 je 0x4823a0
// 00482381  8b0e                 mov ecx, dword ptr [esi]
// 00482383  8b01                 mov eax, dword ptr [ecx]
// 00482385  8b5004               mov edx, dword ptr [eax + 4]
// 00482388  ffd2                 call edx
// 0048238a  8bc6                 mov eax, esi
// 0048238c  8b7604               mov esi, dword ptr [esi + 4]
// 0048238f  50                   push eax
// 00482390  e85bbd1900           call 0x61e0f0
// 00482395  83c404               add esp, 4
// 00482398  85f6                 test esi, esi
// 0048239a  75e5                 jne 0x482381
// 0048239c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004823a0  85c9                 test ecx, ecx
// 004823a2  7408                 je 0x4823ac
// 004823a4  8b01                 mov eax, dword ptr [ecx]
// 004823a6  8b10                 mov edx, dword ptr [eax]
// 004823a8  6a01                 push 1
// 004823aa  ffd2                 call edx
// 004823ac  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 004823b0  64890d00000000       mov dword ptr fs:[0], ecx
// 004823b7  59                   pop ecx
// 004823b8  5f                   pop edi
// 004823b9  5e                   pop esi
// 004823ba  5d                   pop ebp
// 004823bb  5b                   pop ebx
// 004823bc  83c464               add esp, 0x64
// 004823bf  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVMatrix4@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
