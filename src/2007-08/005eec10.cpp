// from server: 81% by colin
struct VBodyPosition {
    char pad[0x124];
    VBodyPosition();
};

extern float g_7bf850;
extern float g_7bf83c;
extern float g_797988;
extern void* g_7bf93c;
extern void* g_7bf934;
extern void* g_7bf92c;
extern void* g_7bf91c;
extern void* g_7bf90c;
extern void* g_7bf8fc;
extern void* g_7bf8ec;
extern void* g_7bf8dc;
extern void* g_7bf8cc;
extern void* g_7bf8b4;
extern void* g_7bf8a8;
extern void* g_8af3d8;

extern "C" void __stdcall sub_5ee580(void* p);

VBodyPosition::VBodyPosition()
{
    sub_5ee580(&g_8af3d8);
    *(float*)((char*)this + 0xfc) = g_7bf850;
    *(void**)((char*)this + 0x00) = &g_7bf93c;
    *(void**)((char*)this + 0x04) = &g_7bf934;
    *(void**)((char*)this + 0x10) = &g_7bf92c;
    *(void**)((char*)this + 0x14) = &g_7bf91c;
    *(void**)((char*)this + 0x2c) = &g_7bf90c;
    *(void**)((char*)this + 0x44) = &g_7bf8fc;
    *(void**)((char*)this + 0x5c) = &g_7bf8ec;
    *(void**)((char*)this + 0x74) = &g_7bf8dc;
    *(void**)((char*)this + 0x8c) = &g_7bf8cc;
    *(void**)((char*)this + 0xe8) = &g_7bf8b4;
    *(void**)((char*)this + 0xf0) = &g_7bf8a8;
    *(float*)((char*)this + 0x100) = g_7bf83c;
    *(float*)((char*)this + 0x104) = g_7bf83c;
    *(float*)((char*)this + 0x108) = g_7bf83c;
    *(float*)((char*)this + 0x10c) = 0.0f;
    *(float*)((char*)this + 0x110) = g_797988;
    *(float*)((char*)this + 0x114) = 0.0f;
    *(float*)((char*)this + 0x118) = 0.0f;
    *(float*)((char*)this + 0x11c) = 0.0f;
    *(float*)((char*)this + 0x120) = 0.0f;
}
