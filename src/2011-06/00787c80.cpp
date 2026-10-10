// from server: 56% by atomic.potato
extern "C" void* __cdecl sub_00787C80(void*, const char*);

struct StudsTool
{
    StudsTool(const char*);
};

StudsTool::StudsTool(const char* value)
{
    sub_00787C80(this, value);
}
