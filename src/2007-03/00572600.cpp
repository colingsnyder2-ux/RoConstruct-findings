// roc 2007-03 00572600  unit: seg_00570000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572600
//
// 00572600  53                   push ebx
// 00572601  56                   push esi
// 00572602  57                   push edi
// 00572603  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00572607  8bd9                 mov ebx, ecx
// 00572609  33f6                 xor esi, esi
// 0057260b  eb03                 jmp 0x572610
// 0057260d  8d4900               lea ecx, [ecx]
// 00572610  56                   push esi
// 00572611  8bcb                 mov ecx, ebx
// 00572613  e878f70300           call 0x5b1d90
// 00572618  8bc8                 mov ecx, eax
// 0057261a  e811190400           call 0x5b3f30
// 0057261f  8904b7               mov dword ptr [edi + esi*4], eax
// 00572622  83c601               add esi, 1
// 00572625  83fe06               cmp esi, 6
// 00572628  7ce6                 jl 0x572610
// 0057262a  8bc7                 mov eax, edi
// 0057262c  5f                   pop edi
// 0057262d  5e                   pop esi
// 0057262e  5b                   pop ebx
// 0057262f  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?surf6@Surfaces@RBX@@QBE?AV?$Vector6@W4SurfaceType@RBX@@@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
