// from server: 67% by atomic.potato
struct StreamBuf
{
    int sputn(const char* s, int n);
};

int write_all(StreamBuf* sb, const char* data, int len)
{
    int total = 0;
    while (total < 1)
    {
        int n = sb->sputn(data + total, 1 - total);
        total += n;
    }
    return total == 1;
}
