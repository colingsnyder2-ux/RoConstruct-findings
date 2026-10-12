// from server: 96% by king_originala
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" int (__cdecl *format_message)(char *, const char *, ...);
extern void __cdecl report(void *, const char *);
extern void * __cdecl allocate(void *, unsigned int);
extern void __cdecl release(void *, void *);

unsigned int __cdecl func_00526a80(void *context, const char *text, char **output)
{
    char message[40];
    int removed = 0;
    unsigned int length;

    *output = 0;
    if (!text || !(length = strlen(text))) {
        report(context, "Zero length keyword");
        return 0;
    }

    *output = (char *)allocate(context, length + 2);
    if (!*output) {
        report(context, "Out of memory while procesing keyword");
        return 0;
    }

    char *destination = *output;
    if (*text) {
        int (__cdecl *formatter)(char *, const char *, ...) = format_message;
        do {
            char c = *text;
            if (c < 32 || (c > 126 && (unsigned char)c < 161)) {
                formatter(message, "invalid keyword character 0x%02X", c);
                report(context, message);
                *destination = ' ';
            } else {
                *destination = c;
            }
            ++text;
            ++destination;
        } while (*text);
    }
    *destination = 0;

    destination = *output + length - 1;
    if (*destination == ' ') {
        report(context, "trailing spaces removed from keyword");
        while (*destination == ' ') {
            *destination = 0;
            --destination;
            --length;
        }
    }

    char *source = *output;
    if (*source == ' ') {
        report(context, "leading spaces removed from keyword");
        while (*source == ' ') {
            ++source;
            --length;
        }
    }

    destination = *output;
    int space = 0;
    while (*source) {
        if (*source == ' ') {
            if (!space) {
                *destination++ = *source;
                space = 1;
            } else {
                --length;
                removed = 1;
            }
        } else {
            *destination++ = *source;
            space = 0;
        }
        ++source;
    }
    *destination = 0;

    if (removed)
        report(context, "extra interior spaces removed from keyword");

    if (!length) {
        release(context, *output);
        *output = 0;
        report(context, "Zero length keyword");
    } else if (length > 79) {
        report(context, "keyword length must be 1 - 79 characters");
        output[79] = 0;
        length = 79;
    }
    return length;
}
