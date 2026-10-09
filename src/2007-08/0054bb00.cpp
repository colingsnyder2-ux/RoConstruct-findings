// from server: 42% by colin
// roc 2007-08 0054bb00  unit: UString_sink::?$stream_buffer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bb00
//
// 0054bb00  6aff                 push -1
// 0054bb02  68d3247500           push 0x7524d3
// 0054bb07  64a100000000         mov eax, dword ptr fs:[0]
// 0054bb0d  50                   push eax
// 0054bb0e  64892500000000       mov dword ptr fs:[0], esp
// 0054bb15  83ec08               sub esp, 8
// 0054bb18  56                   push esi
// 0054bb19  8bf1                 mov esi, ecx
// 0054bb1b  89742408             mov dword ptr [esp + 8], esi
// 0054bb1f  8b4648               mov eax, dword ptr [esi + 0x48]
// 0054bb22  85c0                 test eax, eax
// 0054bb24  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0054bb2c  740f                 je 0x54bb3d
// 0054bb2e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0054bb31  51                   push ecx
// 0054bb32  50                   push eax
// 0054bb33  8d4c240f             lea ecx, [esp + 0xf]
// 0054bb37  ff1510e67700         call dword ptr [0x77e610]
// 0054bb3d  807e4100             cmp byte ptr [esi + 0x41], 0
// 0054bb41  7404                 je 0x54bb47
// 0054bb43  c6464100             mov byte ptr [esi + 0x41], 0
// 0054bb47  8bce                 mov ecx, esi
// 0054bb49  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054bb51  ff151ce57700         call dword ptr [0x77e51c]
// 0054bb57  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054bb5b  5e                   pop esi
// 0054bb5c  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bb63  83c414               add esp, 0x14
// 0054bb66  c3                   ret 

struct UString_sink_stream_buffer
{
    char pad_0000[0x41];
    char field_0041;
    char pad_0042[0x06];
    char* field_0048;
    unsigned int field_004c;
    void destructor();
};

extern "C" void __stdcall MSVCP80_deallocate(void*, char*, unsigned int);
extern "C" void __stdcall MSVCP80_basic_streambuf_dtor(void*);

void UString_sink_stream_buffer::destructor()
{
    if (field_0048 != 0)
    {
        MSVCP80_deallocate((void*)((char*)this + 0x0c), field_0048, field_004c);
    }
    if (field_0041 != 0)
    {
        field_0041 = 0;
    }
    MSVCP80_basic_streambuf_dtor(this);
}
