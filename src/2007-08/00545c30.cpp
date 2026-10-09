// from server: 35% by colin
// roc 2007-08 00545c30  unit: RBX::MD5HasherImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545c30
//
// 00545c30  6aff                 push -1
// 00545c32  6858197500           push 0x751958
// 00545c37  64a100000000         mov eax, dword ptr fs:[0]
// 00545c3d  50                   push eax
// 00545c3e  64892500000000       mov dword ptr fs:[0], esp
// 00545c45  51                   push ecx
// 00545c46  56                   push esi
// 00545c47  8bf1                 mov esi, ecx
// 00545c49  89742404             mov dword ptr [esp + 4], esi
// 00545c4d  8d4e20               lea ecx, [esi + 0x20]
// 00545c50  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00545c58  e82372feff           call 0x52ce80
// 00545c5d  8bce                 mov ecx, esi
// 00545c5f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00545c67  ff15ace67700         call dword ptr [0x77e6ac]
// 00545c6d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00545c71  5e                   pop esi
// 00545c72  64890d00000000       mov dword ptr fs:[0], ecx
// 00545c79  83c410               add esp, 0x10
// 00545c7c  c3                   ret 

struct MD5HasherImpl {
    char pad[0x20];
    void* context;
    void* resultString;
    bool resultReady;
    void destructor();
};

extern "C" void __stdcall sub_52CE80(void*);
extern "C" void __stdcall sub_77E6AC(void*);

void MD5HasherImpl::destructor()
{
    sub_52CE80((char*)this + 0x20);
    sub_77E6AC(this);
}
