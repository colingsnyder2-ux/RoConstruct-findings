// from server: 93% by colin
struct streambuf {
    int sgetc();
};

struct Verb {
    char pad0[4];
    streambuf* stream;
    bool cached;
    char value;
    char pad1[2];
    char get();
};

char Verb::get()
{
    if (!cached) {
        if (stream) {
            int c = stream->sgetc();
            if (c != -1) {
                value = (char)c;
                cached = true;
                return value;
            }
        }
        stream = 0;
        cached = true;
    }
    return value;
}
