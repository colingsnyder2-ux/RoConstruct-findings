// roc 2011-06 0049a320  unit: VerbBinderJob  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049a320
//
// 0049a320  6aff                 push -1
// 0049a322  6829e09e00           push 0x9ee029
// 0049a327  64a100000000         mov eax, dword ptr fs:[0]
// 0049a32d  50                   push eax
// 0049a32e  64892500000000       mov dword ptr fs:[0], esp
// 0049a335  51                   push ecx
// 0049a336  56                   push esi
// 0049a337  57                   push edi
// 0049a338  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0049a33c  8bf1                 mov esi, ecx
// 0049a33e  57                   push edi
// 0049a33f  8974240c             mov dword ptr [esp + 0xc], esi
// 0049a343  ff15c804a400         call dword ptr [0xa404c8]
// 0049a349  8d471c               lea eax, [edi + 0x1c]
// 0049a34c  50                   push eax
// 0049a34d  8d4e1c               lea ecx, [esi + 0x1c]
// 0049a350  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049a358  ff15c804a400         call dword ptr [0xa404c8]
// 0049a35e  0fb64f38             movzx ecx, byte ptr [edi + 0x38]
// 0049a362  884e38               mov byte ptr [esi + 0x38], cl
// 0049a365  8a5739               mov dl, byte ptr [edi + 0x39]
// 0049a368  885639               mov byte ptr [esi + 0x39], dl
// 0049a36b  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0049a36e  89463c               mov dword ptr [esi + 0x3c], eax
// 0049a371  0fb64f40             movzx ecx, byte ptr [edi + 0x40]
// 0049a375  884e40               mov byte ptr [esi + 0x40], cl
// 0049a378  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049a37c  5f                   pop edi
// 0049a37d  8bc6                 mov eax, esi
// 0049a37f  5e                   pop esi
// 0049a380  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a387  83c410               add esp, 0x10
// 0049a38a  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
