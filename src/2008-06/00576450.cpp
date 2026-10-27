// from server: 65% by coldek
// roc 2008-06 00576450  unit: RBX::DataModel  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576450
//
// 00576450  55                   push ebp
// 00576451  8bec                 mov ebp, esp
// 00576453  6aff                 push -1
// 00576455  68f1057d00           push 0x7d05f1
// 0057645a  64a100000000         mov eax, dword ptr fs:[0]
// 00576460  50                   push eax
// 00576461  64892500000000       mov dword ptr fs:[0], esp
// 00576468  83ec2c               sub esp, 0x2c
// 0057646b  53                   push ebx
// 0057646c  56                   push esi
// 0057646d  33c0                 xor eax, eax
// 0057646f  57                   push edi
// 00576470  8965f0               mov dword ptr [ebp - 0x10], esp
// 00576473  8945fc               mov dword ptr [ebp - 4], eax
// 00576476  3bc8                 cmp ecx, eax
// 00576478  7406                 je 0x576480
// 0057647a  8d81bcfcffff         lea eax, [ecx - 0x344]
// 00576480  8b7508               mov esi, dword ptr [ebp + 8]
// 00576483  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00576486  8b11                 mov edx, dword ptr [ecx]
// 00576488  56                   push esi
// 00576489  50                   push eax
// 0057648a  8b02                 mov eax, dword ptr [edx]
// 0057648c  ffd0                 call eax
// 0057648e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00576491  5f                   pop edi
// 00576492  5e                   pop esi
// 00576493  64890d00000000       mov dword ptr fs:[0], ecx
// 0057649a  5b                   pop ebx
// 0057649b  8be5                 mov esp, ebp
// 0057649d  5d                   pop ebp
// 0057649e  c20800               ret 8
// 005764a1  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005764a4  8b11                 mov edx, dword ptr [ecx]
// 005764a6  8b4204               mov eax, dword ptr [edx + 4]
// 005764a9  ffd0                 call eax
// 005764ab  50                   push eax
// 005764ac  8d4dc8               lea ecx, [ebp - 0x38]
// 005764af  ff1558248000         call dword ptr [0x802458]
// 005764b5  8d4de4               lea ecx, [ebp - 0x1c]
// 005764b8  bb02000000           mov ebx, 2
// 005764bd  51                   push ecx
// 005764be  885dfc               mov byte ptr [ebp - 4], bl
// 005764c1  e85a31ffff           call 0x569620
// 005764c6  83c404               add esp, 4
// 005764c9  837de010             cmp dword ptr [ebp - 0x20], 0x10
// 005764cd  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 005764d0  c645fc03             mov byte ptr [ebp - 4], 3
// 005764d4  7303                 jae 0x5764d9
// 005764d6  8d4dcc               lea ecx, [ebp - 0x34]
// 005764d9  8b00                 mov eax, dword ptr [eax]
// 005764db  51                   push ecx
// 005764dc  68c4b98000           push 0x80b9c4
// 005764e1  53                   push ebx
// 005764e2  50                   push eax
// 005764e3  e8b82effff           call 0x5693a0
// 005764e8  83c410               add esp, 0x10
// 005764eb  8d4de4               lea ecx, [ebp - 0x1c]
// 005764ee  885dfc               mov byte ptr [ebp - 4], bl
// 005764f1  e86aa10800           call 0x600660
// 005764f6  8d4dc8               lea ecx, [ebp - 0x38]
// 005764f9  c645fc01             mov byte ptr [ebp - 4], 1
// 005764fd  ff1568248000         call dword ptr [0x802468]
// 00576503  b88e645700           mov eax, 0x57648e
// 00576508  c3                   ret 

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Source;
struct Event { void* value; };
struct Listener { virtual void onEvent(const Source*, Event) = 0; };
struct Padding { char bytes[0x344]; };
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
