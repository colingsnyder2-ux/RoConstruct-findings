// from server: 80% by atomic.potato
struct CXTIconHandle
{
    void* f(void* value);
};

void* CXTIconHandle::f(void* value)
{
    *(void**)((char*)this + 4) = value;
    *(unsigned long*)this = 0x00ae043c;
    *(unsigned long*)((char*)this + 0x14) = 2;
    *(unsigned long*)((char*)this + 0x0c) = 0;
    *(unsigned long*)((char*)this + 0x10) = 0;
    *(unsigned short*)((char*)this + 0x18) = 0;
    *(unsigned short*)((char*)this + 0x1a) = 0;
    *(void**)((char*)this + 8) = this;
    return this;
}
