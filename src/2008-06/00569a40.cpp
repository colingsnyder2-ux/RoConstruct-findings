// from server: 65% by colin
struct StandardOut {
    char pad[0x20];
    char* buffer;
    char pad2[0xC];
    int flag30;
    int length34;
    int method(int, const char*, int);
};

extern int g_946274;

extern "C" int __cdecl func_5f9c30(int, int, const char*, int, int);
extern "C" int __cdecl func_5f8b60(int, int, const char*, int, int);

int StandardOut::method(int a, const char* b, int c)
{
    if (flag30 == 0) {
        if (g_946274 == 0) {
            return func_5f9c30(1, a, b, 0, c);
        }
        if (g_946274 == 1) {
            return func_5f8b60(1, a, b, 0, c);
        }
        return 0;
    }

    char* p;
    if (length34 < 0x10)
        p = (char*)this + 0x20;
    else
        p = buffer;

    if (g_946274 == 0) {
        return func_5f9c30(1, (int)p, b, c, 0);
    }
    if (g_946274 == 1) {
        return func_5f8b60(1, (int)p, b, c, 0);
    }
    return 0;
}
