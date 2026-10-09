// roc 2008-06 00432950  unit: RBX::VHat::?$FactoryProduct::Creator  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432950
//
// 00432950  8b442404             mov eax, dword ptr [esp + 4]
// 00432954  8b4904               mov ecx, dword ptr [ecx + 4]
// 00432957  50                   push eax
// 00432958  6a00                 push 0
// 0043295a  6865040000           push 0x465
// 0043295f  51                   push ecx
// 00432960  ff150c2e8000         call dword ptr [0x802e0c]
// 00432966  c20400               ret 4
// copied from an identical function in another client (function ?method@S@ns_ROCX000001@@QAEXH@Z)

namespace ns_ROCX000001 {
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
