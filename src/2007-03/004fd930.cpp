// roc 2007-03 004fd930  unit: seg_004f0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd930
//
// 004fd930  56                   push esi
// 004fd931  8bf1                 mov esi, ecx
// 004fd933  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004fd936  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004fd939  83c002               add eax, 2
// 004fd93c  3bc8                 cmp ecx, eax
// 004fd93e  7c02                 jl 0x4fd942
// 004fd940  8bc1                 mov eax, ecx
// 004fd942  3b4638               cmp eax, dword ptr [esi + 0x38]
// 004fd945  894634               mov dword ptr [esi + 0x34], eax
// 004fd948  7e0a                 jle 0x4fd954
// 004fd94a  51                   push ecx
// 004fd94b  6a02                 push 2
// 004fd94d  8bce                 mov ecx, esi
// 004fd94f  e83cffffff           call 0x4fd890
// 004fd954  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 004fd958  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004fd95b  741d                 je 0x4fd97a
// 004fd95d  8b5630               mov edx, dword ptr [esi + 0x30]
// 004fd960  668b442408           mov ax, word ptr [esp + 8]
// 004fd965  882411               mov byte ptr [ecx + edx], ah
// 004fd968  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004fd96b  8b5630               mov edx, dword ptr [esi + 0x30]
// 004fd96e  88441101             mov byte ptr [ecx + edx + 1], al
// 004fd972  83463c02             add dword ptr [esi + 0x3c], 2
// 004fd976  5e                   pop esi
// 004fd977  c20400               ret 4
// 004fd97a  8b4630               mov eax, dword ptr [esi + 0x30]
// 004fd97d  668b542408           mov dx, word ptr [esp + 8]
// 004fd982  66891408             mov word ptr [eax + ecx], dx
// 004fd986  83463c02             add dword ptr [esi + 0x3c], 2
// 004fd98a  5e                   pop esi
// 004fd98b  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryOutput.cpp (function ?writeUInt16@BinaryOutput@G3D@@QAEXG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryOutput.cpp
