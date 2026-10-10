// from server: 35% by colin
struct CScriptEditor {
    void init();
};

extern "C" unsigned long __stdcall GetCurrentThreadId();
extern "C" void* __cdecl sub_433A50();

void CScriptEditor::init()
{
    *(void**)this = (void*)0x794b60;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
    *(unsigned long*)((char*)this + 0x14) = GetCurrentThreadId();
    *(void**)((char*)this + 0x18) = sub_433A50();
}
