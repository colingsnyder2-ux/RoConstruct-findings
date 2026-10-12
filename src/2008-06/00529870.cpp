// from server: 89% by king_originala
struct FILE {
    char data[32];
};

extern "C" FILE* (__cdecl* __iob_func)(void);
extern "C" int (__cdecl* fprintf)(FILE*, const char*, ...);

void __fastcall warning(const char* message)
{
    char number[16];

    if (*message == '#') {
        int offset;
        for (offset = 0; offset < 15; ++offset) {
            number[offset] = message[offset + 1];
            if (message[offset] == ' ')
                break;
        }

        if ((unsigned int)(offset - 2) <= 12) {
            number[offset - 1] = 0;
            fprintf(__iob_func() + 2,
                    "libpng warning no. %s: %s",
                    number, message + offset);
        } else {
            fprintf(__iob_func() + 2, "libpng warning: %s", message);
        }
    } else {
        fprintf(__iob_func() + 2, "libpng warning: %s", message);
    }
}
