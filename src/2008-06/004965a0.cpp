// from server: 100% by king_originala
// roc 2008-06 004965a0  unit: RBX::Network::Players::Plugin  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004965a0
//
// 004965a0  55                   push ebp
// 004965a1  8bec                 mov ebp, esp
// 004965a3  6aff                 push -1
// 004965a5  68796b7c00           push 0x7c6b79
// 004965aa  64a100000000         mov eax, dword ptr fs:[0]
// 004965b0  50                   push eax
// 004965b1  64892500000000       mov dword ptr fs:[0], esp
// 004965b8  83ec2c               sub esp, 0x2c
// 004965bb  53                   push ebx
// 004965bc  56                   push esi
// 004965bd  57                   push edi
// 004965be  8965f0               mov dword ptr [ebp - 0x10], esp
// 004965c1  33f6                 xor esi, esi
// 004965c3  8975fc               mov dword ptr [ebp - 4], esi
// 004965c6  c645fc01             mov byte ptr [ebp - 4], 1
// 004965ca  3bce                 cmp ecx, esi
// 004965cc  7406                 je 0x4965d4
// 004965ce  8db1d0feffff         lea esi, [ecx - 0x130]
// 004965d4  83ec48               sub esp, 0x48
// 004965d7  8d4508               lea eax, [ebp + 8]
// 004965da  8bcc                 mov ecx, esp
// 004965dc  8965ec               mov dword ptr [ebp - 0x14], esp
// 004965df  50                   push eax
// 004965e0  e89bfeffff           call 0x496480
// 004965e5  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 004965e8  8b11                 mov edx, dword ptr [ecx]
// 004965ea  8b02                 mov eax, dword ptr [edx]
// 004965ec  56                   push esi
// 004965ed  ffd0                 call eax
// 004965ef  8d4d08               lea ecx, [ebp + 8]
// 004965f2  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004965f9  e8c2fdffff           call 0x4963c0
// 004965fe  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00496601  5f                   pop edi
// 00496602  5e                   pop esi
// 00496603  64890d00000000       mov dword ptr fs:[0], ecx
// 0049660a  5b                   pop ebx
// 0049660b  8be5                 mov esp, ebp
// 0049660d  5d                   pop ebp
// 0049660e  c24c00               ret 0x4c
// 00496611  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 00496614  8b11                 mov edx, dword ptr [ecx]
// 00496616  8b4204               mov eax, dword ptr [edx + 4]
// 00496619  ffd0                 call eax
// 0049661b  50                   push eax
// 0049661c  8d4dc8               lea ecx, [ebp - 0x38]
// 0049661f  ff1558248000         call dword ptr [0x802458]
// 00496625  8d4de8               lea ecx, [ebp - 0x18]
// 00496628  b303                 mov bl, 3
// 0049662a  51                   push ecx
// 0049662b  885dfc               mov byte ptr [ebp - 4], bl
// 0049662e  e8ed2f0d00           call 0x569620
// 00496633  83c404               add esp, 4
// 00496636  837de010             cmp dword ptr [ebp - 0x20], 0x10
// 0049663a  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 0049663d  c645fc04             mov byte ptr [ebp - 4], 4
// 00496641  7303                 jae 0x496646
// 00496643  8d4dcc               lea ecx, [ebp - 0x34]
// 00496646  8b00                 mov eax, dword ptr [eax]
// 00496648  51                   push ecx
// 00496649  68c4b98000           push 0x80b9c4
// 0049664e  6a02                 push 2
// 00496650  50                   push eax
// 00496651  e84a2d0d00           call 0x5693a0
// 00496656  83c410               add esp, 0x10
// 00496659  8d4de8               lea ecx, [ebp - 0x18]
// 0049665c  885dfc               mov byte ptr [ebp - 4], bl
// 0049665f  e8fc9f1600           call 0x600660
// 00496664  8d4dc8               lea ecx, [ebp - 0x38]
// 00496667  c645fc02             mov byte ptr [ebp - 4], 2
// 0049666b  ff1568248000         call dword ptr [0x802468]
// 00496671  b8ef654900           mov eax, 0x4965ef
// 00496676  c3                   ret 

#include <string>
#include <exception>
// from server: 100% by colin
// roc 2008-06 004965a0  unit: RBX::Network::Players::Plugin  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004965a0
//
// 004965a0  55                   push ebp
// 004965a1  8bec                 mov ebp, esp
// 004965a3  6aff                 push -1
// 004965a5  68796b7c00           push 0x7c6b79
// 004965aa  64a100000000         mov eax, dword ptr fs:[0]
// 004965b0  50                   push eax
// 004965b1  64892500000000       mov dword ptr fs:[0], esp
// 004965b8  83ec2c               sub esp, 0x2c
// 004965bb  53                   push ebx
// 004965bc  56                   push esi
// 004965bd  57                   push edi
// 004965be  8965f0               mov dword ptr [ebp - 0x10], esp
// 004965c1  33f6                 xor esi, esi
// 004965c3  8975fc               mov dword ptr [ebp - 4], esi
// 004965c6  c645fc01             mov byte ptr [ebp - 4], 1
// 004965ca  3bce                 cmp ecx, esi
// 004965cc  7406                 je 0x4965d4
// 004965ce  8db1d0feffff         lea esi, [ecx - 0x130]
// 004965d4  83ec48               sub esp, 0x48
// 004965d7  8d4508               lea eax, [ebp + 8]
// 004965da  8bcc                 mov ecx, esp
// 004965dc  8965ec               mov dword ptr [ebp - 0x14], esp
// 004965df  50                   push eax
// 004965e0  e89bfeffff           call 0x496480
// 004965e5  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 004965e8  8b11                 mov edx, dword ptr [ecx]
// 004965ea  8b02                 mov eax, dword ptr [edx]
// 004965ec  56                   push esi
// 004965ed  ffd0                 call eax

// from server: 84% by colin
// from server: 83% by colin
// roc 2008-06 004965a0  unit: RBX::Network::Players::Plugin  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004965a0
//
// 004965a0  55                   push ebp
// 004965a1  8bec                 mov ebp, esp
// 004965a3  6aff                 push -1
// 004965a5  68796b7c00           push 0x7c6b79
// 004965aa  64a100000000         mov eax, dword ptr fs:[0]
// 004965b0  50                   push eax
// 004965b1  64892500000000       mov dword ptr fs:[0], esp
// 004965b8  83ec2c               sub esp, 0x2c
// 004965bb  53                   push ebx
// 004965bc  56                   push esi
// 004965bd  57                   push edi
// 004965be  8965f0               mov dword ptr [ebp - 0x10], esp
// 004965c1  33f6                 xor esi, esi
// 004965c3  8975fc               mov dword ptr [ebp - 4], esi
// 004965c6  c645fc01             mov byte ptr [ebp - 4], 1
// 004965ca  3bce                 cmp ecx, esi
// 004965cc  7406                 je 0x4965d4
// 004965ce  8db1d0feffff         lea esi, [ecx - 0x130]
// 004965d4  83ec48               sub esp, 0x48
// 004965d7  8d4508               lea eax, [ebp + 8]
// 004965da  8bcc                 mov ecx, esp
// 004965dc  8965ec               mov dword ptr [ebp - 0x14], esp
// 004965df  50                   push eax
// 004965e0  e89bfeffff           call 0x496480
// 004965e5  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 004965e8  8b11                 mov edx, dword ptr [ecx]
// 004965ea  8b02                 mov eax, dword ptr [edx]
// 004965ec  56                   push esi
// 004965ed  ffd0                 call eax

// from server: 81% by king_originala
// roc 2008-06 004965a0  unit: RBX::Network::Players::Plugin  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004965a0
//
// 004965a0  55                   push ebp
// 004965a1  8bec                 mov ebp, esp
// 004965a3  6aff                 push -1
// 004965a5  68796b7c00           push 0x7c6b79
// 004965aa  64a100000000         mov eax, dword ptr fs:[0]
// 004965b0  50                   push eax
// 004965b1  64892500000000       mov dword ptr fs:[0], esp
// 004965b8  83ec2c               sub esp, 0x2c
// 004965bb  53                   push ebx
// 004965bc  56                   push esi
// 004965bd  57                   push edi
// 004965be  8965f0               mov dword ptr [ebp - 0x10], esp
// 004965c1  33f6                 xor esi, esi
// 004965c3  8975fc               mov dword ptr [ebp - 4], esi
// 004965c6  c645fc01             mov byte ptr [ebp - 4], 1
// 004965ca  3bce                 cmp ecx, esi
// 004965cc  7406                 je 0x4965d4
// 004965ce  8db1d0feffff         lea esi, [ecx - 0x130]
// 004965d4  83ec48               sub esp, 0x48
// 004965d7  8d4508               lea eax, [ebp + 8]
// 004965da  8bcc                 mov ecx, esp
// 004965dc  8965ec               mov dword ptr [ebp - 0x14], esp
// 004965df  50                   push eax
// 004965e0  e89bfeffff           call 0x496480
// 004965e5  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 004965e8  8b11                 mov edx, dword ptr [ecx]
// 004965ea  8b02                 mov eax, dword ptr [edx]
// 004965ec  56                   push esi
// 004965ed  ffd0                 call eax

struct Message {
    char data[72];
    Message(const Message&);
    ~Message();
};

struct Callback {
    virtual void invoke(void*, Message) = 0;
};

struct Plugin {
    void dispatch(Message, Callback*);
};

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


void Plugin::dispatch(Message message, Callback* callback)
{
    try {
        void* owner = this ? reinterpret_cast<char*>(this) - 0x130 : 0;
        callback->invoke(owner, message);
    }
    catch (std::exception& error) {
        std::string what(error.what());
        singleton()->print(2, "Exception caught in onEvent. %s", what.c_str());
    }
}


