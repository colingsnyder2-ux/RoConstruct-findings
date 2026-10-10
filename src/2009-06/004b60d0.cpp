// from server: 74% by colin
extern "C" void __cdecl helper_4b4cf0(int, int, int, int);

void __cdecl func_4b60d0(char* begin, char* end)
{
    int diff = (int)(end - begin);
    int half = diff / 2;
    while (half > 0)
    {
        unsigned char b = ((unsigned char*)begin)[half - 1];
        --half;
        helper_4b4cf0((int)begin, half, diff, (int)b);
    }
}
