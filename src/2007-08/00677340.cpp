// from server: 67% by colin
// roc 2007-08 00677340  unit: CXTPPopupBar::CControlExpandButton  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677340
//
// 00677340  83ec08               sub esp, 8
// 00677343  56                   push esi
// 00677344  8bf1                 mov esi, ecx
// 00677346  e8b52cfcff           call 0x63a000
// 0067734b  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00677351  8b10                 mov edx, dword ptr [eax]
// 00677353  8b92ac000000         mov edx, dword ptr [edx + 0xac]
// 00677359  6a00                 push 0
// 0067735b  6a01                 push 1
// 0067735d  51                   push ecx
// 0067735e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00677362  56                   push esi
// 00677363  6a01                 push 1
// 00677365  51                   push ecx
// 00677366  8d4c241c             lea ecx, [esp + 0x1c]
// 0067736a  51                   push ecx
// 0067736b  8bc8                 mov ecx, eax
// 0067736d  ffd2                 call edx
// 0067736f  5e                   pop esi
// 00677370  83c408               add esp, 8
// 00677373  c20400               ret 4

struct CXTPPopupBar_CControlExpandButton {
    char pad[0xfc];
    int field_fc;
    void* sub_63a000();
    void func(int);
};

void CXTPPopupBar_CControlExpandButton::func(int arg) {
    void* obj = sub_63a000();
    int v = *(int*)((char*)this + 0xfc);
    int* vt = *(int**)obj;
    void (__thiscall *fn)(void*, int, int, int, int, int, int, int);
    fn = (void (__thiscall *)(void*, int, int, int, int, int, int, int))*(int*)((char*)vt + 0xac);
    int local;
    fn(obj, arg, 1, (int)this, v, 1, 0, (int)&local);
}
