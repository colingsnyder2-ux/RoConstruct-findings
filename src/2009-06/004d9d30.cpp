// from server: 52% by colin
extern "C" unsigned long __stdcall htonl(unsigned long hostlong);

struct GuidItem_Registry {
    bool lookupByGuid(const void* data, void** result);
};

bool GuidItem_Registry::lookupByGuid(const void* data, void** result)
{
    static bool s_initialized = false;
    static bool s_useHtonl = false;

    if (!s_initialized)
    {
        s_initialized = true;
        s_useHtonl = (htonl(0x3039) == 0x3039);
    }

    if (s_useHtonl)
    {
        return this->lookupByGuid(data, result);
    }
    else
    {
        unsigned char buf[4];
        if (this->lookupByGuid(data, (void**)&buf))
        {
            unsigned char* p = *(unsigned char**)result;
            p[0] = buf[1];
            p[1] = buf[0];
            p[2] = buf[3];
            p[3] = buf[2];
            return true;
        }
        return false;
    }
}
