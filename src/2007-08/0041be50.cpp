// from server: 42% by colin
extern "C" int __cdecl func_0052c940(int, int);

int g_8bb460;
int g_8bb45c;

void func_0041be50()
{
    if ((g_8bb460 & 1) == 0) {
        g_8bb460 |= 1;
        g_8bb45c = func_0052c940(-1, 0x89fe94);
    }
}
