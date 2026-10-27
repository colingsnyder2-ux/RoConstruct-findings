// from server: 65% by coldek
// roc 2008-06 00576390  unit: RBX::DataModel  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576390
//
// 00576390  55                   push ebp
// 00576391  8bec                 mov ebp, esp
// 00576393  6aff                 push -1
// 00576395  68d1057d00           push 0x7d05d1
// 0057639a  64a100000000         mov eax, dword ptr fs:[0]
// 005763a0  50                   push eax
// 005763a1  64892500000000       mov dword ptr fs:[0], esp
// 005763a8  83ec2c               sub esp, 0x2c
// 005763ab  53                   push ebx
// 005763ac  56                   push esi
// 005763ad  33c0                 xor eax, eax
// 005763af  57                   push edi
// 005763b0  8965f0               mov dword ptr [ebp - 0x10], esp
// 005763b3  8945fc               mov dword ptr [ebp - 4], eax
// 005763b6  3bc8                 cmp ecx, eax
// 005763b8  7406                 je 0x5763c0
// 005763ba  8d81d0feffff         lea eax, [ecx - 0x130]
// 005763c0  8b7508               mov esi, dword ptr [ebp + 8]
// 005763c3  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005763c6  8b11                 mov edx, dword ptr [ecx]
// 005763c8  56                   push esi
// 005763c9  50                   push eax
// 005763ca  8b02                 mov eax, dword ptr [edx]
// 005763cc  ffd0                 call eax
// 005763ce  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005763d1  5f                   pop edi
// 005763d2  5e                   pop esi
// 005763d3  64890d00000000       mov dword ptr fs:[0], ecx
// 005763da  5b                   pop ebx
// 005763db  8be5                 mov esp, ebp
// 005763dd  5d                   pop ebp
// 005763de  c20800               ret 8
// 005763e1  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005763e4  8b11                 mov edx, dword ptr [ecx]
// 005763e6  8b4204               mov eax, dword ptr [edx + 4]
// 005763e9  ffd0                 call eax
// 005763eb  50                   push eax
// 005763ec  8d4dc8               lea ecx, [ebp - 0x38]
// 005763ef  ff1558248000         call dword ptr [0x802458]
// 005763f5  8d4de4               lea ecx, [ebp - 0x1c]
// 005763f8  bb02000000           mov ebx, 2
// 005763fd  51                   push ecx
// 005763fe  885dfc               mov byte ptr [ebp - 4], bl
// 00576401  e81a32ffff           call 0x569620
// 00576406  83c404               add esp, 4
// 00576409  837de010             cmp dword ptr [ebp - 0x20], 0x10
// 0057640d  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00576410  c645fc03             mov byte ptr [ebp - 4], 3
// 00576414  7303                 jae 0x576419
// 00576416  8d4dcc               lea ecx, [ebp - 0x34]
// 00576419  8b00                 mov eax, dword ptr [eax]
// 0057641b  51                   push ecx
// 0057641c  68c4b98000           push 0x80b9c4
// 00576421  53                   push ebx
// 00576422  50                   push eax
// 00576423  e8782fffff           call 0x5693a0
// 00576428  83c410               add esp, 0x10
// 0057642b  8d4de4               lea ecx, [ebp - 0x1c]
// 0057642e  885dfc               mov byte ptr [ebp - 4], bl
// 00576431  e82aa20800           call 0x600660
// 00576436  8d4dc8               lea ecx, [ebp - 0x38]
// 00576439  c645fc01             mov byte ptr [ebp - 4], 1
// 0057643d  ff1568248000         call dword ptr [0x802468]
// 00576443  b8ce635700           mov eax, 0x5763ce
// 00576448  c3                   ret 

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Source;
struct Event { void* value; };
struct Listener { virtual void onEvent(const Source*, Event) = 0; };
struct Padding { char bytes[0x130]; };
template <class T, class E> struct Notifier { void raise(E event, Listener* listener) const; int state; };
struct Source : Padding, Notifier<Source, Event> {};
template <class T, class E> void Notifier<T,E>::raise(E event, Listener* listener) const
{
    volatile char scratch[40];
    try {
        listener->onEvent(static_cast<const T*>(this), event);
    }
    catch (...) { scratch[0] = 0; }
}
template void Notifier<Source,Event>::raise(Event,Listener*) const;
