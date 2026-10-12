// from server: 86% by king_originala
typedef unsigned long DWORD;

struct VersionInfo {
    DWORD size, major, minor, build, platform;
    char description[128];
};

extern "C" int __stdcall GetVersionExA(VersionInfo *);
extern "C" void * __cdecl memset(void *, int, unsigned int);

struct String;

extern void (__thiscall *stringDefault)(String *);
extern void (__thiscall *stringText)(String *, const char *);
extern void (__thiscall *stringCopy)(String *, const String &);
extern void (__thiscall *stringDestroy)(String *);
extern String &(__thiscall *stringAssign)(String *, const char *);
extern String &(__thiscall *stringAppendText)(String *, const char *);
extern String &(__thiscall *stringAppendString)(String *, const String &);
extern const char *(__thiscall *stringData)(const String *);

struct String {
    unsigned char storage[28];
    String();
    String(const char *);
    String(const String &);
    ~String();
    String &operator=(const char *);
    String &operator+=(const char *);
    String &operator+=(const String &);
    const char *c_str() const;
};

inline String::String() { stringDefault(this); }
inline String::String(const char *s) { stringText(this, s); }
inline String::String(const String &s) { stringCopy(this, s); }
inline String::~String() { stringDestroy(this); }
inline String &String::operator=(const char *s) { return stringAssign(this, s); }
inline String &String::operator+=(const char *s) { return stringAppendText(this, s); }
inline String &String::operator+=(const String &s) { return stringAppendString(this, s); }
inline const char *String::c_str() const { return stringData(this); }

struct Request {
    unsigned char storage[28];
    String headers;
    Request(const char *);
    ~Request();
    void execute(String *);
};

extern DWORD versionInitialized;
extern bool supportedVersion;

struct Creator {
    String create(const char *, const char *);
};

String Creator::create(const char *address, const char *suggestion)
{
    try {
        if (!(versionInitialized & 1)) {
            versionInitialized |= 1;
            VersionInfo version;
            memset(&version.major, 0, 0x90);
            version.size = 0x94;
            GetVersionExA(&version);
            supportedVersion = version.major >= 6;
        }

        if (!supportedVersion)
            return String("");

        String result;
        {
            String url(address);
            if (suggestion) {
                url += "?suggest=";
                url += suggestion;
            }
            Request request(url.c_str());
            request.headers = "RBXAuthenticationNegotiation:";
            request.headers += *reinterpret_cast<const String *>(this);
            request.headers += "\r\n";
            request.execute(&result);
        }
        return String(result);
    }
    catch (...) {
        return String("");
    }
}
