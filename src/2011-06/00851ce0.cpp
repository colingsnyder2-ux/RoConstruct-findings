// from server: 100% by tester
// roc 2011-06 00851ce0  unit: CSourceStream  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851ce0
//
// 00851ce0  83ec08               sub esp, 8
// 00851ce3  56                   push esi
// 00851ce4  57                   push edi
// 00851ce5  8d442408             lea eax, [esp + 8]
// 00851ce9  50                   push eax
// 00851cea  8bf1                 mov esi, ecx
// 00851cec  ff15c819a400         call dword ptr [0xa419c8]
// 00851cf2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00851cf6  8d4c2408             lea ecx, [esp + 8]
// 00851cfa  51                   push ecx
// 00851cfb  57                   push edi
// 00851cfc  8bce                 mov ecx, esi
// 00851cfe  e81dffffff           call 0x851c20
// 00851d03  8bc7                 mov eax, edi
// 00851d05  5f                   pop edi
// 00851d06  5e                   pop esi
// 00851d07  83c408               add esp, 8
// 00851d0a  c20400               ret 4

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
