// from server: 63% by colin
struct CXTPDockingPaneSplitterContainer;

struct CXTPDockingPaneSplitterContainer {
    void RemoveAllPanes();
};

void CXTPDockingPaneSplitterContainer::RemoveAllPanes()
{
    if (*(int*)((char*)this + 0x94) != 0)
        return;
    if (*(int*)(*(int*)((char*)this + 0x2c) + 0x80) != 0)
        return;

    if (*(int*)((char*)this + 0x80) != 0)
    {
        char* p = (char*)this + 0x74;
        while (*(int*)((char*)this + 0x80) != 0)
        {
            int* obj = (int*)(*(int (__thiscall*)(char*))0x6e4440)(p);
            if (obj != 0)
            {
                (*(void (__thiscall**)(int*, int))(*(int*)obj + 4))(obj, 1);
            }
        }
    }

    if (*(int*)((char*)this + 0x64) <= 1)
        return;

    char* p2 = (char*)this + 0x20;
    int* first = (int*)(*(int (__thiscall*)(char*))0x65e560)(p2);
    if (first == 0)
        return;

    int* cur = first;
    int* next = 0;
    while (true)
    {
        int* item = (int*)(*(int (__thiscall*)(char*, int**))0x71fa60)(p2, &next);
        if ((*(int (__thiscall**)(int*))(*(int*)item + 0x14))(item) != 0)
        {
            if (next == 0)
                return;
            cur = next;
            continue;
        }
        if (next == 0)
            return;
        break;
    }

    while (true)
    {
        int* item = (int*)(*(int (__thiscall*)(char*, int**))0x71fa60)(p2, &next);
        if ((*(int (__thiscall**)(int*))(*(int*)item + 0x14))(item) == 0)
        {
            int* parent = (int*)(*(int (__thiscall**)(CXTPDockingPaneSplitterContainer*))(*(int*)this + 0x58))(this);
            (*(void (__thiscall*)(int*, CXTPDockingPaneSplitterContainer*, int*, int*))0x6e38d0)(parent, this, cur, item);
            (*(void (__thiscall*)(char*, int*))0x6e4770)((char*)this + 0x74, parent);
            cur = item;
        }
        if (next == 0)
            return;
    }
}
