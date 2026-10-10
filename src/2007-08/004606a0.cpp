// from server: 44% by colin
struct CScriptEditor {
    char pad[0x0c];
    int m_unk0c;
};

extern "C" void* __stdcall sub_45d230(int);
extern "C" void* __stdcall sub_6301c0(void*);
extern "C" void* __stdcall sub_45bf30(void*, int);
extern "C" void* __stdcall sub_45c950(void*, void*, int);
extern "C" void* __stdcall sub_45ce70(void*, int, void*);
extern "C" void __stdcall sub_630a1e(void*, void*);
extern "C" void* __stdcall GetFocus();
extern "C" char* __cdecl _strupr(char*);
extern "C" char* __cdecl strstr(const char*, const char*);

void __fastcall CScriptEditor_4606a0(CScriptEditor* self, int, int arg)
{
    char buf[0x24];
    void* v;
    void* p;
    void* q;
    int a;
    int b;
    int c;

    v = sub_45d230(arg);
    p = sub_6301c0(GetFocus());
    if (p != 0) {
        int x = (v != 0) ? *(int*)((char*)v + 0x20) : 0;
        if (*(int*)((char*)p + 0x20) == x) {
            a = self->m_unk0c - 7;
            b = 0;
            c = (a > 0) ? a : b;
            q = sub_45bf30(v, 1);
            a = self->m_unk0c + 7;
            if ((int)q < a) {
                q = (void*)a;
            }
            sub_45c950(v, &buf[0x10], 1);
            _strupr(buf);
            if (strstr(buf, (const char*)0x794a98) != 0) {
                sub_45ce70(v, self->m_unk0c, (void*)0x794a8c);
            }
        }
    }
    sub_630a1e(buf, (void*)(*(int*)(buf + 0x24) ^ (int)&buf[0x24]));
}
