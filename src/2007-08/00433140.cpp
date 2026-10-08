// from server: 100% by colin
// roc 2007-08 00433140  unit: RBX::VHat::?$FactoryProduct::Creator  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433140
//
// 00433140  8b442404             mov eax, dword ptr [esp + 4]
// 00433144  8b4904               mov ecx, dword ptr [ecx + 4]
// 00433147  50                   push eax
// 00433148  6a00                 push 0
// 0043314a  6865040000           push 0x465
// 0043314f  51                   push ecx
// 00433150  ff15d0ec7700         call dword ptr [0x77ecd0]
// 00433156  c20400               ret 4

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
