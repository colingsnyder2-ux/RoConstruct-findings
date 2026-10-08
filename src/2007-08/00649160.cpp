// from server: 76% by colin
// roc 2007-08 00649160  unit: CXTPCommandBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00649160
//
// 00649160  8b442404             mov eax, dword ptr [esp + 4]
// 00649164  8b4904               mov ecx, dword ptr [ecx + 4]
// 00649167  6a00                 push 0
// 00649169  50                   push eax
// 0064916a  51                   push ecx
// 0064916b  e8926dfeff           call 0x62ff02
// 00649170  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 00649176  8b09                 mov ecx, dword ptr [ecx]
// 00649178  e843fdffff           call 0x648ec0
// 0064917d  c20400               ret 4

struct CXTPCommandBar {
    char pad0[4];
    void* m_pData;
    void f(void* a1);
};

extern "C" void* __stdcall sub_0062ff02(void* a1, void* a2, int a3);
extern "C" void __stdcall sub_00648ec0(void* a1);

void CXTPCommandBar::f(void* a1)
{
    void* p = sub_0062ff02(m_pData, a1, 0);
    void* q = *(void**)((char*)p + 0x94);
    sub_00648ec0(*(void**)q);
}
