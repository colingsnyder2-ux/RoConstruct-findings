// from server: 51% by atomic.potato
// roc 2011-06 00627ca0  unit: RBX::VScriptContext::?$EventDesc  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00627ca0
//
// 00627ca0  8b442404             mov eax, dword ptr [esp + 4]
// 00627ca4  85c0                 test eax, eax
// 00627ca6  7415                 je 0x627cbd
// 00627ca8  8b542408             mov edx, dword ptr [esp + 8]
// 00627cac  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00627caf  83c0e4               add eax, -0x1c
// 00627cb2  52                   push edx
// 00627cb3  03c8                 add ecx, eax
// 00627cb5  e8f6d7ffff           call 0x6254b0
// 00627cba  c20800               ret 8
// 00627cbd  8b542408             mov edx, dword ptr [esp + 8]
// 00627cc1  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00627cc4  33c0                 xor eax, eax
// 00627cc6  52                   push edx
// 00627cc7  03c8                 add ecx, eax
// 00627cc9  e8e2d7ffff           call 0x6254b0
// 00627cce  c20800               ret 8

struct Callee
{
    void method(int);
};

struct EventDesc
{
    void f(int, int);
};

void EventDesc::f(int a, int b)
{
    if (a)
    {
        ((Callee *)((char *)*(unsigned int *)((char *)this + 0x24) + (a - 0x1c)))->method(b);
    }
    else
    {
        ((Callee *)(*(unsigned int *)((char *)this + 0x24)))->method(b);
    }
}
