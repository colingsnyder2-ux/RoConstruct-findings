// roc 2009-12 0083c340  unit: CXTPAccessible  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c340
//
// 0083c340  83ec08               sub esp, 8
// 0083c343  56                   push esi
// 0083c344  57                   push edi
// 0083c345  8d442408             lea eax, [esp + 8]
// 0083c349  50                   push eax
// 0083c34a  8bf1                 mov esi, ecx
// 0083c34c  ff1538cc9800         call dword ptr [0x98cc38]
// 0083c352  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0083c356  8d4c2408             lea ecx, [esp + 8]
// 0083c35a  51                   push ecx
// 0083c35b  57                   push edi
// 0083c35c  8bce                 mov ecx, esi
// 0083c35e  e81dffffff           call 0x83c280
// 0083c363  8bc7                 mov eax, edi
// 0083c365  5f                   pop edi
// 0083c366  5e                   pop esi
// 0083c367  83c408               add esp, 8
// 0083c36a  c20400               ret 4
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX00000a@@QAEPAHPAH@Z)

namespace ns_ROCX00000a {
// from server: 100% by tester
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
}
