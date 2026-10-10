// from server: 49% by colin
// roc 2007-08 0041f860  unit: CEnabledCmdUI  size: 400 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f860

extern "C" {
    __declspec(dllimport) int __stdcall GetMenuItemCount(void*);
    __declspec(dllimport) unsigned int __stdcall GetMenuItemID(void*, int);
    __declspec(dllimport) void* __stdcall GetSubMenu(void*, int);
    __declspec(dllimport) int __stdcall EnableMenuItem(void*, unsigned int, unsigned int);
    __declspec(dllimport) int __stdcall GetClientRect(void*, int*);
    __declspec(dllimport) int __stdcall ClientToScreen(void*, int*);
}

extern "C" void* __cdecl sub_6302F8(void*);
extern "C" void __cdecl sub_630484(void*);
extern "C" void* __cdecl sub_6303D0();
extern "C" void __cdecl sub_634430(void*, int, int, int, void*, int);
extern "C" void* __cdecl sub_62FF50();

struct CEnabledCmdUI {
    char pad[0x20];
    void* hwnd;      // +0x20
    char pad2[0xa0];
    void* hmenu;     // +0xc4
    int method(int, int);
};

int CEnabledCmdUI::method(int a, int b) {
    void* menu = this->hmenu;
    void* sub = sub_6302F8(GetSubMenu(menu, 0));
    if (sub != 0) {
        return 0;
    }
    int count = GetMenuItemCount(*(void**)((char*)sub + 4));
    int i = 0;
    if (count > 0) {
        do {
            int id;
            sub_630484(&id);
            id = 0x788368;
            int mid = GetMenuItemID(*(void**)((char*)sub + 4), i);
            if (mid != 0) {
                if (mid == -1) {
                    sub_6302F8(GetSubMenu(*(void**)((char*)sub + 4), i));
                } else {
                    void* p = sub_6303D0();
                    void* q;
                    if (p != 0) {
                        q = (*(void*(**)(void*))(*(void***)p + 0x7c))(p);
                    } else {
                        q = 0;
                    }
                    (*(void(**)(void*, int, int*, int))(*(void***)q + 0x14))(q, -1, &id, 0);
                    int flag = (id != 0) ? 2 : 0;
                    flag |= 0x400;
                    EnableMenuItem(*(void**)((char*)sub + 4), i, flag);
                }
            }
            i++;
        } while (i < GetMenuItemCount(*(void**)((char*)sub + 4)));
    }
    if (a == -1 && b == -1) {
        int rc[4];
        GetClientRect(this->hwnd, rc);
        int cx = (rc[0] + rc[2]) / 2;
        int cy = (rc[1] + rc[3]) / 2;
        ClientToScreen(this->hwnd, &cx);
        sub_634430(sub, 0x14, cx, cy, sub_62FF50(), 0);
    } else {
        sub_634430(sub, 0, a, b, sub_62FF50(), 0);
    }
    return 0;
}
