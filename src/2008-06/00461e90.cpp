// from server: 93% by atomic.potato
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct ScintillaFindReplaceDlg {
    char pad[0x19c];
    void* field_19c;

    void* method_00461e90();
};

extern "C" void* __stdcall sub_6a0e8a();
extern "C" void* __stdcall sub_6a1418(void*, unsigned int);

void* ScintillaFindReplaceDlg::method_00461e90()
{
    void* edi = sub_6a0e8a();
    void* eax = sub_6a1418(this, 0x412);
    void* ecx = field_19c;
    void* edx = *(void**)((char*)eax + 0x20);
    SendMessageA(edx, 0xf1, (unsigned int)ecx, 0);
    return edi;
}
