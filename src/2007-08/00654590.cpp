// from server: 94% by colin
struct CNameItem {
    int findIndex(int x, int y);
};

extern "C" int __stdcall PtInRect(const void* rect, int x, int y);

int CNameItem::findIndex(int x, int y)
{
    int count = (*(int (__thiscall**)(CNameItem*))(*(int*)this + 0xb4))(this);
    int i = 0;
    if (count > 0) {
        do {
            int (__thiscall* getItem)(CNameItem*, int) = *(int (__thiscall**)(CNameItem*, int))(*(int*)this + 0xb8);
            void* item = (void*)getItem(this, i);
            if (PtInRect((char*)item + 0x20, x, y))
                return i;
            i++;
        } while (i < count);
    }
    return -1;
}
