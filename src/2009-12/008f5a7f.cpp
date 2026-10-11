// from server: 55% by atomic.potato
struct CXTIconHandle
{
    int set(void* value);
};

int CXTIconHandle::set(void* value)
{
    *(void**)((char*)this + 4) = value;
    *(void**)this = (void*)0xA0FCEC;
    *(int*)((char*)this + 0x14) = 2;
    *(int*)((char*)this + 0x0C) = 0;
    *(int*)((char*)this + 0x10) = 0;
    *(unsigned short*)((char*)this + 0x18) = 0;
    *(unsigned short*)((char*)this + 0x1A) = 0;
    *(void**)((char*)this + 8) = this;
    return 0;
}
