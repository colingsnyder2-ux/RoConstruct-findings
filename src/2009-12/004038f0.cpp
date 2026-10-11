// from server: 42% by atomic.potato
extern "C" void* __cdecl sub_6322E0(const char*);

static int g_b79570;
static void* g_b7956C;

void __cdecl sub_4038F0()
{
    if (!(g_b79570 & 1))
    {
        g_b79570 |= 1;
        g_b7956C = sub_6322E0("RenderSettings");
    }
}
