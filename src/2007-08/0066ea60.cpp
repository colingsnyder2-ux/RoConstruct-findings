// from server: 77% by colin
// roc 2007-08 0066ea60  unit: CXTPDockingPaneManager  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ea60

struct CXTPDockingPane;

struct CXTPDockingPaneManager {
    char pad[0xd0];
    int field_d0;
    char pad2[0x140 - 0xd4];
    int field_140;
    void RemovePane(CXTPDockingPane* pane, int b);
};

struct CXTPDockingPane {
    char pad[0x30];
    void* field_30;
    void SetVisible(int b);
};

struct CXTPDockingPaneList {
    void* field_0;
    void* field_4;
};

extern "C" CXTPDockingPaneList* __fastcall sub_66e160();
extern "C" void __fastcall sub_6e2bd0(void* ecx, CXTPDockingPane* pane, int b);
extern "C" void __fastcall sub_6e0c30(void* ecx, int b);
extern "C" void __fastcall sub_68f230(CXTPDockingPane* ecx, int b);

void CXTPDockingPaneManager::RemovePane(CXTPDockingPane* pane, int b)
{
    if (pane == 0)
        return;
    if (this->field_d0 == 0)
        return;
    if (pane->field_30 == 0) {
        CXTPDockingPaneList* list = sub_66e160();
        void* node = list->field_4;
        if (node != 0) {
            do {
                void* cur = node;
                node = *(void**)node;
                if (*(CXTPDockingPane**)((char*)cur + 8) == pane) {
                    void* p = *(void**)((char*)cur + 0x14);
                    if (p != 0) {
                        sub_6e2bd0((char*)p - 0x54, pane, b);
                    }
                }
            } while (node != 0);
        }
    } else {
        void* obj = (char*)pane->field_30 - 0x54;
        void** vtbl = *(void***)obj;
        void (*fn)(void*, CXTPDockingPane*, int, int) = (void (*)(void*, CXTPDockingPane*, int, int))vtbl[0x13c/4];
        fn(obj, pane, b, 1);
        void* p = pane->field_30;
        void* ecx;
        if (p != 0)
            ecx = (char*)p - 0x54;
        else
            ecx = 0;
        sub_6e0c30(ecx, b);
    }
    if (this->field_140 != 0) {
        sub_68f230(pane, 1);
    }
    if (b != 0) {
        void** vtbl = *(void***)pane;
        void (*fn)(CXTPDockingPane*) = (void (*)(CXTPDockingPane*))vtbl[0x58/4];
        fn(pane);
    }
}
