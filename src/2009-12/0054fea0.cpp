// from server: 83% by atomic.potato
extern "C" int __cdecl fputs(const char *, void *);

struct FilePacketLogger
{
    void f(const char *);
    char reserved[0x20c];
    int field_20c;
};

void FilePacketLogger::f(const char *value)
{
    if (field_20c)
    {
        fputs(value, reinterpret_cast<void *>(field_20c));
        fputs(reinterpret_cast<const char *>(0x9ad81c),
              reinterpret_cast<void *>(field_20c));
    }
}
