// from server: 35% by colin
// roc 2007-08 0054d3b0  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d3b0
//
// 0054d3b0  64a100000000         mov eax, dword ptr fs:[0]
// 0054d3b6  6aff                 push -1
// 0054d3b8  68d1267500           push 0x7526d1
// 0054d3bd  50                   push eax
// 0054d3be  64892500000000       mov dword ptr fs:[0], esp
// 0054d3c5  83ec08               sub esp, 8
// 0054d3c8  56                   push esi
// 0054d3c9  8bf1                 mov esi, ecx
// 0054d3cb  807e5800             cmp byte ptr [esi + 0x58], 0
// 0054d3cf  7409                 je 0x54d3da
// 0054d3d1  e88ae5ffff           call 0x54b960
// 0054d3d6  c6465800             mov byte ptr [esi + 0x58], 0
// 0054d3da  89742404             mov dword ptr [esp + 4], esi
// 0054d3de  89742408             mov dword ptr [esp + 8], esi
// 0054d3e2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054d3e6  50                   push eax
// 0054d3e7  8bce                 mov ecx, esi
// 0054d3e9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0054d3f1  e8eaefffff           call 0x54c3e0
// 0054d3f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054d3fa  c6465801             mov byte ptr [esi + 0x58], 1
// 0054d3fe  5e                   pop esi
// 0054d3ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d406  83c414               add esp, 0x14
// 0054d409  c20400               ret 4

struct UString_sink_stream_buffer
{
    char pad[0x58];
    char flag58;
    void cleanup();
    void construct(void*);
};

void UString_sink_stream_buffer::construct(void* arg)
{
    if (this->flag58)
    {
        this->cleanup();
        this->flag58 = 0;
    }
    this->flag58 = 1;
}
