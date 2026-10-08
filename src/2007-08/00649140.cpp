// from server: 84% by colin
// roc 2007-08 00649140  unit: CXTPCommandBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00649140
//
// 00649140  8b4904               mov ecx, dword ptr [ecx + 4]
// 00649143  51                   push ecx
// 00649144  e8b96dfeff           call 0x62ff02
// 00649149  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0064914f  8b08                 mov ecx, dword ptr [eax]
// 00649151  e81afbffff           call 0x648c70
// 00649156  c3                   ret 

extern "C" void* __stdcall sub_62FF02(int);
extern "C" int __fastcall sub_648C70(void*);

struct CXTPCommandBar {
    void* vtable;
    int field_4;
    int method();
};

int CXTPCommandBar::method()
{
    void* p = sub_62FF02(field_4);
    void* q = *(void**)((char*)p + 0x94);
    return sub_648C70(*(void**)q);
}
