// from server: 98% by king_originala
namespace std {
    class exception {
        const char* message;
        int owned;
    public:
        exception(const char*);
        virtual ~exception();
        virtual const char* what() const;
    };

    class bad_cast : public exception {
    public:
        bad_cast(const char*);
        virtual ~bad_cast();
    };
}

struct Resource {
    virtual ~Resource();
    virtual void reserved() = 0;
    virtual Resource* clone() = 0;
};

#pragma optimize("g", off)
__forceinline Resource* cloneResource(Resource* resource)
{
    if (resource)
        return resource->clone();
    return 0;
}
#pragma optimize("g", on)

struct Value {
    unsigned long value;
    Resource* resource;

    Value(const Value& other);
    ~Value();
};

__forceinline Value::Value(const Value& other)
    : value(other.value), resource(cloneResource(other.resource))
{
}

__forceinline Value::~Value()
{
    if (resource)
        delete resource;
}

struct Arguments {
    virtual void reserved() = 0;
    virtual void read(int index, Value* value) = 0;
};

struct DescribedBase {
    virtual ~DescribedBase();
};

struct Humanoid : DescribedBase {};

struct S {
    char padding[68];
    Value first;
    Value second;

    void invoke(DescribedBase* object, Arguments* arguments);
    void execute(Humanoid* object, void* context, Value* first, Value* second);
};

void S::invoke(DescribedBase* object, Arguments* arguments)
{
    Value a(first);
    arguments->read(1, &a);

    Value b(second);
    arguments->read(2, &b);

    Humanoid* humanoid = dynamic_cast<Humanoid*>(object);
    if (!humanoid)
        throw std::bad_cast("bad cast");

    execute(humanoid, reinterpret_cast<char*>(arguments) + 4, &a, &b);
}
