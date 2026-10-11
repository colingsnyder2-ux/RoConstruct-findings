// from server: 25% by atomic.potato
extern "C" void* __cdecl func_006322e0(const char*);

void func_00537810()
{
    if ((*(unsigned char*)0xb8057c & 1) == 0)
    {
        *(unsigned int*)0xb8057c |= 1;
        *(unsigned int*)0xb80578 = (unsigned int)func_006322e0((const char*)0x9de800);
    }
}
