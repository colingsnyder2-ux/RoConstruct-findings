// from server: 46% by atomic.potato
extern "C" void std_string_copy(void* destination, const void* source);

struct TweenService
{
    void* field_204;
    TweenService* f(void* value);
};

TweenService* TweenService::f(void* value)
{
    std_string_copy((char*)this + 0x204, value);
    return this;
}
