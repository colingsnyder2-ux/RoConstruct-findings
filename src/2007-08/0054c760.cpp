// from server: 20% by colin
// roc 2007-08 0054c760  unit: UString_sink::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c760
//
// 0054c760  55                   push ebp
// 0054c761  8bec                 mov ebp, esp
// 0054c763  6aff                 push -1
// 0054c765  6898257500           push 0x752598
// 0054c76a  64a100000000         mov eax, dword ptr fs:[0]
// 0054c770  50                   push eax
// 0054c771  64892500000000       mov dword ptr fs:[0], esp
// 0054c778  83ec08               sub esp, 8
// 0054c77b  53                   push ebx
// 0054c77c  56                   push esi
// 0054c77d  8bf1                 mov esi, ecx
// 0054c77f  57                   push edi
// 0054c780  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054c783  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054c786  c7063c797a00         mov dword ptr [esi], 0x7a793c
// 0054c78c  b001                 mov al, 1
// 0054c78e  844654               test byte ptr [esi + 0x54], al
// 0054c791  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054c798  8845fc               mov byte ptr [ebp - 4], al
// 0054c79b  741c                 je 0x54c7b9
// 0054c79d  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0054c7a0  c1e904               shr ecx, 4
// 0054c7a3  84c8                 test al, cl
// 0054c7a5  7412                 je 0x54c7b9
// 0054c7a7  8bce                 mov ecx, esi
// 0054c7a9  e882e6ffff           call 0x54ae30
// 0054c7ae  eb09                 jmp 0x54c7b9

struct UString_sink_stream_buffer
{
    char pad0[0x54];
    unsigned int flags;
    void destroy();
    ~UString_sink_stream_buffer();
};

void UString_sink_stream_buffer::destroy()
{
    extern void sub_54ae30(UString_sink_stream_buffer*);
    sub_54ae30(this);
}

UString_sink_stream_buffer::~UString_sink_stream_buffer()
{
    *(int*)this = 0x7a793c;
    if ((flags & 1) == 0)
    {
        if (((flags >> 4) & 1) != 0)
        {
            destroy();
        }
    }
}
