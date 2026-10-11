// from server: 67% by atomic.potato
struct streambuf
{
    int sputn(const char* s, int n);
};

int write_all(streambuf* sb, const char* data, int len)
{
    int written = 0;
    while (written < 1)
    {
        int n = sb->sputn(data + written, 1 - written);
        written += n;
    }
    return written == 1;
}
