// from server: 100% by colin
// roc 2008-06 005f3e00  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3e00
//
// 005f3e00  55                   push ebp
// 005f3e01  8bec                 mov ebp, esp
// 005f3e03  6aff                 push -1
// 005f3e05  6888747d00           push 0x7d7488
// 005f3e0a  64a100000000         mov eax, dword ptr fs:[0]
// 005f3e10  50                   push eax
// 005f3e11  64892500000000       mov dword ptr fs:[0], esp
// 005f3e18  83ec08               sub esp, 8
// 005f3e1b  53                   push ebx
// 005f3e1c  56                   push esi
// 005f3e1d  8bf1                 mov esi, ecx
// 005f3e1f  57                   push edi
// 005f3e20  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f3e23  8975ec               mov dword ptr [ebp - 0x14], esi
// 005f3e26  c706140a8400         mov dword ptr [esi], 0x840a14
// 005f3e2c  b001                 mov al, 1
// 005f3e2e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f3e35  8845fc               mov byte ptr [ebp - 4], al
// 005f3e38  844658               test byte ptr [esi + 0x58], al
// 005f3e3b  741c                 je 0x5f3e59
// 005f3e3d  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 005f3e40  c1e904               shr ecx, 4
// 005f3e43  84c8                 test al, cl
// 005f3e45  7412                 je 0x5f3e59
// 005f3e47  8bce                 mov ecx, esi
// 005f3e49  e832ffffff           call 0x5f3d80
// 005f3e4e  eb09                 jmp 0x5f3e59

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
