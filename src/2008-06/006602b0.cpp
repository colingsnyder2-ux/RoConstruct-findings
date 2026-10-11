// from server: 69% by atomic.potato
struct PartInstance;

struct GetSetImpl
{
    static PartInstance* get(PartInstance* p);
};

struct UnlockedPartByLocalCharacter
{
    int f(PartInstance* p);
};

int UnlockedPartByLocalCharacter::f(PartInstance* p)
{
    if (*(int*)((char*)this + 4) != 0 && *(int*)((char*)this + 0xc) != 0)
    {
        PartInstance* q = GetSetImpl::get(p);
        if (((char (__thiscall*)(void*, void*))0x422ae0)(q, *(void**)((char*)this + 4)))
        {
            char r = ((char (__thiscall*)(void*))0x6601c0)(*(void**)((char*)this + 0xc));
            int v = r != 0 ? 1 : 0;
            if (v != 2)
                return v;
        }
    }
    PartInstance* q = GetSetImpl::get(p);
    return (*(unsigned char*)((char*)q + 0x1f0) != 0) ? 2 : 0;
}
