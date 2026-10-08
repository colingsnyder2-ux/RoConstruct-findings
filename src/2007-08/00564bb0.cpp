// from server: 76% by colin
// roc 2007-08 00564bb0  unit: RBX::RedoState  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564bb0
//
// 00564bb0  51                   push ecx
// 00564bb1  8b4108               mov eax, dword ptr [ecx + 8]
// 00564bb4  85c0                 test eax, eax
// 00564bb6  c701f4957a00         mov dword ptr [ecx], 0x7a95f4
// 00564bbc  7412                 je 0x564bd0
// 00564bbe  8b4904               mov ecx, dword ptr [ecx + 4]
// 00564bc1  8d1424               lea edx, [esp]
// 00564bc4  890c24               mov dword ptr [esp], ecx
// 00564bc7  52                   push edx
// 00564bc8  8d4804               lea ecx, [eax + 4]
// 00564bcb  e860feffff           call 0x564a30
// 00564bd0  59                   pop ecx
// 00564bd1  c3                   ret 

struct RedoState {
    void* vtable;
    int field4;
    void* field8;
    void destroy();
};

extern "C" void __stdcall sub_564A30(void* a, void* b);

void RedoState::destroy()
{
    void* p = field8;
    vtable = (void*)0x7a95f4;
    if (p == 0) {
        int tmp = field4;
        sub_564A30((char*)p + 4, &tmp);
    }
}
