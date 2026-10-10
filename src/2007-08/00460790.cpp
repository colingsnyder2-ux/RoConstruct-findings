// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CScriptEditor_Sub {
    virtual void slot4();
    virtual void slot8();
};

struct CScriptEditor {
    char pad[0x58];
    CScriptEditor_Sub* field_58;
    void func_62fff8();
    void destroy();
};

void CScriptEditor::destroy()
{
    CScriptEditor_Sub* p = field_58;
    if (p != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            p->slot4();
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                p->slot8();
            }
        }
    }
    func_62fff8();
}
