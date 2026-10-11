// from server: 56% by atomic.potato
extern "C" void ConstructString(void*, const char*);
extern "C" void Initialize(void*);

struct S
{
    int f(const char*);
};

int S::f(const char* value)
{
    char buffer[28];
    ConstructString(buffer, "FollowCamera");
    Initialize(this);
    *(void**)this = (void*)0x9cfe30;
    return (int)this;
}
