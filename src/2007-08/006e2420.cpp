// from server: 48% by colin
struct CXTPDockingPaneCaptionButton;

struct CXTPDockingPaneTabbedContainer {
    char pad[0x54];
    int field_54;
    char pad2[0x64 - 0x58];
    int field_64;
    char pad3[0x1c0 - 0x68];
    int field_1c0;

    CXTPDockingPaneCaptionButton* GetPinButton();
};

struct CXTPDockingPaneBase {
    char pad[0x18];
    int field_18;
};

struct CXTPDockingPaneCaptionButtonContainer {
    char pad[0xf0];
    int field_f0;
};

extern "C" void __stdcall sub_66f110(int);
extern "C" void __stdcall sub_66f140(int);
extern "C" CXTPDockingPaneCaptionButtonContainer* __stdcall sub_6e0540(int);
extern "C" void __stdcall sub_6e4f00(int, int, int);

CXTPDockingPaneCaptionButton* CXTPDockingPaneTabbedContainer::GetPinButton()
{
    if (field_1c0 != 0)
        return 0;

    CXTPDockingPaneBase* pPane = (CXTPDockingPaneBase*)field_64;
    if (pPane == 0)
        return 0;
    if (pPane->field_18 != 2)
        return 0;

    CXTPDockingPaneCaptionButtonContainer* pContainer = sub_6e0540((int)(this->pad + 0x54));
    if (pContainer->field_f0 == 0)
        return 0;

    sub_66f110(0xa);

    CXTPDockingPaneBase* pPane2 = (CXTPDockingPaneBase*)field_64;
    int local = 0;
    int* pList;
    if (pPane2 != 0)
        pList = (int*)((char*)pPane2 - 0x20);
    else
        pList = 0;

    sub_6e4f00((int)&pList, 1, (int)&local);

    int* pIter = (int*)local;
    while (pIter != 0)
    {
        int* pNext = (int*)pIter[0];
        int* pItem = (int*)pIter[2];
        if (pItem != 0)
            pItem = (int*)((char*)pItem - 0x54);
        else
            pItem = 0;

        if (*(int*)((char*)pItem + 0x1c0) != 0)
        {
            sub_66f140((int)&local);
            return (CXTPDockingPaneCaptionButton*)1;
        }
        pIter = pNext;
    }

    sub_66f140((int)&local);
    return 0;
}
