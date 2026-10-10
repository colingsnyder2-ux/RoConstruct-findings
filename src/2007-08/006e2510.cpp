// from server: 82% by colin
struct CXTPDockingPaneTabbedContainer
{
    int func_0068f5e0();
    int func_006e2400(void*);
    int func_006e23e0(void*);
    int func_006e2510(void*);
};

int CXTPDockingPaneTabbedContainer::func_006e2510(void* p)
{
    int type = *(int*)((char*)p + 0x14);

    if (type == 0x24f1)
    {
        CXTPDockingPaneTabbedContainer* c = *(CXTPDockingPaneTabbedContainer**)((char*)this + 0x14c);
        if (c != 0)
        {
            if ((c->func_0068f5e0() & 1) != 0)
                return 1;
        }
        return 0;
    }

    if (type == 0x24f0)
    {
        CXTPDockingPaneTabbedContainer* c = *(CXTPDockingPaneTabbedContainer**)((char*)this + 0x14c);
        if (c == 0)
            return 0;
        if ((c->func_0068f5e0() & 2) != 0)
            return 0;
        if ((*(unsigned char*)((char*)p + 0x20) & 1) == 0)
            return 0;
        return 1;
    }

    if (type == 0x24f2)
    {
        return func_006e2400(p);
    }

    if (type == 0x24f3)
    {
        return func_006e23e0(p);
    }

    if (type == 0x24f4)
    {
        CXTPDockingPaneTabbedContainer* c = *(CXTPDockingPaneTabbedContainer**)((char*)this + 0x14c);
        if (c == 0)
            return 0;
        if ((c->func_0068f5e0() & 0x10) == 0)
            return 0;
    }

    return 1;
}
