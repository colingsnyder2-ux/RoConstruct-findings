// from server: 85% by colin
// roc 2007-08 006c7100  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c7100
//
// 006c7100  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 006c7106  85c0                 test eax, eax
// 006c7108  8b542404             mov edx, dword ptr [esp + 4]
// 006c710c  899170010000         mov dword ptr [ecx + 0x170], edx
// 006c7112  7418                 je 0x6c712c
// 006c7114  83782000             cmp dword ptr [eax + 0x20], 0
// 006c7118  7412                 je 0x6c712c
// 006c711a  8b4020               mov eax, dword ptr [eax + 0x20]
// 006c711d  6a00                 push 0
// 006c711f  52                   push edx
// 006c7120  68cf000000           push 0xcf
// 006c7125  50                   push eax
// 006c7126  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006c712c  c20400               ret 4

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);

struct CXTPCustomizeSheet_CCustomizeEdit {
    char pad[0x168];
    void* field_0x168;
    char pad2[0x170 - 0x168 - 4];
    int field_0x170;
    void SetValue(int value);
};

void CXTPCustomizeSheet_CCustomizeEdit::SetValue(int value)
{
    void* p = field_0x168;
    field_0x170 = value;
    if (p == 0) {
        void* h = *(void**)((char*)p + 0x20);
        if (h != 0) {
            SendMessageA(h, 0xcf, (unsigned int)value, 0);
        }
    }
}
