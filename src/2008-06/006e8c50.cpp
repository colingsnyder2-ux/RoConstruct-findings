// from server: 100% by tester
// roc 2008-06 006e8c50  unit: CPatchedControlComboBox  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8c50
//
// 006e8c50  83ec08               sub esp, 8
// 006e8c53  56                   push esi
// 006e8c54  57                   push edi
// 006e8c55  8d442408             lea eax, [esp + 8]
// 006e8c59  50                   push eax
// 006e8c5a  8bf1                 mov esi, ecx
// 006e8c5c  ff159c2d8000         call dword ptr [0x802d9c]
// 006e8c62  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006e8c66  8d4c2408             lea ecx, [esp + 8]
// 006e8c6a  51                   push ecx
// 006e8c6b  57                   push edi
// 006e8c6c  8bce                 mov ecx, esi
// 006e8c6e  e81dffffff           call 0x6e8b90
// 006e8c73  8bc7                 mov eax, edi
// 006e8c75  5f                   pop edi
// 006e8c76  5e                   pop esi
// 006e8c77  83c408               add esp, 8
// 006e8c7a  c20400               ret 4

struct CPropertyGridItemBrickColor
{
    void sub_00671CC0(int* pt, int* local);
    int* method(int* pt);
};

extern "C" int (__stdcall *GetCursorPos)(int* lpPoint);

int* CPropertyGridItemBrickColor::method(int* pt)
{
    int local[2];
    GetCursorPos(local);
    sub_00671CC0(pt, local);
    return pt;
}
