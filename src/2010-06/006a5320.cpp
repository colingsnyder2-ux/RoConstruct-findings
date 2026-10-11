// from server: 53% by atomic.potato
extern "C" int __cdecl sub_6a4a40(int, char*);
extern "C" int __cdecl sub_6a4560(char*);
extern "C" int __cdecl sub_7a89b2(char*, const char*);

struct S
{
    void __cdecl f(char* arg);
};

void S::f(char* arg)
{
    char buf[0x34];
    char c;
    if (sub_6a4a40(1, &c) == 1)
    {
        unsigned char v = (unsigned char)c;
        if (v != 0xff && v != 0xfe)
            return;
    }
    sub_6a4560(buf);
    sub_7a89b2(buf, (const char*)0xb37258);
}
