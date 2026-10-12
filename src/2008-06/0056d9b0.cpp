// from server: 96% by king_originala
struct type_info {};

extern bool (__thiscall* typeEqual)(const type_info*, const type_info&);

struct String
{
    unsigned int allocator;
    union
    {
        char local[16];
        char* heap;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
};

struct Name
{
    unsigned int unused;
    String text;
};

struct Descriptor
{
    unsigned int unused[2];
    const type_info* type;
    Name* name;
};

struct Placeholder
{
    virtual ~Placeholder();
    virtual const type_info& type() const;
};

struct Frame
{
    char data[48];
    Frame();
};

struct Any
{
    Placeholder* content;
    void assign(const Frame&);
};

struct RuntimeError
{
    char data[36];
    RuntimeError(const String&);
    RuntimeError(const RuntimeError&);
    ~RuntimeError();
};

extern const type_info emptyType;
extern const type_info frameType;
extern const type_info stringType;

extern Descriptor* __cdecl frameDescriptor();
extern const String* __cdecl stringCast(const Any*);
extern bool __cdecl parseFrame(const String*, Frame&);
extern void __cdecl finishAssignment(Any*);
extern String __cdecl format(const char*, ...);

struct Holder
{
    Descriptor* descriptor;
    Any value;

    void convert();
};

void Holder::convert()
{
    bool (__thiscall* equal)(const type_info*, const type_info&) = typeEqual;
    Any* source = &value;
    if (source)
    {
        const type_info& type =
            source->content ? source->content->type() : emptyType;
        if (equal(&type, frameType))
        {
            Frame* result = reinterpret_cast<Frame*>(
                reinterpret_cast<char*>(source->content) + 4);
            if (result)
                return;
        }
    }

    if (equal(&stringType, *descriptor->type))
    {
        Frame frame;
        if (parseFrame(stringCast(source), frame))
        {
            source->assign(frame);
            descriptor = frameDescriptor();
            finishAssignment(source);
            return;
        }
    }

    const Name* destination = frameDescriptor()->name;
    const char* destinationName = destination->text.capacity >= 16
        ? destination->text.storage.heap
        : destination->text.storage.local;

    const String& original = descriptor->name->text;
    const char* originalName = original.capacity >= 16
        ? original.storage.heap : original.storage.local;

    throw RuntimeError(format("Unable to cast %s to %s",
                              originalName, destinationName));
}
