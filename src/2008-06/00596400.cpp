// from server: 88% by king_originala
struct String;
extern void (__thiscall *copy_string)(String*, const String*);

struct String {
    unsigned char storage[28];
    String(const String&);
};

inline String::String(const String& source)
{
    copy_string(this, &source);
}

struct Context {
    unsigned char reserved[32];
    String text;
    unsigned int padding;
    unsigned int value;
};

struct Worker {
    void (__cdecl *function)(Context*, String, unsigned int);
    unsigned int reserved;
    Context context;
};

void __cdecl invoke(Worker** argument)
{
    Worker* worker = *argument;
    Context* context = &worker->context;
    worker->function(context, context->text, context->value);
}
