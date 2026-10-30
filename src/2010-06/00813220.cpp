// roc 2010-06 00813220  unit: CXTColorDialog  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00813220
//
// 00813220  6aff                 push -1
// 00813222  6806469b00           push 0x9b4606
// 00813227  64a100000000         mov eax, dword ptr fs:[0]
// 0081322d  50                   push eax
// 0081322e  51                   push ecx
// 0081322f  56                   push esi
// 00813230  57                   push edi
// 00813231  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00813236  33c4                 xor eax, esp
// 00813238  50                   push eax
// 00813239  8d442410             lea eax, [esp + 0x10]
// 0081323d  64a300000000         mov dword ptr fs:[0], eax
// 00813243  8bf9                 mov edi, ecx
// 00813245  897c240c             mov dword ptr [esp + 0xc], edi
// 00813249  c707041ea600         mov dword ptr [edi], 0xa61e04
// 0081324f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00813257  33f6                 xor esi, esi
// 00813259  e806a31600           call 0x97d564
// 0081325e  85c0                 test eax, eax
// 00813260  7e39                 jle 0x81329b
// 00813262  85f6                 test esi, esi
// 00813264  7c66                 jl 0x8132cc
// 00813266  3bb790000000         cmp esi, dword ptr [edi + 0x90]
// 0081326c  7d5e                 jge 0x8132cc
// 0081326e  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 00813274  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00813277  33c0                 xor eax, eax
// 00813279  85c9                 test ecx, ecx
// 0081327b  0f95c0               setne al
// 0081327e  85c0                 test eax, eax
// 00813280  744a                 je 0x8132cc
// 00813282  85c9                 test ecx, ecx
// 00813284  7409                 je 0x81328f
// 00813286  8b11                 mov edx, dword ptr [ecx]
// 00813288  8b4204               mov eax, dword ptr [edx + 4]
// 0081328b  6a01                 push 1
// 0081328d  ffd0                 call eax
// 0081328f  8bcf                 mov ecx, edi
// 00813291  46                   inc esi
// 00813292  e8cda21600           call 0x97d564
// 00813297  3bf0                 cmp esi, eax
// 00813299  7cc7                 jl 0x813262
// 0081329b  8d8fb0000000         lea ecx, [edi + 0xb0]
// 008132a1  c644241800           mov byte ptr [esp + 0x18], 0
// 008132a6  e8159b1600           call 0x97cdc0
// 008132ab  8bcf                 mov ecx, edi
// 008132ad  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008132b5  e8609e1600           call 0x97d11a
// 008132ba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008132be  64890d00000000       mov dword ptr fs:[0], ecx
// 008132c5  59                   pop ecx
// 008132c6  5f                   pop edi
// 008132c7  5e                   pop esi
// 008132c8  83c410               add esp, 0x10
// 008132cb  c3                   ret 
// 008132cc  e87b49f9ff           call 0x7a7c4c
// copied from an identical function in another client (function ??1CXTColorDialog@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorDialog.cpp