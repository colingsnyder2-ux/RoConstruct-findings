// roc 2007-03 00433660  unit: seg_00430000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00433660
//
// 00433660  8b442404             mov eax, dword ptr [esp + 4]
// 00433664  8b4904               mov ecx, dword ptr [ecx + 4]
// 00433667  50                   push eax
// 00433668  6a00                 push 0
// 0043366a  6865040000           push 0x465
// 0043366f  51                   push ecx
// 00433670  ff1548ee7700         call dword ptr [0x77ee48]
// 00433676  c20400               ret 4
// copied from an identical function in another client (function ?method@S@ns_ROCX00001c@@QAEXH@Z)

namespace ns_ROCX00001c {
extern "C" int (__stdcall* PostMessageA)(void* hWnd, unsigned int Msg, unsigned int wParam, int lParam);

struct S {
    void* field0;
    void* field4;
    void method(int arg);
};

void S::method(int arg)
{
    PostMessageA(this->field4, 0x465, 0, arg);
}
}
