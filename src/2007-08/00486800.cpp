// from server: 69% by colin
// roc 2007-08 00486800  unit: G3D::GWindow  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486800
//
// 00486800  51                   push ecx
// 00486801  8b01                 mov eax, dword ptr [ecx]
// 00486803  8b500c               mov edx, dword ptr [eax + 0xc]
// 00486806  56                   push esi
// 00486807  c744240400000000     mov dword ptr [esp + 4], 0
// 0048680f  ffd2                 call edx
// 00486811  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00486815  6854597800           push 0x785954
// 0048681a  8bce                 mov ecx, esi
// 0048681c  ff1598e67700         call dword ptr [0x77e698]
// 00486822  8bc6                 mov eax, esi
// 00486824  5e                   pop esi
// 00486825  59                   pop ecx
// 00486826  c20800               ret 8

struct GWindow {
    void func_00486800(int, int);
};

extern "C" void* __stdcall func_0077e698(void*, const char*);

void GWindow::func_00486800(int a, int b)
{
    int zero = 0;
    void* p = *(void**)this;
    void (*fn)(void*, int*) = *(void (**)(void*, int*))((char*)p + 0xc);
    fn(this, &zero);
    func_0077e698(&zero, "list<T> too long");
    (void)a;
    (void)b;
}
