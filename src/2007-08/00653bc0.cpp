// from server: 81% by tester
struct CNameItem
{
    int Compare(CNameItem* other, int arg);
};

extern "C" int __stdcall sub_77DCD0(void*);

int CNameItem::Compare(CNameItem* other, int arg)
{
    int v = *(int*)((char*)this + 0x58);
    if (v != -1)
    {
        return v - *(int*)((char*)other + 0x58);
    }

    if (!sub_77DCD0((char*)this + 0x5c))
    {
        int edx = *(int*)((char*)this + 0x4c);
        int ecx = *(int*)(edx + 0x50);
        int eax = *(int*)ecx;
        int fn = *(int*)(eax + 0x5c);
        return ((int (__thiscall*)(void*, void*, void*))fn)((void*)ecx, (char*)this + 0x5c, (char*)other + 0x5c);
    }

    int r = ((int (__thiscall*)(CNameItem*, int))*(void**)(*(int*)this + 0x78))(this, arg);
    if (r > 0)
    {
        int r2 = ((int (__thiscall*)(CNameItem*, int))*(void**)(*(int*)other + 0x78))(other, arg);
        return r - r2;
    }
    return ((int (__thiscall*)(CNameItem*, int, int))*(void**)(*(int*)this + 0x80))(this, arg, *(int*)((char*)other + 0x58));
}
