// from server: 87% by colin
// roc 2007-08 004203f0  unit: CRobloxTreeCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004203f0
//
// 004203f0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004203f3  56                   push esi
// 004203f4  8b35d8ec7700         mov esi, dword ptr [0x77ecd8]
// 004203fa  6a00                 push 0
// 004203fc  6a00                 push 0
// 004203fe  680f110000           push 0x110f
// 00420403  50                   push eax
// 00420404  ffd6                 call esi
// 00420406  50                   push eax
// 00420407  e8b4fd2000           call 0x6301c0
// 0042040c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0042040f  6a00                 push 0
// 00420411  6a20                 push 0x20
// 00420413  68c5000000           push 0xc5
// 00420418  51                   push ecx
// 00420419  ffd6                 call esi
// 0042041b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0042041f  c70200000000         mov dword ptr [edx], 0
// 00420425  5e                   pop esi
// 00420426  c20800               ret 8

extern "C" __declspec(dllimport) void *__stdcall SendMessageA(void *, unsigned int, unsigned int, long);
extern "C" void *__cdecl sub_6301C0(void *);

struct CRobloxTreeCtrl {
    char pad[0x20];
    void *field_0x20;
    void sub_4203F0(unsigned int, unsigned int *);
};

void CRobloxTreeCtrl::sub_4203F0(unsigned int a1, unsigned int *a2) {
    void *hWnd = this->field_0x20;
    void *result = (void *)SendMessageA(hWnd, 0x110F, 0, 0);
    void *obj = sub_6301C0(result);
    void *hWnd2 = *(void **)((char *)obj + 0x20);
    SendMessageA(hWnd2, 0xC5, 0x20, 0);
    *a2 = 0;
}
