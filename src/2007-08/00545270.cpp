// from server: 75% by tester
extern "C" __declspec(dllimport) void* __stdcall FindResourceExA(void*, unsigned short, unsigned short, unsigned short);

extern "C" void* __stdcall sub_724FA3(unsigned int, unsigned int);

void* __stdcall sub_545200(void* a, unsigned int b, unsigned int c);

void* __cdecl sub_545270(unsigned int a, unsigned int b)
{
    unsigned int i = 0;
    void* result = 0;
    void* h = sub_724FA3(0x8c9824, 0);
    unsigned int n = 1;
    while (h != 0)
    {
        if (i != 0)
            break;
        unsigned short count = (unsigned short)((a >> 4) + 1);
        void* r = FindResourceExA(h, 6, count, b);
        if (r != 0)
        {
            i = (unsigned int)sub_545200(h, (unsigned int)r, a);
            if (i != 0)
            {
                result = h;
                break;
            }
        }
        h = sub_724FA3(0x8c9824, n);
        n++;
    }
    return result;
}
