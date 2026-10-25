// from server: 100% by colin
// roc 2008-06 005f9880  unit: UString_sink::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f9880
//
// 005f9880  55                   push ebp
// 005f9881  8bec                 mov ebp, esp
// 005f9883  6aff                 push -1
// 005f9885  68b87b7d00           push 0x7d7bb8
// 005f988a  64a100000000         mov eax, dword ptr fs:[0]
// 005f9890  50                   push eax
// 005f9891  64892500000000       mov dword ptr fs:[0], esp
// 005f9898  83ec08               sub esp, 8
// 005f989b  53                   push ebx
// 005f989c  56                   push esi
// 005f989d  8bf1                 mov esi, ecx
// 005f989f  57                   push edi
// 005f98a0  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f98a3  8975ec               mov dword ptr [ebp - 0x14], esi
// 005f98a6  c706ac0e8400         mov dword ptr [esi], 0x840eac
// 005f98ac  b001                 mov al, 1
// 005f98ae  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f98b5  8845fc               mov byte ptr [ebp - 4], al
// 005f98b8  844658               test byte ptr [esi + 0x58], al
// 005f98bb  741c                 je 0x5f98d9
// 005f98bd  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 005f98c0  c1e904               shr ecx, 4
// 005f98c3  84c8                 test al, cl
// 005f98c5  7412                 je 0x5f98d9
// 005f98c7  8bce                 mov ecx, esi
// 005f98c9  e8b2a4ffff           call 0x5f3d80
// 005f98ce  eb09                 jmp 0x5f98d9

struct Base {
    virtual ~Base();
    unsigned char storage[84];
};

struct S : Base {
    unsigned int flags;
    virtual ~S();
    void close();
};

S::~S()
{
    try {
        if ((*reinterpret_cast<unsigned char*>(&flags) & 1) &&
            (static_cast<unsigned char>(flags >> 4) & 1))
            close();
    } catch (...) {
    }
}
