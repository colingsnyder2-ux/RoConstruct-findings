// from server: 100% by colin
// roc 2007-08 00469820  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00469820
//
// 00469820  8b442404             mov eax, dword ptr [esp + 4]
// 00469824  50                   push eax
// 00469825  e896ffffff           call 0x4697c0
// 0046982a  85c0                 test eax, eax
// 0046982c  7406                 je 0x469834
// 0046982e  8b4008               mov eax, dword ptr [eax + 8]
// 00469831  c20400               ret 4
// 00469834  b801000000           mov eax, 1
// 00469839  c20400               ret 4

extern "C" int* __stdcall sub_4697c0(int index);

struct LDraw2RobloxColorMap
{
    int lookup(int index);
};

int LDraw2RobloxColorMap::lookup(int index)
{
    int* p = sub_4697c0(index);
    if (p)
        return p[2];
    return 1;
}
