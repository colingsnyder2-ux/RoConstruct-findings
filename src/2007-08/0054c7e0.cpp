// from server: 20% by colin
// roc 2007-08 0054c7e0  unit: UString_sink::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c7e0
//
// 0054c7e0  55                   push ebp
// 0054c7e1  8bec                 mov ebp, esp
// 0054c7e3  6aff                 push -1
// 0054c7e5  68b8257500           push 0x7525b8
// 0054c7ea  64a100000000         mov eax, dword ptr fs:[0]
// 0054c7f0  50                   push eax
// 0054c7f1  64892500000000       mov dword ptr fs:[0], esp
// 0054c7f8  83ec08               sub esp, 8
// 0054c7fb  53                   push ebx
// 0054c7fc  56                   push esi
// 0054c7fd  8bf1                 mov esi, ecx
// 0054c7ff  57                   push edi
// 0054c800  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054c803  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054c806  c7069c797a00         mov dword ptr [esi], 0x7a799c
// 0054c80c  b001                 mov al, 1
// 0054c80e  844654               test byte ptr [esi + 0x54], al
// 0054c811  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054c818  8845fc               mov byte ptr [ebp - 4], al
// 0054c81b  741c                 je 0x54c839
// 0054c81d  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0054c820  c1e904               shr ecx, 4
// 0054c823  84c8                 test al, cl
// 0054c825  7412                 je 0x54c839
// 0054c827  8bce                 mov ecx, esi
// 0054c829  e802e6ffff           call 0x54ae30
// 0054c82e  eb09                 jmp 0x54c839

struct UString_sink_stream_buffer
{
    char pad[0x54];
    unsigned int flags;
    void destroy();
    UString_sink_stream_buffer();
};

void UString_sink_stream_buffer::destroy()
{
    extern void sub_0054AE30(UString_sink_stream_buffer*);
    sub_0054AE30(this);
}

UString_sink_stream_buffer::UString_sink_stream_buffer()
{
    *(int*)this = 0x7a799c;
    unsigned char al = 1;
    if ((*(unsigned char*)((char*)this + 0x54) & al) != 0)
    {
        unsigned int ecx = *(unsigned int*)((char*)this + 0x54);
        ecx >>= 4;
        if ((al & (unsigned char)ecx) != 0)
        {
            destroy();
        }
    }
}
