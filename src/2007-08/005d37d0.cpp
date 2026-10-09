// from server: 37% by colin
// roc 2007-08 005d37d0  unit: RBX::Tool  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d37d0
//
// 005d37d0  c70000000000         mov dword ptr [eax], 0
// 005d37d6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d37de  89642430             mov dword ptr [esp + 0x30], esp
// 005d37e2  8911                 mov dword ptr [ecx], edx
// 005d37e4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d37e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d37ec  52                   push edx
// 005d37ed  50                   push eax
// 005d37ee  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005d37f3  e868d5fbff           call 0x590d60
// 005d37f8  50                   push eax
// 005d37f9  8bce                 mov ecx, esi
// 005d37fb  c644242000           mov byte ptr [esp + 0x20], 0
// 005d3800  e8bb17faff           call 0x574fc0
// 005d3805  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005d3809  51                   push ecx
// 005d380a  e853c40500           call 0x62fc62
// 005d380f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d3813  83c404               add esp, 4
// 005d3816  c70624b37b00         mov dword ptr [esi], 0x7bb324
// 005d381c  8bc6                 mov eax, esi
// 005d381e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d3825  5e                   pop esi
// 005d3826  83c40c               add esp, 0xc
// 005d3829  c22400               ret 0x24

struct Tool {
    void construct(int, int, int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_590d60(int, int);
extern "C" void __cdecl sub_574fc0();
extern "C" void __cdecl sub_62fc62(int);

void Tool::construct(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(int*)this = 0;
    *(int*)((char*)this + 4) = a1;
    int v = sub_590d60(a2, a3);
    sub_574fc0();
    sub_62fc62(a4);
    *(int*)this = 0x7bb324;
}
