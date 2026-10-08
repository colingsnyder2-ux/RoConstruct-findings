// roc 2008-06 0064d380  unit: RBX::SimJobStage  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064d380
//
// 0064d380  56                   push esi
// 0064d381  8bf1                 mov esi, ecx
// 0064d383  57                   push edi
// 0064d384  8d7e10               lea edi, [esi + 0x10]
// 0064d387  8bcf                 mov ecx, edi
// 0064d389  c70674b18400         mov dword ptr [esi], 0x84b174
// 0064d38f  e8ac570300           call 0x682b40
// 0064d394  8b07                 mov eax, dword ptr [edi]
// 0064d396  50                   push eax
// 0064d397  e8de320500           call 0x6a067a
// 0064d39c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064d39f  83c404               add esp, 4
// 0064d3a2  85c9                 test ecx, ecx
// 0064d3a4  7408                 je 0x64d3ae
// 0064d3a6  8b11                 mov edx, dword ptr [ecx]
// 0064d3a8  8b02                 mov eax, dword ptr [edx]
// 0064d3aa  6a01                 push 1
// 0064d3ac  ffd0                 call eax
// 0064d3ae  f644240c01           test byte ptr [esp + 0xc], 1
// 0064d3b3  7409                 je 0x64d3be
// 0064d3b5  56                   push esi
// 0064d3b6  e8bf320500           call 0x6a067a
// 0064d3bb  83c404               add esp, 4
// 0064d3be  5f                   pop edi
// 0064d3bf  8bc6                 mov eax, esi
// 0064d3c1  5e                   pop esi
// 0064d3c2  c20400               ret 4
// library rbxgs/v8world\SimJobStage.cpp (function ??_GSimJobStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SimJobStage.cpp
