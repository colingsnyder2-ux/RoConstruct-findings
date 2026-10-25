// from server: 100% by tester
// roc 2010-06 007f04a0  unit: CPatchedControlComboBox  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f04a0
//
// 007f04a0  83ec08               sub esp, 8
// 007f04a3  56                   push esi
// 007f04a4  57                   push edi
// 007f04a5  8d442408             lea eax, [esp + 8]
// 007f04a9  50                   push eax
// 007f04aa  8bf1                 mov esi, ecx
// 007f04ac  ff1574bc9e00         call dword ptr [0x9ebc74]
// 007f04b2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007f04b6  8d4c2408             lea ecx, [esp + 8]
// 007f04ba  51                   push ecx
// 007f04bb  57                   push edi
// 007f04bc  8bce                 mov ecx, esi
// 007f04be  e81dffffff           call 0x7f03e0
// 007f04c3  8bc7                 mov eax, edi
// 007f04c5  5f                   pop edi
// 007f04c6  5e                   pop esi
// 007f04c7  83c408               add esp, 8
// 007f04ca  c20400               ret 4

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
