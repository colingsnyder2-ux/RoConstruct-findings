// from server: 33% by colin
extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __fastcall sub_6301E4(void* p);
extern "C" void __fastcall sub_6E71C0(void* p);
extern "C" void __fastcall sub_6E7790(void* p);
extern "C" void __fastcall sub_6E9FF0(void* p);
extern "C" void __fastcall sub_6EA820(void* p);
extern "C" void __fastcall sub_6EAF10(void* p);
extern "C" void __fastcall sub_6EB270(void* p);
extern "C" void __fastcall sub_6EB330(void* p);
extern "C" void __fastcall sub_6EB410(void* p);
extern "C" void __fastcall sub_6EB460(void* p);
extern "C" void __fastcall sub_6EB650(void* p);
extern "C" void __fastcall sub_6EB8F0(void* p);

struct CXTPDockingPaneManager {
    void sub_66F6C0();
    void sub_66F770(int nType);
};

void CXTPDockingPaneManager::sub_66F770(int nType)
{
    void* pOld = *(void**)((char*)this + 0xd4);
    if (pOld != 0)
        sub_6301E4(pOld);

    void* pNew;
    if (nType == 1) {
        pNew = sub_62FEF6(0x23c);
        if (pNew != 0)
            sub_6EA820(pNew);
        else
            pNew = 0;
    } else if (nType == 4) {
        pNew = sub_62FEF6(0x1e0);
        if (pNew != 0)
            sub_6E7790(pNew);
        else
            pNew = 0;
    } else if (nType == 5) {
        pNew = sub_62FEF6(0x23c);
        if (pNew != 0)
            sub_6EAF10(pNew);
        else
            pNew = 0;
    } else if (nType == 2) {
        pNew = sub_62FEF6(0x244);
        if (pNew != 0)
            sub_6EB270(pNew);
        else
            pNew = 0;
    } else if (nType == 3) {
        pNew = sub_62FEF6(0x23c);
        if (pNew != 0)
            sub_6EB460(pNew);
        else
            pNew = 0;
    } else if (nType == 6) {
        pNew = sub_62FEF6(0x23c);
        if (pNew != 0)
            sub_6EB650(pNew);
        else
            pNew = 0;
    } else if (nType == 9) {
        pNew = sub_62FEF6(0x240);
        if (pNew != 0)
            sub_6EB8F0(pNew);
        else
            pNew = 0;
    } else if (nType == 7) {
        pNew = sub_62FEF6(0x244);
        if (pNew != 0)
            sub_6EB410(pNew);
        else
            pNew = 0;
    } else if (nType == 8) {
        pNew = sub_62FEF6(0x1e8);
        if (pNew != 0)
            sub_6E9FF0(pNew);
        else
            pNew = 0;
    } else if (nType == 10) {
        pNew = sub_62FEF6(0x244);
        if (pNew != 0)
            sub_6EB330(pNew);
        else
            pNew = 0;
    } else {
        pNew = sub_62FEF6(0x1e0);
        if (pNew != 0)
            sub_6E71C0(pNew);
        else
            pNew = 0;
    }

    *(void**)((char*)this + 0xd4) = pNew;
    *(int*)((char*)pNew + 0x1a0) = nType;

    void* pObj = *(void**)((char*)this + 0xd4);
    void** vtbl = *(void***)pObj;
    void (__fastcall *fn)(void*) = (void (__fastcall *)(void*))vtbl[0x68 / 4];
    fn(pObj);

    sub_66F6C0();

    if (nType == 9)
        *(int*)((char*)this + 0x120) = 1;
}
