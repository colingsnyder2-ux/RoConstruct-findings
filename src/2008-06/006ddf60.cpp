// from server: 85% by colin
// roc 2008-06 006ddf60  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ddf60

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CRobloxTreeCtrl {
    int field0;
    int field4;
    char pad8[0x34 - 8];
    void* field34;
    int SelectItem(void* item);
    int SetItem(void* item);
};

int CRobloxTreeCtrl::SetItem(void* item) {
    int old = this->field4;
    this->field4 = (int)item;
    if (item == 0) {
        void* hwnd = *(void**)((char*)this->field34 + 0x20);
        void* result = (void*)SendMessageA(hwnd, 0x110a, 9, 0);
        void* sel = result;
        if (sel != 0) {
            if (!((int (__thiscall*)(void*, void*, int))0x7bc31c)(this->field34, sel, 2)) {
                sel = 0;
            }
        }
        ((void (__thiscall*)(CRobloxTreeCtrl*, void*, int))((*(int**)this)[0x50/4]))(this, sel, 0);
        if (sel != 0) {
            this->SelectItem(sel);
        }
    }
    return old;
}
