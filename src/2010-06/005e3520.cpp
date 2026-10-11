// from server: 65% by atomic.potato
extern "C" void basic_string_ctor(void*, const char*);
extern "C" void sub_005e3300(void*, void*);

struct VModelInstance
{
    int FilteredSelection(void*);
};

int VModelInstance::FilteredSelection(void* p)
{
    char buffer[28];
    basic_string_ctor(buffer, "FollowCamera");
    sub_005e3300(this, buffer);
    *(void**)this = (void*)0x00a2e4e0;
    return (int)this;
}
