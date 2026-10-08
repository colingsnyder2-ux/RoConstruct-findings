// roc 2011-06 00813230  unit: CXTPPaintManager  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00813230
//
// 00813230  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00813235  0f84cb000000         je 0x813306
// 0081323b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0081323f  56                   push esi
// 00813240  7479                 je 0x8132bb
// 00813242  8db138010000         lea esi, [ecx + 0x138]
// 00813248  8bce                 mov ecx, esi
// 0081324a  e881a00600           call 0x87d2d0
// 0081324f  85c0                 test eax, eax
// 00813251  7468                 je 0x8132bb
// 00813253  33c0                 xor eax, eax
// 00813255  39442430             cmp dword ptr [esp + 0x30], eax
// 00813259  7507                 jne 0x813262
// 0081325b  b803000000           mov eax, 3
// 00813260  eb10                 jmp 0x813272
// 00813262  39442424             cmp dword ptr [esp + 0x24], eax
// 00813266  740a                 je 0x813272
// 00813268  33c0                 xor eax, eax
// 0081326a  39442428             cmp dword ptr [esp + 0x28], eax
// 0081326e  0f95c0               setne al
// 00813271  40                   inc eax
// 00813272  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00813276  83f901               cmp ecx, 1
// 00813279  7505                 jne 0x813280
// 0081327b  83c004               add eax, 4
// 0081327e  eb08                 jmp 0x813288
// 00813280  83f902               cmp ecx, 2
// 00813283  7503                 jne 0x813288
// 00813285  83c008               add eax, 8
// 00813288  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081328c  85c9                 test ecx, ecx
// 0081328e  7403                 je 0x813293
// 00813290  8b4904               mov ecx, dword ptr [ecx + 4]
// 00813293  6a00                 push 0
// 00813295  8d542414             lea edx, [esp + 0x14]
// 00813299  52                   push edx
// 0081329a  40                   inc eax
// 0081329b  50                   push eax
// 0081329c  6a03                 push 3
// 0081329e  51                   push ecx
// 0081329f  8bce                 mov ecx, esi
// 008132a1  e85a9d0600           call 0x87d000
// 008132a6  8b442408             mov eax, dword ptr [esp + 8]
// 008132aa  5e                   pop esi
// 008132ab  c7000d000000         mov dword ptr [eax], 0xd
// 008132b1  c740040d000000       mov dword ptr [eax + 4], 0xd
// 008132b8  c22c00               ret 0x2c
// 008132bb  837c243000           cmp dword ptr [esp + 0x30], 0
// 008132c0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008132c4  7409                 je 0x8132cf
// 008132c6  83f802               cmp eax, 2
// 008132c9  7404                 je 0x8132cf
// 008132cb  33c9                 xor ecx, ecx
// 008132cd  eb05                 jmp 0x8132d4
// 008132cf  b900010000           mov ecx, 0x100
// 008132d4  8b542428             mov edx, dword ptr [esp + 0x28]
// 008132d8  f7d8                 neg eax
// 008132da  1bc0                 sbb eax, eax
// 008132dc  2500040000           and eax, 0x400
// 008132e1  f7da                 neg edx
// 008132e3  1bd2                 sbb edx, edx
// 008132e5  81e200020000         and edx, 0x200
// 008132eb  0bc2                 or eax, edx
// 008132ed  0bc1                 or eax, ecx
// 008132ef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008132f3  8b5104               mov edx, dword ptr [ecx + 4]
// 008132f6  50                   push eax
// 008132f7  6a04                 push 4
// 008132f9  8d442418             lea eax, [esp + 0x18]
// 008132fd  50                   push eax
// 008132fe  52                   push edx
// 008132ff  ff15241ca400         call dword ptr [0xa41c24]
// 00813305  5e                   pop esi
// 00813306  8b442404             mov eax, dword ptr [esp + 4]
// 0081330a  c7000d000000         mov dword ptr [eax], 0xd
// 00813310  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00813317  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlCheckBoxMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
