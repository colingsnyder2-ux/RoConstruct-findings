// from server: 18% by Intel
struct CArrayBase {
    void* vftable;
    char pad[0x100];
    int m_nType;

    void __thiscall Method(int nType);
};

extern "C" void* __cdecl operator_new(unsigned int size);
void __cdecl sub_A6CCC0(void* thisptr);
void __cdecl sub_A02C70(void* thisptr);
void __cdecl sub_A4DFA0(void* thisptr);
void __cdecl sub_A4E080(void* thisptr);
void __cdecl sub_A01BD0(void* thisptr);
void __cdecl sub_A6EEF0(void* thisptr);
void __cdecl sub_A4DB70(void* thisptr, void* arg);

void __thiscall CArrayBase::Method(int nType) {
    m_nType = nType;
    void* pObj = 0;
    int state = -1;

    if (nType != 2) {
        pObj = operator_new(0x208);
        state = 0;
        if (pObj) {
            sub_A6CCC0(pObj);
            *(int*)pObj = 0xC21F7C;
        }
    } else if (nType == 4) {
        pObj = operator_new(0x218);
        state = 1;
        if (pObj) {
            sub_A02C70(pObj);
        }
    } else if (nType == 8) {
        pObj = operator_new(0x220);
        state = 2;
        if (pObj) {
            sub_A4DFA0(pObj);
        }
    } else if (nType == 0x10) {
        pObj = operator_new(0x21C);
        state = 3;
        if (pObj) {
            sub_A6EEF0(pObj);
        }
    } else if (nType == 0x20) {
        pObj = operator_new(0x218);
        state = 4;
        if (pObj) {
            sub_A4E080(pObj);
        }
    } else {
        pObj = operator_new(0x208);
        state = 5;
        if (pObj) {
            sub_A01BD0(pObj);
        }
    }

    state = -1;
    sub_A4DB70(this, pObj);
}
