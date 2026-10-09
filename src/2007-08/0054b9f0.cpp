// from server: 50% by colin
// roc 2007-08 0054b9f0  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b9f0
//
// 0054b9f0  6aff                 push -1
// 0054b9f2  6838247500           push 0x752438
// 0054b9f7  64a100000000         mov eax, dword ptr fs:[0]
// 0054b9fd  50                   push eax
// 0054b9fe  64892500000000       mov dword ptr fs:[0], esp
// 0054ba05  51                   push ecx
// 0054ba06  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054ba0a  56                   push esi
// 0054ba0b  57                   push edi
// 0054ba0c  8bf1                 mov esi, ecx
// 0054ba0e  50                   push eax
// 0054ba0f  8974240c             mov dword ptr [esp + 0xc], esi
// 0054ba13  e818f6ffff           call 0x54b030
// 0054ba18  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0054ba1c  6a00                 push 0
// 0054ba1e  57                   push edi
// 0054ba1f  8d4c2428             lea ecx, [esp + 0x28]
// 0054ba23  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0054ba2b  ff1518e67700         call dword ptr [0x77e618]
// 0054ba31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054ba35  897e18               mov dword ptr [esi + 0x18], edi
// 0054ba38  894614               mov dword ptr [esi + 0x14], eax
// 0054ba3b  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0054ba42  5f                   pop edi
// 0054ba43  8bc6                 mov eax, esi
// 0054ba45  5e                   pop esi
// 0054ba46  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ba4d  83c410               add esp, 0x10
// 0054ba50  c20800               ret 8

struct UString_sink_stream_buffer
{
    char pad0[0x14];
    void* field14;
    int field18;
    char pad1[8];
    int field24;

    UString_sink_stream_buffer* construct(void* a, int b);
};

extern "C" void* __stdcall sub_0054B030(void* a, int b);
extern "C" void* __stdcall sub_0077E618(void* a, int b, void* c);

UString_sink_stream_buffer* UString_sink_stream_buffer::construct(void* a, int b)
{
    sub_0054B030(a, b);
    void* p = sub_0077E618(0, b, 0);
    this->field18 = b;
    this->field14 = p;
    this->field24 = 0;
    return this;
}
