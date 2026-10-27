// from server: 100% by king_originala
// roc 2008-06 00496680  unit: RBX::Network::Players::Plugin  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496680
//
// 00496680  55                   push ebp
// 00496681  8bec                 mov ebp, esp
// 00496683  6aff                 push -1
// 00496685  68a16b7c00           push 0x7c6ba1
// 0049668a  64a100000000         mov eax, dword ptr fs:[0]
// 00496690  50                   push eax
// 00496691  64892500000000       mov dword ptr fs:[0], esp
// 00496698  83ec2c               sub esp, 0x2c
// 0049669b  53                   push ebx
// 0049669c  56                   push esi
// 0049669d  33c0                 xor eax, eax
// 0049669f  57                   push edi
// 004966a0  8965f0               mov dword ptr [ebp - 0x10], esp
// 004966a3  8945fc               mov dword ptr [ebp - 4], eax
// 004966a6  3bc8                 cmp ecx, eax
// 004966a8  7406                 je 0x4966b0
// 004966aa  8d81b0feffff         lea eax, [ecx - 0x150]
// 004966b0  8b7508               mov esi, dword ptr [ebp + 8]
// 004966b3  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004966b6  8b11                 mov edx, dword ptr [ecx]
// 004966b8  56                   push esi
// 004966b9  50                   push eax
// 004966ba  8b02                 mov eax, dword ptr [edx]
// 004966bc  ffd0                 call eax
// 004966be  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004966c1  5f                   pop edi
// 004966c2  5e                   pop esi
// 004966c3  64890d00000000       mov dword ptr fs:[0], ecx
// 004966ca  5b                   pop ebx
// 004966cb  8be5                 mov esp, ebp
// 004966cd  5d                   pop ebp
// 004966ce  c20800               ret 8
// 004966d1  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004966d4  8b11                 mov edx, dword ptr [ecx]
// 004966d6  8b4204               mov eax, dword ptr [edx + 4]
// 004966d9  ffd0                 call eax
// 004966db  50                   push eax
// 004966dc  8d4dc8               lea ecx, [ebp - 0x38]
// 004966df  ff1558248000         call dword ptr [0x802458]
// 004966e5  8d4de4               lea ecx, [ebp - 0x1c]
// 004966e8  bb02000000           mov ebx, 2
// 004966ed  51                   push ecx
// 004966ee  885dfc               mov byte ptr [ebp - 4], bl
// 004966f1  e82a2f0d00           call 0x569620
// 004966f6  83c404               add esp, 4
// 004966f9  837de010             cmp dword ptr [ebp - 0x20], 0x10
// 004966fd  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00496700  c645fc03             mov byte ptr [ebp - 4], 3
// 00496704  7303                 jae 0x496709
// 00496706  8d4dcc               lea ecx, [ebp - 0x34]
// 00496709  8b00                 mov eax, dword ptr [eax]
// 0049670b  51                   push ecx
// 0049670c  68c4b98000           push 0x80b9c4
// 00496711  53                   push ebx
// 00496712  50                   push eax
// 00496713  e8882c0d00           call 0x5693a0
// 00496718  83c410               add esp, 0x10
// 0049671b  8d4de4               lea ecx, [ebp - 0x1c]
// 0049671e  885dfc               mov byte ptr [ebp - 4], bl
// 00496721  e83a9f1600           call 0x600660
// 00496726  8d4dc8               lea ecx, [ebp - 0x38]
// 00496729  c645fc01             mov byte ptr [ebp - 4], 1
// 0049672d  ff1568248000         call dword ptr [0x802468]
// 00496733  b8be664900           mov eax, 0x4966be
// 00496738  c3                   ret 

#include <string>
#include <exception>
struct StandardOut {
    void print(int, const char *, ...);
};

struct OutHandle {
    StandardOut *pointer;
    void *count;
    ~OutHandle();
    StandardOut *operator->() const { return pointer; }
};

OutHandle __cdecl singleton();


// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Source;
struct Event { void* value; };
struct Listener { virtual void onEvent(const Source*, Event) = 0; };
struct Padding { char bytes[0x150]; };
template <class T, class E> struct Notifier { void raise(E event, Listener* listener) const; int state; };
struct Source : Padding, Notifier<Source, Event> {};
template <class T, class E> void Notifier<T,E>::raise(E event, Listener* listener) const
{
    try {
        listener->onEvent(static_cast<const T*>(this), event);
    }
    catch (std::exception& error) {
        std::string what(error.what());
        singleton()->print(2, "Exception caught in onEvent. %s", what.c_str());
    }
}
template void Notifier<Source,Event>::raise(Event,Listener*) const;
