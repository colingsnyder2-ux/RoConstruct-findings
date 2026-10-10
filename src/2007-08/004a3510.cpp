// from server: 76% by colin
struct BoundFuncDesc {
    int field0;
    unsigned short field4;
    const char* f(char flag);
};

extern "C" char* __stdcall inet_ntoa(unsigned int addr);
extern "C" char* __cdecl _itoa(int value, char* buffer, int radix);

char g_buffer[64];
unsigned short g_word;

const char* BoundFuncDesc::f(char flag) {
    char* p = inet_ntoa((unsigned int)field0);
    char* dst = g_buffer;
    char c;
    do {
        c = *p;
        *dst = c;
        p++;
        dst++;
    } while (c != 0);

    if (flag != 0) {
        char* end = g_buffer - 1;
        char a;
        do {
            a = end[1];
            end++;
        } while (a != 0);
        *(unsigned short*)end = g_word;

        char* q = g_buffer;
        char* start = q + 1;
        char d;
        do {
            d = *q;
            q++;
        } while (d != 0);
        int len = (int)(q - start);

        _itoa((int)field4, g_buffer + len, 10);
    }

    return g_buffer;
}
