// from server: 69% by colin
// roc 2007-08 00671d80  unit: CPropertyGridItemBrickColor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671d80
//
// 00671d80  83ec08               sub esp, 8
// 00671d83  56                   push esi
// 00671d84  57                   push edi
// 00671d85  8d442408             lea eax, [esp + 8]
// 00671d89  50                   push eax
// 00671d8a  8bf1                 mov esi, ecx
// 00671d8c  ff1554ec7700         call dword ptr [0x77ec54]
// 00671d92  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00671d96  8d4c2408             lea ecx, [esp + 8]
// 00671d9a  51                   push ecx
// 00671d9b  57                   push edi
// 00671d9c  8bce                 mov ecx, esi
// 00671d9e  e81dffffff           call 0x671cc0
// 00671da3  8bc7                 mov eax, edi
// 00671da5  5f                   pop edi
// 00671da6  5e                   pop esi
// 00671da7  83c408               add esp, 8
// 00671daa  c20400               ret 4

struct CPropertyGridItemBrickColor
{
    void sub_00671CC0(int* pt);
    int* method(int* pt);
};

extern "C" int __stdcall GetCursorPos(int* lpPoint);

int* CPropertyGridItemBrickColor::method(int* pt)
{
    int local[2];
    GetCursorPos(local);
    sub_00671CC0(local);
    return pt;
}
