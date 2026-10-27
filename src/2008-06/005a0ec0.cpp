// from server: 65% by coldek
// roc 2008-06 005a0ec0  unit: RBX::RootInstance  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0ec0
//
// 005a0ec0  55                   push ebp
// 005a0ec1  8bec                 mov ebp, esp
// 005a0ec3  6aff                 push -1
// 005a0ec5  6871297d00           push 0x7d2971
// 005a0eca  64a100000000         mov eax, dword ptr fs:[0]
// 005a0ed0  50                   push eax
// 005a0ed1  64892500000000       mov dword ptr fs:[0], esp
// 005a0ed8  83ec2c               sub esp, 0x2c
// 005a0edb  53                   push ebx
// 005a0edc  56                   push esi
// 005a0edd  33c0                 xor eax, eax
// 005a0edf  57                   push edi
// 005a0ee0  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a0ee3  8945fc               mov dword ptr [ebp - 4], eax
// 005a0ee6  3bc8                 cmp ecx, eax
// 005a0ee8  7406                 je 0x5a0ef0
// 005a0eea  8d819cfcffff         lea eax, [ecx - 0x364]
// 005a0ef0  8b7508               mov esi, dword ptr [ebp + 8]
// 005a0ef3  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005a0ef6  8b11                 mov edx, dword ptr [ecx]
// 005a0ef8  56                   push esi
// 005a0ef9  50                   push eax
// 005a0efa  8b02                 mov eax, dword ptr [edx]
// 005a0efc  ffd0                 call eax
// 005a0efe  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005a0f01  5f                   pop edi
// 005a0f02  5e                   pop esi
// 005a0f03  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0f0a  5b                   pop ebx
// 005a0f0b  8be5                 mov esp, ebp
// 005a0f0d  5d                   pop ebp
// 005a0f0e  c20800               ret 8
// 005a0f11  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005a0f14  8b11                 mov edx, dword ptr [ecx]
// 005a0f16  8b4204               mov eax, dword ptr [edx + 4]
// 005a0f19  ffd0                 call eax
// 005a0f1b  50                   push eax
// 005a0f1c  8d4dc8               lea ecx, [ebp - 0x38]
// 005a0f1f  ff1558248000         call dword ptr [0x802458]
// 005a0f25  8d4de4               lea ecx, [ebp - 0x1c]
// 005a0f28  bb02000000           mov ebx, 2
// 005a0f2d  51                   push ecx
// 005a0f2e  885dfc               mov byte ptr [ebp - 4], bl
// 005a0f31  e8ea86fcff           call 0x569620
// 005a0f36  83c404               add esp, 4
// 005a0f39  837de010             cmp dword ptr [ebp - 0x20], 0x10
// 005a0f3d  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 005a0f40  c645fc03             mov byte ptr [ebp - 4], 3
// 005a0f44  7303                 jae 0x5a0f49
// 005a0f46  8d4dcc               lea ecx, [ebp - 0x34]
// 005a0f49  8b00                 mov eax, dword ptr [eax]
// 005a0f4b  51                   push ecx
// 005a0f4c  68c4b98000           push 0x80b9c4
// 005a0f51  53                   push ebx
// 005a0f52  50                   push eax
// 005a0f53  e84884fcff           call 0x5693a0
// 005a0f58  83c410               add esp, 0x10
// 005a0f5b  8d4de4               lea ecx, [ebp - 0x1c]
// 005a0f5e  885dfc               mov byte ptr [ebp - 4], bl
// 005a0f61  e8faf60500           call 0x600660
// 005a0f66  8d4dc8               lea ecx, [ebp - 0x38]
// 005a0f69  c645fc01             mov byte ptr [ebp - 4], 1
// 005a0f6d  ff1568248000         call dword ptr [0x802468]
// 005a0f73  b8fe0e5a00           mov eax, 0x5a0efe
// 005a0f78  c3                   ret 

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Source;
struct Event { void* value; };
struct Listener { virtual void onEvent(const Source*, Event) = 0; };
struct Padding { char bytes[0x364]; };
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
