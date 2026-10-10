// from server: 95% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern const TypeInfo global_type_info;

struct VCounter
{
    void* f(void*);
};

void* VCounter::f(void* value)
{
    if (*(const TypeInfo*)value == global_type_info)
        return (char*)this + 16;
    return 0;
}
