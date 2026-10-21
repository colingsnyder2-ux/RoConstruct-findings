// from server: 100% by colin
// roc 2008-06 00451190  unit: RBX::CameraTiltUpCommand  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00451190
//
// 00451190  55                   push ebp
// 00451191  8bec                 mov ebp, esp
// 00451193  6aff                 push -1
// 00451195  68701c7c00           push 0x7c1c70
// 0045119a  64a100000000         mov eax, dword ptr fs:[0]
// 004511a0  50                   push eax
// 004511a1  64892500000000       mov dword ptr fs:[0], esp
// 004511a8  83ec08               sub esp, 8
// 004511ab  8b4104               mov eax, dword ptr [ecx + 4]
// 004511ae  53                   push ebx
// 004511af  56                   push esi
// 004511b0  894dec               mov dword ptr [ebp - 0x14], ecx
// 004511b3  8b09                 mov ecx, dword ptr [ecx]
// 004511b5  8b09                 mov ecx, dword ptr [ecx]
// 004511b7  57                   push edi
// 004511b8  8965f0               mov dword ptr [ebp - 0x10], esp
// 004511bb  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004511c2  a802                 test al, 2
// 004511c4  7409                 je 0x4511cf
// 004511c6  83c104               add ecx, 4
// 004511c9  ff1570238000         call dword ptr [0x802370]
// 004511cf  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004511d2  5f                   pop edi
// 004511d3  5e                   pop esi
// 004511d4  64890d00000000       mov dword ptr fs:[0], ecx
// 004511db  5b                   pop ebx
// 004511dc  8be5                 mov esp, ebp
// 004511de  5d                   pop ebp
// 004511df  c3                   ret 

// from server: 88% by king_originala
struct Buffer {
    char unused;
};

extern int (__thiscall *pubsync)(Buffer *);

struct Stream {
    int padding;
    Buffer buffer;
};

struct S {
    Stream *volatile *stream;
    volatile unsigned int flags;
    ~S();
};

S::~S()
{
    try {
        unsigned int state = flags;
        Stream *p = *stream;
        if (state & 2)
            pubsync(&p->buffer);
    }
    catch (...) {
        flags |= 4;
    }
}
