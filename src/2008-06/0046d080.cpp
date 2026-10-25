// from server: 100% by atomic.potato
// roc 2008-06 0046d080  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046d080
//
// 0046d080  8b442404             mov eax, dword ptr [esp + 4]
// 0046d084  50                   push eax
// 0046d085  e886ffffff           call 0x46d010
// 0046d08a  85c0                 test eax, eax
// 0046d08c  7406                 je 0x46d094
// 0046d08e  8b4008               mov eax, dword ptr [eax + 8]
// 0046d091  c20400               ret 4
// 0046d094  b801000000           mov eax, 1
// 0046d099  c20400               ret 4

struct S
{
    int f(int);
};

extern "C" int __stdcall g(int);

int S::f(int a)
{
    S *p = (S *)g(a);
    if (p)
        return *(int *)((char *)p + 8);
    return 1;
}
