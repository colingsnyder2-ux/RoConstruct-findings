// from server: 100% by king_originala
// roc 2008-06 005f3f00  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3f00
//
// 005f3f00  55                   push ebp
// 005f3f01  8bec                 mov ebp, esp
// 005f3f03  6aff                 push -1
// 005f3f05  68c8747d00           push 0x7d74c8
// 005f3f0a  64a100000000         mov eax, dword ptr fs:[0]
// 005f3f10  50                   push eax
// 005f3f11  64892500000000       mov dword ptr fs:[0], esp
// 005f3f18  83ec08               sub esp, 8
// 005f3f1b  53                   push ebx
// 005f3f1c  56                   push esi
// 005f3f1d  8bf1                 mov esi, ecx
// 005f3f1f  57                   push edi
// 005f3f20  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f3f23  8975ec               mov dword ptr [ebp - 0x14], esi
// 005f3f26  c706740a8400         mov dword ptr [esi], 0x840a74
// 005f3f2c  b001                 mov al, 1
// 005f3f2e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f3f35  8845fc               mov byte ptr [ebp - 4], al
// 005f3f38  844658               test byte ptr [esi + 0x58], al
// 005f3f3b  741c                 je 0x5f3f59
// 005f3f3d  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 005f3f40  c1e904               shr ecx, 4
// 005f3f43  84c8                 test al, cl
// 005f3f45  7412                 je 0x5f3f59
// 005f3f47  8bce                 mov ecx, esi
// 005f3f49  e832feffff           call 0x5f3d80
// 005f3f4e  eb09                 jmp 0x5f3f59

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
