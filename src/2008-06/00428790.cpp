// from server: 95% by king_originala
struct Text
{
    char reserved[20];
    unsigned int length;
};

struct Buffer
{
    char reserved[4];

    Buffer();
    ~Buffer() throw();
    const char* c_str() const;
};

extern void (__thiscall* buffer_construct)(Buffer*);
extern void (__thiscall* buffer_destroy)(Buffer*) throw();
extern const char* (__thiscall* buffer_text)(const Buffer*);
extern const char* (__thiscall* text_data)(const Text*);
extern void (__cdecl* format_buffer)(Buffer*, const char*, ...);

extern const char format_with_text[];
extern const char format_without_text[];
extern void __cdecl log_message(int, const char*);

__forceinline Buffer::Buffer()
{
    buffer_construct(this);
}

__forceinline Buffer::~Buffer() throw()
{
    buffer_destroy(this);
}

__forceinline const char* Buffer::c_str() const
{
    return buffer_text(this);
}

bool __cdecl func_00428790(const char* expression, const Text* text,
                          const char* file, int line)
{
    Buffer message;

    if (text->length > 0)
        format_buffer(&message, format_with_text,
                      expression, text_data(text), file, line);
    else
        format_buffer(&message, format_without_text,
                      expression, file, line);

    log_message(1, message.c_str());

    volatile unsigned int* p = 0;
    p[0] = p[1];

    return false;
}
