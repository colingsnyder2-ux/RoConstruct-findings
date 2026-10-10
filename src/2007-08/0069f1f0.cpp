// from server: 33% by colin
struct CXTPWinThemeWrapper
{
    void destroy();
    int field0;
    char pad[0x50];
    int field54;
    char pad2[0x7c];
    int fieldD4;
    int fieldD8;
    int fieldDC;
};

void CXTPWinThemeWrapper::destroy()
{
    field0 = 0x7d2e94;
    field54 = 0x7d2e84;
    (*(void (__thiscall*)(void*))(*(void***)((char*)this + 0xdc)))((char*)this + 0xdc);
    (*(void (__thiscall*)(void*))(*(void***)((char*)this + 0xd4)))((char*)this + 0xd4);
    (*(void (__stdcall**)(void*))0x77ddbc)((char*)this + 0xd0);
    (*(void (__thiscall*)(void*))(*(void***)((char*)this + 0x54)))((char*)this + 0x54);
    (*(void (__thiscall*)(void*))(*(void***)this))(this);
}
