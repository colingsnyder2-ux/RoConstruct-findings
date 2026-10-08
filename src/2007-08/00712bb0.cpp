// from server: 62% by colin
// roc 2007-08 00712bb0  unit: CXTShadowWnd  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712bb0
//
// 00712bb0  8b442404             mov eax, dword ptr [esp + 4]
// 00712bb4  56                   push esi
// 00712bb5  6a00                 push 0
// 00712bb7  50                   push eax
// 00712bb8  8bf1                 mov esi, ecx
// 00712bba  e81102f9ff           call 0x6a2dd0
// 00712bbf  50                   push eax
// 00712bc0  8bce                 mov ecx, esi
// 00712bc2  e8c901f9ff           call 0x6a2d90
// 00712bc7  5e                   pop esi
// 00712bc8  c20400               ret 4

struct CXTShadowWnd {
    void func_00712bb0(int);
};

extern "C" int __stdcall sub_006a2dd0(int, int);
extern "C" int __stdcall sub_006a2d90(int);

void CXTShadowWnd::func_00712bb0(int a)
{
    sub_006a2d90(sub_006a2dd0(a, 0));
}
