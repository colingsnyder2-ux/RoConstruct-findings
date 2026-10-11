// from server: 83% by atomic.potato
extern "C" int __cdecl fputs(const char *, void *);

struct FilePacketLogger
{
    void Log(const char *);
    char padding[0x20c];
    void *m_file;
};

void FilePacketLogger::Log(const char *text)
{
    if (m_file)
    {
        fputs(text, m_file);
        fputs("Sound", m_file);
    }
}
