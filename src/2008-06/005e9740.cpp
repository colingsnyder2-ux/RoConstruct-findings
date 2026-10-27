// from server: 100% by king_originala
// roc 2008-06 005e9740  unit: RBX::PhysicsService  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9740
//
// 005e9740  55                   push ebp
// 005e9741  8bec                 mov ebp, esp
// 005e9743  6aff                 push -1
// 005e9745  68c1697d00           push 0x7d69c1
// 005e974a  64a100000000         mov eax, dword ptr fs:[0]
// 005e9750  50                   push eax
// 005e9751  64892500000000       mov dword ptr fs:[0], esp
// 005e9758  83ec2c               sub esp, 0x2c
// 005e975b  53                   push ebx
// 005e975c  56                   push esi
// 005e975d  33c0                 xor eax, eax
// 005e975f  57                   push edi
// 005e9760  8965f0               mov dword ptr [ebp - 0x10], esp
// 005e9763  8945fc               mov dword ptr [ebp - 4], eax
// 005e9766  3bc8                 cmp ecx, eax
// 005e9768  7403                 je 0x5e976d
// 005e976a  8d41c0               lea eax, [ecx - 0x40]
// 005e976d  8b7508               mov esi, dword ptr [ebp + 8]
// 005e9770  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005e9773  8b11                 mov edx, dword ptr [ecx]
// 005e9775  56                   push esi
// 005e9776  50                   push eax
// 005e9777  8b02                 mov eax, dword ptr [edx]
// 005e9779  ffd0                 call eax
// 005e977b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005e977e  5f                   pop edi
// 005e977f  5e                   pop esi
// 005e9780  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9787  5b                   pop ebx
// 005e9788  8be5                 mov esp, ebp
// 005e978a  5d                   pop ebp
// 005e978b  c20800               ret 8
// 005e978e  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005e9791  8b11                 mov edx, dword ptr [ecx]
// 005e9793  8b4204               mov eax, dword ptr [edx + 4]
// 005e9796  ffd0                 call eax
// 005e9798  50                   push eax
// 005e9799  8d4dc8               lea ecx, [ebp - 0x38]
// 005e979c  ff1558248000         call dword ptr [0x802458]
// 005e97a2  8d4de4               lea ecx, [ebp - 0x1c]
// 005e97a5  bb02000000           mov ebx, 2
// 005e97aa  51                   push ecx
// 005e97ab  885dfc               mov byte ptr [ebp - 4], bl
// 005e97ae  e86dfef7ff           call 0x569620
// 005e97b3  83c404               add esp, 4
// 005e97b6  837de010             cmp dword ptr [ebp - 0x20], 0x10
// 005e97ba  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 005e97bd  c645fc03             mov byte ptr [ebp - 4], 3
// 005e97c1  7303                 jae 0x5e97c6
// 005e97c3  8d4dcc               lea ecx, [ebp - 0x34]
// 005e97c6  8b00                 mov eax, dword ptr [eax]
// 005e97c8  51                   push ecx
// 005e97c9  68c4b98000           push 0x80b9c4
// 005e97ce  53                   push ebx
// 005e97cf  50                   push eax
// 005e97d0  e8cbfbf7ff           call 0x5693a0
// 005e97d5  83c410               add esp, 0x10
// 005e97d8  8d4de4               lea ecx, [ebp - 0x1c]
// 005e97db  885dfc               mov byte ptr [ebp - 4], bl
// 005e97de  e87d6e0100           call 0x600660
// 005e97e3  8d4dc8               lea ecx, [ebp - 0x38]
// 005e97e6  c645fc01             mov byte ptr [ebp - 4], 1
// 005e97ea  ff1568248000         call dword ptr [0x802468]
// 005e97f0  b87b975e00           mov eax, 0x5e977b
// 005e97f5  c3                   ret 

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
struct Padding { char bytes[0x40]; };
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
