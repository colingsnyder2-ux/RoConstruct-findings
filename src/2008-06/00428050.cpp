// from server: 79% by king_originala
struct String
{
    unsigned char data[28];

    String(const char*);
    ~String();
    String& operator+=(const String&);
    String& operator+=(const char*);
    String& erase(unsigned int, unsigned int);
    const char* c_str() const;

    static const unsigned int npos;
};

struct Path
{
    char* data;

    ~Path();
    int GetLength() const;
    char* GetBuffer(int);
    void ReleaseBuffer(int);
    operator const char*() const;
};

struct PathSource
{
    Path getPath();
};

extern "C" unsigned int __cdecl strlen(const char*);
extern "C" int __stdcall PathAppendA(char*, const char*);

struct MainLogManager
{
    unsigned int reserved;
    PathSource source;
    unsigned char padding[43];
    String identifier;

    String getLogPath(const char*);
};

String MainLogManager::getLogPath(const char* suffix)
{
    Path path = source.getPath();
    String name("log_");
    name += identifier;
    name.erase(12, String::npos);
    name.erase(4, 3);
    name += suffix;
    name += ".txt";

    const char* filename = name.c_str();
    unsigned int filenameLength = strlen(filename);
    char* buffer = path.GetBuffer(path.GetLength() + filenameLength + 1);
    PathAppendA(buffer, filename);
    path.ReleaseBuffer(-1);

    return String(static_cast<const char*>(path));
}
