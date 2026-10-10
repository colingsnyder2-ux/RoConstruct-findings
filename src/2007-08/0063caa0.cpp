// from server: 62% by colin
struct CXTPControlActions {
    void AddAction(int* pAction);
    void AddActions(void* pActions);
    void OnRemoved();
};

extern "C" void __stdcall sub_6D7CF0();
extern "C" void __stdcall sub_6EBD30(void*, int*, int*);
extern "C" void* __stdcall sub_6353A0(int);

void CXTPControlActions::AddActions(void* pActions)
{
    int count;
    int index;
    int action;

    sub_6D7CF0();

    count = *(int*)((char*)pActions + 0xc);
    count = -(int)(count != 0);

    if (count != 0) {
        do {
            sub_6EBD30(pActions, &action, &index);
            void* p = sub_6353A0(action);
            *(int*)p = index;
            count++;
        } while (count != 0);
    }
}
