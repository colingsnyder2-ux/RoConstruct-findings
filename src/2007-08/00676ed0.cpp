// from server: 66% by colin
// roc 2007-08 00676ed0  unit: CXTPCustomizeCommandsPage  size: 209 bytes
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD

extern "C" int __stdcall GetMenuItemCount(void*);
extern "C" unsigned int __stdcall GetMenuItemID(void*, int);

struct CXTPCustomizeCommandsPage {
    int OnCommand(int, int, int);
};

struct CXTPControls {
    int GetCount();
    void* GetAt(int);
};

struct CXTPCommandBars {
    void* GetCommandBar(int);
};

struct CXTPCommandBar {
    void* GetControls();
};

struct CXTPControl {
    void* GetCommandBar();
};

struct CXTPCommandBarList {
    int GetCount();
    void* GetAt(int);
};

extern "C" int __stdcall sub_676b70(int, int);
extern "C" void* __stdcall sub_67bf80(void*, int);
extern "C" void* __stdcall sub_6704f0(void*);
extern "C" int __stdcall sub_630202(void*, void*);
extern "C" void __stdcall sub_67c5b0(void*, void*, int, int);
extern "C" void __stdcall sub_62ff20();

int CXTPCustomizeCommandsPage::OnCommand(int a, int b, int c)
{
    int result = sub_676b70(a, -1);
    void* p = (void*)result;
    int count = GetMenuItemCount(*(void**)(b + 4));
    int i = 0;
    if (count > 0) {
        do {
            if (GetMenuItemID(*(void**)(b + 4), i) > 0) {
                void* ctrl = sub_67bf80(p, b);
                void* cmd = sub_6704f0(ctrl);
                void* obj = (void*)sub_630202(cmd, (void*)0);
                if (obj != 0 && c != 0) {
                    void** vt = *(void***)obj;
                    void* (*fn)(void*) = (void* (*)(void*))vt[0x8c/4];
                    void* bar = fn(obj);
                    void* list = *(void**)((char*)bar + 0xf8);
                    int n = *(int*)((char*)list + 0x2c);
                    int j = 0;
                    if (n > 0) {
                        do {
                            void* item;
                            if (j >= 0 && j < n && j < *(int*)((char*)list + 0x2c)) {
                                item = *(void**)(*(int*)((char*)list + 0x28) + j * 4);
                            } else {
                                item = 0;
                            }
                            sub_67c5b0(p, item, -1, 0);
                            n = *(int*)((char*)list + 0x2c);
                            j++;
                        } while (j < n);
                    }
                }
            }
            i++;
        } while (i < count);
    }
    return 1;
}
