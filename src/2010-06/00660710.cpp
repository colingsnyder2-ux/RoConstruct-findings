// from server: 100% by atomic.potato
// roc 2010-06 00660710  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00660710
//
// 00660710  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00660714  8d442408             lea eax, [esp + 8]
// 00660718  50                   push eax
// 00660719  e8d2f5ffff           call 0x65fcf0
// 0066071e  c3                   ret 

struct S
{
    void method(void**);
};

void __cdecl wrapper(void* arg1, void* arg2)
{
    ((S*)arg1)->method(&arg2);
}
