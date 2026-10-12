// from server: 82% by king_originala
extern "C" {
    extern void* (__cdecl *iob_func)();
    extern int (__cdecl *print_error)(void*, const char*, ...);
    __declspec(noreturn) void __cdecl longjmp(void*, int);
}

void __cdecl error(void* context, const char* message)
{
    char number[20];
    int i;

    if (message[0] == '#') {
        for (i = 0; i < 15; ++i) {
            number[i] = message[i + 1];
            if (message[i] == ' ')
                break;
        }

        if ((unsigned int)(i - 2) <= 12) {
            number[i - 1] = 0;
            print_error((char*)iob_func() + 64,
                        "libpng error no. %s: %s", number, message + i);
        } else {
            print_error((char*)iob_func() + 64,
                        "libpng error: %s, offset=%d", message, i);
        }
    } else {
        print_error((char*)iob_func() + 64,
                    "libpng error: %s", message);
    }

    longjmp(context, 1);
}
