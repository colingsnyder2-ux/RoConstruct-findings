// from server: 18% by atomic.potato
extern "C" void* __stdcall sub_6322E0(const char*);

void __stdcall sub_409020()
{
    if ((*(unsigned char*)0xB795CC & 1) == 0)
    {
        *(unsigned int*)0xB795CC |= 1;
        *(unsigned int*)0xB795C8 = (unsigned int)sub_6322E0((const char*)0xB06BE4);
    }
}
