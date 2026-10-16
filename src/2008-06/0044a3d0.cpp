// from server: 80% by colin
struct StreamBuffer {};
struct BasicIOS {};
struct OutputStream : virtual BasicIOS {};

extern bool (__cdecl *uncaught_exception)();
extern void (__thiscall *output_suffix)(OutputStream *);
extern StreamBuffer *(__thiscall *get_buffer)(const BasicIOS *);
extern void (__thiscall *unlock_buffer)(StreamBuffer *);

struct SentryBase
{
    OutputStream *stream;
    ~SentryBase();
};

struct Sentry : SentryBase
{
    ~Sentry();
};

SentryBase::~SentryBase()
{
    StreamBuffer *buf = get_buffer(static_cast<BasicIOS *>(stream));
    if (buf)
        unlock_buffer(buf);
}

Sentry::~Sentry()
{
    if (!uncaught_exception())
        output_suffix(stream);
}
