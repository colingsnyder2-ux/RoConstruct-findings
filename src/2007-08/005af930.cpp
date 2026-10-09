// from server: 73% by colin
// roc 2007-08 005af930  unit: RBX::Lighting  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005af930
//
// 005af930  8b442408             mov eax, dword ptr [esp + 8]
// 005af934  56                   push esi
// 005af935  57                   push edi
// 005af936  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005af93a  50                   push eax
// 005af93b  57                   push edi
// 005af93c  8bf1                 mov esi, ecx
// 005af93e  e85de9f8ff           call 0x53e2a0
// 005af943  39be18020000         cmp dword ptr [esi + 0x218], edi
// 005af949  7535                 jne 0x5af980
// 005af94b  8d4604               lea eax, [esi + 4]
// 005af94e  50                   push eax
// 005af94f  b9ec5b8c00           mov ecx, 0x8c5bec
// 005af954  e81709fcff           call 0x570270
// 005af959  85c0                 test eax, eax
// 005af95b  740f                 je 0x5af96c
// 005af95d  6a01                 push 1
// 005af95f  8d4c2414             lea ecx, [esp + 0x14]
// 005af963  51                   push ecx
// 005af964  8d4810               lea ecx, [eax + 0x10]
// 005af967  e8f4efffff           call 0x5ae960
// 005af96c  56                   push esi
// 005af96d  e80e1debff           call 0x461680
// 005af972  83c404               add esp, 4
// 005af975  85c0                 test eax, eax
// 005af977  7407                 je 0x5af980
// 005af979  8bc8                 mov ecx, eax
// 005af97b  e880e1f7ff           call 0x52db00
// 005af980  5f                   pop edi
// 005af981  5e                   pop esi
// 005af982  c20800               ret 8

struct Lighting {
    char pad[0x218];
    int field_218;
    void func_005af930(int a, int b);
};

extern "C" int __stdcall func_0053e2a0(int a, int b);
extern "C" int __stdcall func_00570270(int a);
extern "C" int __stdcall func_005ae960(int a, int b);
extern "C" int __stdcall func_00461680(int a);
extern "C" int __stdcall func_0052db00(int a);

void Lighting::func_005af930(int a, int b)
{
    func_0053e2a0(a, b);
    if (field_218 == a) {
        int p = func_00570270((int)(this + 1));
        if (p) {
            func_005ae960(p + 0x10, 1);
        }
        int r = func_00461680((int)this);
        if (r) {
            func_0052db00(r);
        }
    }
}
